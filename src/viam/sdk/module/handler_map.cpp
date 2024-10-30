#include <viam/sdk/module/handler_map.hpp>

#include <google/protobuf/descriptor.h>

#include <viam/api/common/v1/common.pb.h>
#include <viam/api/module/v1/module.pb.h>
#include <viam/api/robot/v1/robot.pb.h>

#include <viam/sdk/common/logger.hpp>
#include <viam/sdk/resource/resource.hpp>

namespace viam {
namespace sdk {

viam::module::v1::HandlerMap HandlerMap_::to_proto() const {
    viam::module::v1::HandlerMap proto;
    for (const auto& h : this->handles_) {
        viam::module::v1::HandlerDefinition hd;
        for (const auto& model : h.second) {
            const std::string m = model.to_string();
            *hd.mutable_models()->Add() = m;
        }
        viam::robot::v1::ResourceRPCSubtype rpc_subtype;
        const Name name(h.first.api(), "", "");
        const viam::common::v1::ResourceName resource_name = name.to_proto();
        *rpc_subtype.mutable_subtype() = resource_name;
        *rpc_subtype.mutable_proto_service() = h.first.proto_service_name();
        *hd.mutable_subtype() = rpc_subtype;
        *proto.add_handlers() = hd;
    }

    return proto;
};

HandlerMap_::HandlerMap_(){};

// NOLINTNEXTLINE(readability-const-return-type)
const HandlerMap_ HandlerMap_::from_proto(const viam::module::v1::HandlerMap& proto) {
    HandlerMap_ hm;

    const google::protobuf::RepeatedPtrField<viam::module::v1::HandlerDefinition>& handlers =
        proto.handlers();

    for (const auto& handler : handlers) {
        std::vector<Model> models;
        const viam::common::v1::ResourceName name = handler.subtype().subtype();
        const API api(name.namespace_(), name.type(), name.subtype());
        const google::protobuf::DescriptorPool* pool =
            google::protobuf::DescriptorPool::generated_pool();
        const google::protobuf::ServiceDescriptor* sd = pool->FindServiceByName(name.type());
        const RPCSubtype handle(api, *sd);
        for (const auto& mod : handler.models()) {
            try {
                const Model model = Model::from_str(mod);
                models.push_back(model);
            } catch (std::string error) {  // NOLINT
                VIAM_SDK_TRIVIAL_CUSTOM_FORMATTED_LOG(log_level::error,
                                                      "Error processing model " + mod);
            }
        }
        hm.handles_.emplace(handle, models);
    }

    return hm;
}

void HandlerMap_::add_model(Model model, const RPCSubtype& subtype) {
    handles_[subtype].push_back(std::move(model));
}

std::ostream& operator<<(std::ostream& os, const HandlerMap_& hm) {
    for (const auto& kv : hm.handles_) {
        os << "API: " << kv.first.api().to_string() << '\n';
        for (const Model& model : kv.second) {
            os << "\tModel: " << model.to_string() << '\n';
        }
    }
    return os;
}

}  // namespace sdk
}  // namespace viam
