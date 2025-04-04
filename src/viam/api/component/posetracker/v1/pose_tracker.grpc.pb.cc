// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: component/posetracker/v1/pose_tracker.proto

#include "component/posetracker/v1/pose_tracker.pb.h"
#include "component/posetracker/v1/pose_tracker.grpc.pb.h"

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
namespace component {
namespace posetracker {
namespace v1 {

static const char* PoseTrackerService_method_names[] = {
  "/viam.component.posetracker.v1.PoseTrackerService/GetPoses",
  "/viam.component.posetracker.v1.PoseTrackerService/DoCommand",
  "/viam.component.posetracker.v1.PoseTrackerService/GetGeometries",
};

std::unique_ptr< PoseTrackerService::Stub> PoseTrackerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PoseTrackerService::Stub> stub(new PoseTrackerService::Stub(channel));
  return stub;
}

PoseTrackerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetPoses_(PoseTrackerService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DoCommand_(PoseTrackerService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetGeometries_(PoseTrackerService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PoseTrackerService::Stub::GetPoses(::grpc::ClientContext* context, const ::viam::component::posetracker::v1::GetPosesRequest& request, ::viam::component::posetracker::v1::GetPosesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetPoses_, context, request, response);
}

void PoseTrackerService::Stub::experimental_async::GetPoses(::grpc::ClientContext* context, const ::viam::component::posetracker::v1::GetPosesRequest* request, ::viam::component::posetracker::v1::GetPosesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPoses_, context, request, response, std::move(f));
}

void PoseTrackerService::Stub::experimental_async::GetPoses(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::posetracker::v1::GetPosesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPoses_, context, request, response, std::move(f));
}

void PoseTrackerService::Stub::experimental_async::GetPoses(::grpc::ClientContext* context, const ::viam::component::posetracker::v1::GetPosesRequest* request, ::viam::component::posetracker::v1::GetPosesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetPoses_, context, request, response, reactor);
}

void PoseTrackerService::Stub::experimental_async::GetPoses(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::posetracker::v1::GetPosesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetPoses_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::posetracker::v1::GetPosesResponse>* PoseTrackerService::Stub::AsyncGetPosesRaw(::grpc::ClientContext* context, const ::viam::component::posetracker::v1::GetPosesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::posetracker::v1::GetPosesResponse>::Create(channel_.get(), cq, rpcmethod_GetPoses_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::viam::component::posetracker::v1::GetPosesResponse>* PoseTrackerService::Stub::PrepareAsyncGetPosesRaw(::grpc::ClientContext* context, const ::viam::component::posetracker::v1::GetPosesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::posetracker::v1::GetPosesResponse>::Create(channel_.get(), cq, rpcmethod_GetPoses_, context, request, false);
}

::grpc::Status PoseTrackerService::Stub::DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::viam::common::v1::DoCommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DoCommand_, context, request, response);
}

void PoseTrackerService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, std::move(f));
}

void PoseTrackerService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, std::move(f));
}

void PoseTrackerService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, reactor);
}

void PoseTrackerService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* PoseTrackerService::Stub::AsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::common::v1::DoCommandResponse>::Create(channel_.get(), cq, rpcmethod_DoCommand_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* PoseTrackerService::Stub::PrepareAsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::common::v1::DoCommandResponse>::Create(channel_.get(), cq, rpcmethod_DoCommand_, context, request, false);
}

::grpc::Status PoseTrackerService::Stub::GetGeometries(::grpc::ClientContext* context, const ::viam::common::v1::GetGeometriesRequest& request, ::viam::common::v1::GetGeometriesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetGeometries_, context, request, response);
}

void PoseTrackerService::Stub::experimental_async::GetGeometries(::grpc::ClientContext* context, const ::viam::common::v1::GetGeometriesRequest* request, ::viam::common::v1::GetGeometriesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGeometries_, context, request, response, std::move(f));
}

void PoseTrackerService::Stub::experimental_async::GetGeometries(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::GetGeometriesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGeometries_, context, request, response, std::move(f));
}

void PoseTrackerService::Stub::experimental_async::GetGeometries(::grpc::ClientContext* context, const ::viam::common::v1::GetGeometriesRequest* request, ::viam::common::v1::GetGeometriesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGeometries_, context, request, response, reactor);
}

void PoseTrackerService::Stub::experimental_async::GetGeometries(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::GetGeometriesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGeometries_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::common::v1::GetGeometriesResponse>* PoseTrackerService::Stub::AsyncGetGeometriesRaw(::grpc::ClientContext* context, const ::viam::common::v1::GetGeometriesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::common::v1::GetGeometriesResponse>::Create(channel_.get(), cq, rpcmethod_GetGeometries_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::viam::common::v1::GetGeometriesResponse>* PoseTrackerService::Stub::PrepareAsyncGetGeometriesRaw(::grpc::ClientContext* context, const ::viam::common::v1::GetGeometriesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::common::v1::GetGeometriesResponse>::Create(channel_.get(), cq, rpcmethod_GetGeometries_, context, request, false);
}

PoseTrackerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoseTrackerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoseTrackerService::Service, ::viam::component::posetracker::v1::GetPosesRequest, ::viam::component::posetracker::v1::GetPosesResponse>(
          [](PoseTrackerService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::viam::component::posetracker::v1::GetPosesRequest* req,
             ::viam::component::posetracker::v1::GetPosesResponse* resp) {
               return service->GetPoses(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoseTrackerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoseTrackerService::Service, ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>(
          [](PoseTrackerService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::viam::common::v1::DoCommandRequest* req,
             ::viam::common::v1::DoCommandResponse* resp) {
               return service->DoCommand(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoseTrackerService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoseTrackerService::Service, ::viam::common::v1::GetGeometriesRequest, ::viam::common::v1::GetGeometriesResponse>(
          [](PoseTrackerService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::viam::common::v1::GetGeometriesRequest* req,
             ::viam::common::v1::GetGeometriesResponse* resp) {
               return service->GetGeometries(ctx, req, resp);
             }, this)));
}

PoseTrackerService::Service::~Service() {
}

::grpc::Status PoseTrackerService::Service::GetPoses(::grpc::ServerContext* context, const ::viam::component::posetracker::v1::GetPosesRequest* request, ::viam::component::posetracker::v1::GetPosesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PoseTrackerService::Service::DoCommand(::grpc::ServerContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PoseTrackerService::Service::GetGeometries(::grpc::ServerContext* context, const ::viam::common::v1::GetGeometriesRequest* request, ::viam::common::v1::GetGeometriesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace viam
}  // namespace component
}  // namespace posetracker
}  // namespace v1

