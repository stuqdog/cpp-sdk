// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/rpc/v1/auth.proto

#include "proto/rpc/v1/auth.pb.h"
#include "proto/rpc/v1/auth.grpc.pb.h"

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
namespace proto {
namespace rpc {
namespace v1 {

static const char* AuthService_method_names[] = {
  "/proto.rpc.v1.AuthService/Authenticate",
};

std::unique_ptr< AuthService::Stub> AuthService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AuthService::Stub> stub(new AuthService::Stub(channel));
  return stub;
}

AuthService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Authenticate_(AuthService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AuthService::Stub::Authenticate(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateRequest& request, ::proto::rpc::v1::AuthenticateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Authenticate_, context, request, response);
}

void AuthService::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateRequest* request, ::proto::rpc::v1::AuthenticateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, std::move(f));
}

void AuthService::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::proto::rpc::v1::AuthenticateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, std::move(f));
}

void AuthService::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateRequest* request, ::proto::rpc::v1::AuthenticateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, reactor);
}

void AuthService::Stub::experimental_async::Authenticate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::proto::rpc::v1::AuthenticateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Authenticate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::v1::AuthenticateResponse>* AuthService::Stub::AsyncAuthenticateRaw(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::proto::rpc::v1::AuthenticateResponse>::Create(channel_.get(), cq, rpcmethod_Authenticate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::v1::AuthenticateResponse>* AuthService::Stub::PrepareAsyncAuthenticateRaw(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::proto::rpc::v1::AuthenticateResponse>::Create(channel_.get(), cq, rpcmethod_Authenticate_, context, request, false);
}

AuthService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AuthService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AuthService::Service, ::proto::rpc::v1::AuthenticateRequest, ::proto::rpc::v1::AuthenticateResponse>(
          [](AuthService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::proto::rpc::v1::AuthenticateRequest* req,
             ::proto::rpc::v1::AuthenticateResponse* resp) {
               return service->Authenticate(ctx, req, resp);
             }, this)));
}

AuthService::Service::~Service() {
}

::grpc::Status AuthService::Service::Authenticate(::grpc::ServerContext* context, const ::proto::rpc::v1::AuthenticateRequest* request, ::proto::rpc::v1::AuthenticateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* ExternalAuthService_method_names[] = {
  "/proto.rpc.v1.ExternalAuthService/AuthenticateTo",
};

std::unique_ptr< ExternalAuthService::Stub> ExternalAuthService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ExternalAuthService::Stub> stub(new ExternalAuthService::Stub(channel));
  return stub;
}

ExternalAuthService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_AuthenticateTo_(ExternalAuthService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ExternalAuthService::Stub::AuthenticateTo(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateToRequest& request, ::proto::rpc::v1::AuthenticateToResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AuthenticateTo_, context, request, response);
}

void ExternalAuthService::Stub::experimental_async::AuthenticateTo(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateToRequest* request, ::proto::rpc::v1::AuthenticateToResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AuthenticateTo_, context, request, response, std::move(f));
}

void ExternalAuthService::Stub::experimental_async::AuthenticateTo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::proto::rpc::v1::AuthenticateToResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AuthenticateTo_, context, request, response, std::move(f));
}

void ExternalAuthService::Stub::experimental_async::AuthenticateTo(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateToRequest* request, ::proto::rpc::v1::AuthenticateToResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AuthenticateTo_, context, request, response, reactor);
}

void ExternalAuthService::Stub::experimental_async::AuthenticateTo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::proto::rpc::v1::AuthenticateToResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AuthenticateTo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::v1::AuthenticateToResponse>* ExternalAuthService::Stub::AsyncAuthenticateToRaw(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateToRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::proto::rpc::v1::AuthenticateToResponse>::Create(channel_.get(), cq, rpcmethod_AuthenticateTo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::proto::rpc::v1::AuthenticateToResponse>* ExternalAuthService::Stub::PrepareAsyncAuthenticateToRaw(::grpc::ClientContext* context, const ::proto::rpc::v1::AuthenticateToRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::proto::rpc::v1::AuthenticateToResponse>::Create(channel_.get(), cq, rpcmethod_AuthenticateTo_, context, request, false);
}

ExternalAuthService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ExternalAuthService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ExternalAuthService::Service, ::proto::rpc::v1::AuthenticateToRequest, ::proto::rpc::v1::AuthenticateToResponse>(
          [](ExternalAuthService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::proto::rpc::v1::AuthenticateToRequest* req,
             ::proto::rpc::v1::AuthenticateToResponse* resp) {
               return service->AuthenticateTo(ctx, req, resp);
             }, this)));
}

ExternalAuthService::Service::~Service() {
}

::grpc::Status ExternalAuthService::Service::AuthenticateTo(::grpc::ServerContext* context, const ::proto::rpc::v1::AuthenticateToRequest* request, ::proto::rpc::v1::AuthenticateToResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace proto
}  // namespace rpc
}  // namespace v1

