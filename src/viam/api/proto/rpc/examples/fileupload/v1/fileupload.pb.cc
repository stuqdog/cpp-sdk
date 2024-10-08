// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/rpc/examples/fileupload/v1/fileupload.proto

#include "proto/rpc/examples/fileupload/v1/fileupload.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace proto {
namespace rpc {
namespace examples {
namespace fileupload {
namespace v1 {

inline constexpr UploadFileResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        size_{::int64_t{0}},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR UploadFileResponse::UploadFileResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct UploadFileResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UploadFileResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UploadFileResponseDefaultTypeInternal() {}
  union {
    UploadFileResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UploadFileResponseDefaultTypeInternal _UploadFileResponse_default_instance_;

inline constexpr UploadFileRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : data_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR UploadFileRequest::UploadFileRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct UploadFileRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UploadFileRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UploadFileRequestDefaultTypeInternal() {}
  union {
    UploadFileRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UploadFileRequestDefaultTypeInternal _UploadFileRequest_default_instance_;
}  // namespace v1
}  // namespace fileupload
}  // namespace examples
}  // namespace rpc
}  // namespace proto
static ::_pb::Metadata file_level_metadata_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto = nullptr;
const ::uint32_t TableStruct_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::proto::rpc::examples::fileupload::v1::UploadFileRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    PROTOBUF_FIELD_OFFSET(::proto::rpc::examples::fileupload::v1::UploadFileRequest, _impl_._oneof_case_[0]),
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    PROTOBUF_FIELD_OFFSET(::proto::rpc::examples::fileupload::v1::UploadFileRequest, _impl_.data_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::proto::rpc::examples::fileupload::v1::UploadFileResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::proto::rpc::examples::fileupload::v1::UploadFileResponse, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::proto::rpc::examples::fileupload::v1::UploadFileResponse, _impl_.size_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::proto::rpc::examples::fileupload::v1::UploadFileRequest)},
        {11, -1, -1, sizeof(::proto::rpc::examples::fileupload::v1::UploadFileResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::proto::rpc::examples::fileupload::v1::_UploadFileRequest_default_instance_._instance,
    &::proto::rpc::examples::fileupload::v1::_UploadFileResponse_default_instance_._instance,
};
const char descriptor_table_protodef_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n1proto/rpc/examples/fileupload/v1/fileu"
    "pload.proto\022 proto.rpc.examples.fileuplo"
    "ad.v1\"R\n\021UploadFileRequest\022\024\n\004name\030\001 \001(\t"
    "H\000R\004name\022\037\n\nchunk_data\030\002 \001(\014H\000R\tchunkDat"
    "aB\006\n\004data\"<\n\022UploadFileResponse\022\022\n\004name\030"
    "\001 \001(\tR\004name\022\022\n\004size\030\002 \001(\003R\004size2\220\001\n\021File"
    "UploadService\022{\n\nUploadFile\0223.proto.rpc."
    "examples.fileupload.v1.UploadFileRequest"
    "\0324.proto.rpc.examples.fileupload.v1.Uplo"
    "adFileResponse\"\000(\001B\220\002\n$com.proto.rpc.exa"
    "mples.fileupload.v1B\017FileuploadProtoP\001Z2"
    "go.viam.com/utils/proto/rpc/examples/fil"
    "eupload/v1\242\002\004PREF\252\002 Proto.Rpc.Examples.F"
    "ileupload.V1\312\002 Proto\\Rpc\\Examples\\Fileup"
    "load\\V1\342\002,Proto\\Rpc\\Examples\\Fileupload\\"
    "V1\\GPBMetadata\352\002$Proto::Rpc::Examples::F"
    "ileupload::V1b\006proto3"
};
static ::absl::once_flag descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto = {
    false,
    false,
    661,
    descriptor_table_protodef_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto,
    "proto/rpc/examples/fileupload/v1/fileupload.proto",
    &descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto::offsets,
    file_level_metadata_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto,
    file_level_enum_descriptors_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto,
    file_level_service_descriptors_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto_getter() {
  return &descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto(&descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto);
namespace proto {
namespace rpc {
namespace examples {
namespace fileupload {
namespace v1 {
// ===================================================================

class UploadFileRequest::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::proto::rpc::examples::fileupload::v1::UploadFileRequest, _impl_._oneof_case_);
};

UploadFileRequest::UploadFileRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto.rpc.examples.fileupload.v1.UploadFileRequest)
}
inline PROTOBUF_NDEBUG_INLINE UploadFileRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : data_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

UploadFileRequest::UploadFileRequest(
    ::google::protobuf::Arena* arena,
    const UploadFileRequest& from)
    : ::google::protobuf::Message(arena) {
  UploadFileRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  switch (data_case()) {
    case DATA_NOT_SET:
      break;
      case kName:
        new (&_impl_.data_.name_) decltype(_impl_.data_.name_){arena, from._impl_.data_.name_};
        break;
      case kChunkData:
        new (&_impl_.data_.chunk_data_) decltype(_impl_.data_.chunk_data_){arena, from._impl_.data_.chunk_data_};
        break;
  }

  // @@protoc_insertion_point(copy_constructor:proto.rpc.examples.fileupload.v1.UploadFileRequest)
}
inline PROTOBUF_NDEBUG_INLINE UploadFileRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : data_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void UploadFileRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
UploadFileRequest::~UploadFileRequest() {
  // @@protoc_insertion_point(destructor:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void UploadFileRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  if (has_data()) {
    clear_data();
  }
  _impl_.~Impl_();
}

void UploadFileRequest::clear_data() {
// @@protoc_insertion_point(one_of_clear_start:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  switch (data_case()) {
    case kName: {
      _impl_.data_.name_.Destroy();
      break;
    }
    case kChunkData: {
      _impl_.data_.chunk_data_.Destroy();
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = DATA_NOT_SET;
}


PROTOBUF_NOINLINE void UploadFileRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_data();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* UploadFileRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 2, 0, 63, 2> UploadFileRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_UploadFileRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // string name = 1 [json_name = "name"];
    {PROTOBUF_FIELD_OFFSET(UploadFileRequest, _impl_.data_.name_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // bytes chunk_data = 2 [json_name = "chunkData"];
    {PROTOBUF_FIELD_OFFSET(UploadFileRequest, _impl_.data_.chunk_data_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\62\4\0\0\0\0\0\0"
    "proto.rpc.examples.fileupload.v1.UploadFileRequest"
    "name"
  }},
};

::uint8_t* UploadFileRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  switch (data_case()) {
    case kName: {
      const std::string& _s = this->_internal_name();
      ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "proto.rpc.examples.fileupload.v1.UploadFileRequest.name");
      target = stream->WriteStringMaybeAliased(1, _s, target);
      break;
    }
    case kChunkData: {
      const std::string& _s = this->_internal_chunk_data();
      target = stream->WriteBytesMaybeAliased(2, _s, target);
      break;
    }
    default:
      break;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  return target;
}

::size_t UploadFileRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (data_case()) {
    // string name = 1 [json_name = "name"];
    case kName: {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_name());
      break;
    }
    // bytes chunk_data = 2 [json_name = "chunkData"];
    case kChunkData: {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_chunk_data());
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData UploadFileRequest::_class_data_ = {
    UploadFileRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* UploadFileRequest::GetClassData() const {
  return &_class_data_;
}

void UploadFileRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<UploadFileRequest*>(&to_msg);
  auto& from = static_cast<const UploadFileRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.data_case()) {
    case kName: {
      _this->_internal_set_name(from._internal_name());
      break;
    }
    case kChunkData: {
      _this->_internal_set_chunk_data(from._internal_chunk_data());
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void UploadFileRequest::CopyFrom(const UploadFileRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.rpc.examples.fileupload.v1.UploadFileRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool UploadFileRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* UploadFileRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void UploadFileRequest::InternalSwap(UploadFileRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.data_, other->_impl_.data_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata UploadFileRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto_getter, &descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto_once,
      file_level_metadata_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto[0]);
}
// ===================================================================

class UploadFileResponse::_Internal {
 public:
};

UploadFileResponse::UploadFileResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto.rpc.examples.fileupload.v1.UploadFileResponse)
}
inline PROTOBUF_NDEBUG_INLINE UploadFileResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : name_(arena, from.name_),
        _cached_size_{0} {}

UploadFileResponse::UploadFileResponse(
    ::google::protobuf::Arena* arena,
    const UploadFileResponse& from)
    : ::google::protobuf::Message(arena) {
  UploadFileResponse* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.size_ = from._impl_.size_;

  // @@protoc_insertion_point(copy_constructor:proto.rpc.examples.fileupload.v1.UploadFileResponse)
}
inline PROTOBUF_NDEBUG_INLINE UploadFileResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : name_(arena),
        _cached_size_{0} {}

inline void UploadFileResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.size_ = {};
}
UploadFileResponse::~UploadFileResponse() {
  // @@protoc_insertion_point(destructor:proto.rpc.examples.fileupload.v1.UploadFileResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void UploadFileResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.name_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void UploadFileResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.rpc.examples.fileupload.v1.UploadFileResponse)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.size_ = ::int64_t{0};
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* UploadFileResponse::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 64, 2> UploadFileResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_UploadFileResponse_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int64 size = 2 [json_name = "size"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(UploadFileResponse, _impl_.size_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(UploadFileResponse, _impl_.size_)}},
    // string name = 1 [json_name = "name"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(UploadFileResponse, _impl_.name_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string name = 1 [json_name = "name"];
    {PROTOBUF_FIELD_OFFSET(UploadFileResponse, _impl_.name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // int64 size = 2 [json_name = "size"];
    {PROTOBUF_FIELD_OFFSET(UploadFileResponse, _impl_.size_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
  }},
  // no aux_entries
  {{
    "\63\4\0\0\0\0\0\0"
    "proto.rpc.examples.fileupload.v1.UploadFileResponse"
    "name"
  }},
};

::uint8_t* UploadFileResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.rpc.examples.fileupload.v1.UploadFileResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    const std::string& _s = this->_internal_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "proto.rpc.examples.fileupload.v1.UploadFileResponse.name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // int64 size = 2 [json_name = "size"];
  if (this->_internal_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<2>(
            stream, this->_internal_size(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.rpc.examples.fileupload.v1.UploadFileResponse)
  return target;
}

::size_t UploadFileResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.rpc.examples.fileupload.v1.UploadFileResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_name());
  }

  // int64 size = 2 [json_name = "size"];
  if (this->_internal_size() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_size());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData UploadFileResponse::_class_data_ = {
    UploadFileResponse::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* UploadFileResponse::GetClassData() const {
  return &_class_data_;
}

void UploadFileResponse::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<UploadFileResponse*>(&to_msg);
  auto& from = static_cast<const UploadFileResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:proto.rpc.examples.fileupload.v1.UploadFileResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_size() != 0) {
    _this->_internal_set_size(from._internal_size());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void UploadFileResponse::CopyFrom(const UploadFileResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.rpc.examples.fileupload.v1.UploadFileResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool UploadFileResponse::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* UploadFileResponse::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void UploadFileResponse::InternalSwap(UploadFileResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
        swap(_impl_.size_, other->_impl_.size_);
}

::google::protobuf::Metadata UploadFileResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto_getter, &descriptor_table_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto_once,
      file_level_metadata_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace fileupload
}  // namespace examples
}  // namespace rpc
}  // namespace proto
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
