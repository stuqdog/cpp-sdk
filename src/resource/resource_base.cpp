#include <grpcpp/support/status.h>

#include <common/proto_type.hpp>
#include <resource/resource_base.hpp>
#include <unordered_map>

grpc::StatusCode ResourceBase::stop(std::unordered_map<std::string, ProtoType*> ex) {
    return stop();
}

grpc::StatusCode ResourceBase::stop() {
    return grpc::StatusCode::UNIMPLEMENTED;
}

