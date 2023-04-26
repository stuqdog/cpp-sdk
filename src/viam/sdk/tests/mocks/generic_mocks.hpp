#pragma once

#include <viam/api/common/v1/common.pb.h>
#include <viam/api/component/camera/v1/camera.grpc.pb.h>
#include <viam/api/component/camera/v1/camera.pb.h>

#include <viam/sdk/components/generic/client.hpp>
#include <viam/sdk/components/generic/generic.hpp>
#include <viam/sdk/components/generic/server.hpp>

namespace viam {
namespace sdktests {
namespace generic {

using namespace viam::sdk;

class MockGeneric : public Generic {
   public:
    MockGeneric(std::string name) : Generic(std::move(name)){};
    std::shared_ptr<std::unordered_map<std::string, std::shared_ptr<ProtoType>>> do_command(
        std::shared_ptr<std::unordered_map<std::string, std::shared_ptr<ProtoType>>> command)
        override;

    std::shared_ptr<std::unordered_map<std::string, std::shared_ptr<ProtoType>>> map;
    static std::shared_ptr<MockGeneric> get_mock_generic();
};

class MockGenericStub : public viam::component::generic::v1::GenericService::StubInterface {
   public:
    MockGenericStub();

    ::grpc::Status DoCommand(::grpc::ClientContext* context,
                             const ::viam::common::v1::DoCommandRequest& request,
                             ::viam::common::v1::DoCommandResponse* response) override;

   private:
    std::shared_ptr<GenericServer> server;
    std::shared_ptr<::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader<::viam::common::v1::DoCommandResponse>* AsyncDoCommandRaw(
        ::grpc::ClientContext* context,
        const ::viam::common::v1::DoCommandRequest& request,
        ::grpc::CompletionQueue* cq) override {
        throw std::runtime_error("Unimplemented");
    };

    ::grpc::ClientAsyncResponseReader<::viam::common::v1::DoCommandResponse>*
    PrepareAsyncDoCommandRaw(::grpc::ClientContext* context,
                             const ::viam::common::v1::DoCommandRequest& request,
                             ::grpc::CompletionQueue* cq) override {
        throw std::runtime_error("Unimplemented");
    };
};

class MockGenericClient : public GenericClient {
   public:
    MockGenericClient(std::string name)
        : GenericClient(std::move(name), std::make_unique<MockGenericStub>()){};
};

}  // namespace generic
}  // namespace sdktests
}  // namespace viam