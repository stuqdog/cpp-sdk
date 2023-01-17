// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: app/model/v1/model.proto

#include "app/model/v1/model.pb.h"
#include "app/model/v1/model.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace viam {
namespace app {
namespace model {
namespace v1 {

static const char* ModelService_method_names[] = {
  "/viam.app.model.v1.ModelService/Upload",
  "/viam.app.model.v1.ModelService/Delete",
  "/viam.app.model.v1.ModelService/Deploy",
  "/viam.app.model.v1.ModelService/Info",
};

std::unique_ptr< ModelService::Stub> ModelService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ModelService::Stub> stub(new ModelService::Stub(channel, options));
  return stub;
}

ModelService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Upload_(ModelService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_Delete_(ModelService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Deploy_(ModelService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Info_(ModelService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientWriter< ::viam::app::model::v1::UploadRequest>* ModelService::Stub::UploadRaw(::grpc::ClientContext* context, ::viam::app::model::v1::UploadResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::viam::app::model::v1::UploadRequest>::Create(channel_.get(), rpcmethod_Upload_, context, response);
}

void ModelService::Stub::async::Upload(::grpc::ClientContext* context, ::viam::app::model::v1::UploadResponse* response, ::grpc::ClientWriteReactor< ::viam::app::model::v1::UploadRequest>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::viam::app::model::v1::UploadRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_Upload_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::viam::app::model::v1::UploadRequest>* ModelService::Stub::AsyncUploadRaw(::grpc::ClientContext* context, ::viam::app::model::v1::UploadResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::viam::app::model::v1::UploadRequest>::Create(channel_.get(), cq, rpcmethod_Upload_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::viam::app::model::v1::UploadRequest>* ModelService::Stub::PrepareAsyncUploadRaw(::grpc::ClientContext* context, ::viam::app::model::v1::UploadResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::viam::app::model::v1::UploadRequest>::Create(channel_.get(), cq, rpcmethod_Upload_, context, response, false, nullptr);
}

::grpc::Status ModelService::Stub::Delete(::grpc::ClientContext* context, const ::viam::app::model::v1::DeleteRequest& request, ::viam::app::model::v1::DeleteResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::app::model::v1::DeleteRequest, ::viam::app::model::v1::DeleteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Delete_, context, request, response);
}

void ModelService::Stub::async::Delete(::grpc::ClientContext* context, const ::viam::app::model::v1::DeleteRequest* request, ::viam::app::model::v1::DeleteResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::app::model::v1::DeleteRequest, ::viam::app::model::v1::DeleteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void ModelService::Stub::async::Delete(::grpc::ClientContext* context, const ::viam::app::model::v1::DeleteRequest* request, ::viam::app::model::v1::DeleteResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::app::model::v1::DeleteResponse>* ModelService::Stub::PrepareAsyncDeleteRaw(::grpc::ClientContext* context, const ::viam::app::model::v1::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::app::model::v1::DeleteResponse, ::viam::app::model::v1::DeleteRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Delete_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::app::model::v1::DeleteResponse>* ModelService::Stub::AsyncDeleteRaw(::grpc::ClientContext* context, const ::viam::app::model::v1::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ModelService::Stub::Deploy(::grpc::ClientContext* context, const ::viam::app::model::v1::DeployRequest& request, ::viam::app::model::v1::DeployResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::app::model::v1::DeployRequest, ::viam::app::model::v1::DeployResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Deploy_, context, request, response);
}

void ModelService::Stub::async::Deploy(::grpc::ClientContext* context, const ::viam::app::model::v1::DeployRequest* request, ::viam::app::model::v1::DeployResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::app::model::v1::DeployRequest, ::viam::app::model::v1::DeployResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Deploy_, context, request, response, std::move(f));
}

void ModelService::Stub::async::Deploy(::grpc::ClientContext* context, const ::viam::app::model::v1::DeployRequest* request, ::viam::app::model::v1::DeployResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Deploy_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::app::model::v1::DeployResponse>* ModelService::Stub::PrepareAsyncDeployRaw(::grpc::ClientContext* context, const ::viam::app::model::v1::DeployRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::app::model::v1::DeployResponse, ::viam::app::model::v1::DeployRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Deploy_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::app::model::v1::DeployResponse>* ModelService::Stub::AsyncDeployRaw(::grpc::ClientContext* context, const ::viam::app::model::v1::DeployRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeployRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ModelService::Stub::Info(::grpc::ClientContext* context, const ::viam::app::model::v1::InfoRequest& request, ::viam::app::model::v1::InfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::app::model::v1::InfoRequest, ::viam::app::model::v1::InfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Info_, context, request, response);
}

void ModelService::Stub::async::Info(::grpc::ClientContext* context, const ::viam::app::model::v1::InfoRequest* request, ::viam::app::model::v1::InfoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::app::model::v1::InfoRequest, ::viam::app::model::v1::InfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Info_, context, request, response, std::move(f));
}

void ModelService::Stub::async::Info(::grpc::ClientContext* context, const ::viam::app::model::v1::InfoRequest* request, ::viam::app::model::v1::InfoResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Info_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::app::model::v1::InfoResponse>* ModelService::Stub::PrepareAsyncInfoRaw(::grpc::ClientContext* context, const ::viam::app::model::v1::InfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::app::model::v1::InfoResponse, ::viam::app::model::v1::InfoRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Info_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::app::model::v1::InfoResponse>* ModelService::Stub::AsyncInfoRaw(::grpc::ClientContext* context, const ::viam::app::model::v1::InfoRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

ModelService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ModelService_method_names[0],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< ModelService::Service, ::viam::app::model::v1::UploadRequest, ::viam::app::model::v1::UploadResponse>(
          [](ModelService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::viam::app::model::v1::UploadRequest>* reader,
             ::viam::app::model::v1::UploadResponse* resp) {
               return service->Upload(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ModelService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ModelService::Service, ::viam::app::model::v1::DeleteRequest, ::viam::app::model::v1::DeleteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ModelService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::app::model::v1::DeleteRequest* req,
             ::viam::app::model::v1::DeleteResponse* resp) {
               return service->Delete(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ModelService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ModelService::Service, ::viam::app::model::v1::DeployRequest, ::viam::app::model::v1::DeployResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ModelService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::app::model::v1::DeployRequest* req,
             ::viam::app::model::v1::DeployResponse* resp) {
               return service->Deploy(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ModelService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ModelService::Service, ::viam::app::model::v1::InfoRequest, ::viam::app::model::v1::InfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ModelService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::app::model::v1::InfoRequest* req,
             ::viam::app::model::v1::InfoResponse* resp) {
               return service->Info(ctx, req, resp);
             }, this)));
}

ModelService::Service::~Service() {
}

::grpc::Status ModelService::Service::Upload(::grpc::ServerContext* context, ::grpc::ServerReader< ::viam::app::model::v1::UploadRequest>* reader, ::viam::app::model::v1::UploadResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ModelService::Service::Delete(::grpc::ServerContext* context, const ::viam::app::model::v1::DeleteRequest* request, ::viam::app::model::v1::DeleteResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ModelService::Service::Deploy(::grpc::ServerContext* context, const ::viam::app::model::v1::DeployRequest* request, ::viam::app::model::v1::DeployResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ModelService::Service::Info(::grpc::ServerContext* context, const ::viam::app::model::v1::InfoRequest* request, ::viam::app::model::v1::InfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace viam
}  // namespace app
}  // namespace model
}  // namespace v1

