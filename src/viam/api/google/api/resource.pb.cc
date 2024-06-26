// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/resource.proto

#include "google/api/resource.pb.h"

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
namespace google {
namespace api {

inline constexpr ResourceReference::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : type_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        child_type_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ResourceReference::ResourceReference(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ResourceReferenceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResourceReferenceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResourceReferenceDefaultTypeInternal() {}
  union {
    ResourceReference _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResourceReferenceDefaultTypeInternal _ResourceReference_default_instance_;

inline constexpr ResourceDescriptor::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : pattern_{},
        style_{},
        _style_cached_byte_size_{0},
        type_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        name_field_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        plural_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        singular_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        history_{static_cast< ::google::api::ResourceDescriptor_History >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ResourceDescriptor::ResourceDescriptor(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ResourceDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResourceDescriptorDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResourceDescriptorDefaultTypeInternal() {}
  union {
    ResourceDescriptor _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResourceDescriptorDefaultTypeInternal _ResourceDescriptor_default_instance_;
}  // namespace api
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2fapi_2fresource_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2fresource_2eproto[2];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fapi_2fresource_2eproto = nullptr;
const ::uint32_t TableStruct_google_2fapi_2fresource_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _impl_.type_),
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _impl_.pattern_),
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _impl_.name_field_),
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _impl_.history_),
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _impl_.plural_),
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _impl_.singular_),
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _impl_.style_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, _impl_.type_),
    PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, _impl_.child_type_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::google::api::ResourceDescriptor)},
        {15, -1, -1, sizeof(::google::api::ResourceReference)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::google::api::_ResourceDescriptor_default_instance_._instance,
    &::google::api::_ResourceReference_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fapi_2fresource_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\031google/api/resource.proto\022\ngoogle.api\032"
    " google/protobuf/descriptor.proto\"\252\003\n\022Re"
    "sourceDescriptor\022\022\n\004type\030\001 \001(\tR\004type\022\030\n\007"
    "pattern\030\002 \003(\tR\007pattern\022\035\n\nname_field\030\003 \001"
    "(\tR\tnameField\022@\n\007history\030\004 \001(\0162&.google."
    "api.ResourceDescriptor.HistoryR\007history\022"
    "\026\n\006plural\030\005 \001(\tR\006plural\022\032\n\010singular\030\006 \001("
    "\tR\010singular\022:\n\005style\030\n \003(\0162$.google.api."
    "ResourceDescriptor.StyleR\005style\"[\n\007Histo"
    "ry\022\027\n\023HISTORY_UNSPECIFIED\020\000\022\035\n\031ORIGINALL"
    "Y_SINGLE_PATTERN\020\001\022\030\n\024FUTURE_MULTI_PATTE"
    "RN\020\002\"8\n\005Style\022\025\n\021STYLE_UNSPECIFIED\020\000\022\030\n\024"
    "DECLARATIVE_FRIENDLY\020\001\"F\n\021ResourceRefere"
    "nce\022\022\n\004type\030\001 \001(\tR\004type\022\035\n\nchild_type\030\002 "
    "\001(\tR\tchildType:l\n\022resource_reference\022\035.g"
    "oogle.protobuf.FieldOptions\030\237\010 \001(\0132\035.goo"
    "gle.api.ResourceReferenceR\021resourceRefer"
    "ence:n\n\023resource_definition\022\034.google.pro"
    "tobuf.FileOptions\030\235\010 \003(\0132\036.google.api.Re"
    "sourceDescriptorR\022resourceDefinition:\\\n\010"
    "resource\022\037.google.protobuf.MessageOption"
    "s\030\235\010 \001(\0132\036.google.api.ResourceDescriptor"
    "R\010resourceB\256\001\n\016com.google.apiB\rResourceP"
    "rotoP\001ZAgoogle.golang.org/genproto/googl"
    "eapis/api/annotations;annotations\370\001\001\242\002\003G"
    "AX\252\002\nGoogle.Api\312\002\nGoogle\\Api\342\002\026Google\\Ap"
    "i\\GPBMetadata\352\002\013Google::Apib\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fapi_2fresource_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::absl::once_flag descriptor_table_google_2fapi_2fresource_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fapi_2fresource_2eproto = {
    false,
    false,
    1075,
    descriptor_table_protodef_google_2fapi_2fresource_2eproto,
    "google/api/resource.proto",
    &descriptor_table_google_2fapi_2fresource_2eproto_once,
    descriptor_table_google_2fapi_2fresource_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_google_2fapi_2fresource_2eproto::offsets,
    file_level_metadata_google_2fapi_2fresource_2eproto,
    file_level_enum_descriptors_google_2fapi_2fresource_2eproto,
    file_level_service_descriptors_google_2fapi_2fresource_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fapi_2fresource_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fresource_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fresource_2eproto(&descriptor_table_google_2fapi_2fresource_2eproto);
namespace google {
namespace api {
const ::google::protobuf::EnumDescriptor* ResourceDescriptor_History_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fresource_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fresource_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t ResourceDescriptor_History_internal_data_[] = {
    196608u, 0u, };
bool ResourceDescriptor_History_IsValid(int value) {
  return 0 <= value && value <= 2;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ResourceDescriptor_History ResourceDescriptor::HISTORY_UNSPECIFIED;
constexpr ResourceDescriptor_History ResourceDescriptor::ORIGINALLY_SINGLE_PATTERN;
constexpr ResourceDescriptor_History ResourceDescriptor::FUTURE_MULTI_PATTERN;
constexpr ResourceDescriptor_History ResourceDescriptor::History_MIN;
constexpr ResourceDescriptor_History ResourceDescriptor::History_MAX;
constexpr int ResourceDescriptor::History_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::google::protobuf::EnumDescriptor* ResourceDescriptor_Style_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fresource_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fresource_2eproto[1];
}
PROTOBUF_CONSTINIT const uint32_t ResourceDescriptor_Style_internal_data_[] = {
    131072u, 0u, };
bool ResourceDescriptor_Style_IsValid(int value) {
  return 0 <= value && value <= 1;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr ResourceDescriptor_Style ResourceDescriptor::STYLE_UNSPECIFIED;
constexpr ResourceDescriptor_Style ResourceDescriptor::DECLARATIVE_FRIENDLY;
constexpr ResourceDescriptor_Style ResourceDescriptor::Style_MIN;
constexpr ResourceDescriptor_Style ResourceDescriptor::Style_MAX;
constexpr int ResourceDescriptor::Style_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class ResourceDescriptor::_Internal {
 public:
};

ResourceDescriptor::ResourceDescriptor(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.ResourceDescriptor)
}
inline PROTOBUF_NDEBUG_INLINE ResourceDescriptor::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : pattern_{visibility, arena, from.pattern_},
        style_{visibility, arena, from.style_},
        _style_cached_byte_size_{0},
        type_(arena, from.type_),
        name_field_(arena, from.name_field_),
        plural_(arena, from.plural_),
        singular_(arena, from.singular_),
        _cached_size_{0} {}

ResourceDescriptor::ResourceDescriptor(
    ::google::protobuf::Arena* arena,
    const ResourceDescriptor& from)
    : ::google::protobuf::Message(arena) {
  ResourceDescriptor* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.history_ = from._impl_.history_;

  // @@protoc_insertion_point(copy_constructor:google.api.ResourceDescriptor)
}
inline PROTOBUF_NDEBUG_INLINE ResourceDescriptor::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : pattern_{visibility, arena},
        style_{visibility, arena},
        _style_cached_byte_size_{0},
        type_(arena),
        name_field_(arena),
        plural_(arena),
        singular_(arena),
        _cached_size_{0} {}

inline void ResourceDescriptor::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.history_ = {};
}
ResourceDescriptor::~ResourceDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.ResourceDescriptor)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ResourceDescriptor::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.type_.Destroy();
  _impl_.name_field_.Destroy();
  _impl_.plural_.Destroy();
  _impl_.singular_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void ResourceDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ResourceDescriptor)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.pattern_.Clear();
  _impl_.style_.Clear();
  _impl_.type_.ClearToEmpty();
  _impl_.name_field_.ClearToEmpty();
  _impl_.plural_.ClearToEmpty();
  _impl_.singular_.ClearToEmpty();
  _impl_.history_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* ResourceDescriptor::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 7, 0, 73, 2> ResourceDescriptor::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    10, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294966720,  // skipmap
    offsetof(decltype(_table_), field_entries),
    7,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_ResourceDescriptor_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string type = 1 [json_name = "type"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.type_)}},
    // repeated string pattern = 2 [json_name = "pattern"];
    {::_pbi::TcParser::FastUR1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.pattern_)}},
    // string name_field = 3 [json_name = "nameField"];
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.name_field_)}},
    // .google.api.ResourceDescriptor.History history = 4 [json_name = "history"];
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ResourceDescriptor, _impl_.history_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.history_)}},
    // string plural = 5 [json_name = "plural"];
    {::_pbi::TcParser::FastUS1,
     {42, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.plural_)}},
    // string singular = 6 [json_name = "singular"];
    {::_pbi::TcParser::FastUS1,
     {50, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.singular_)}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // string type = 1 [json_name = "type"];
    {PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated string pattern = 2 [json_name = "pattern"];
    {PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.pattern_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
    // string name_field = 3 [json_name = "nameField"];
    {PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.name_field_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .google.api.ResourceDescriptor.History history = 4 [json_name = "history"];
    {PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.history_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // string plural = 5 [json_name = "plural"];
    {PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.plural_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string singular = 6 [json_name = "singular"];
    {PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.singular_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated .google.api.ResourceDescriptor.Style style = 10 [json_name = "style"];
    {PROTOBUF_FIELD_OFFSET(ResourceDescriptor, _impl_.style_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedOpenEnum)},
  }},
  // no aux_entries
  {{
    "\35\4\7\12\0\6\10\0"
    "google.api.ResourceDescriptor"
    "type"
    "pattern"
    "name_field"
    "plural"
    "singular"
  }},
};

::uint8_t* ResourceDescriptor::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ResourceDescriptor)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    const std::string& _s = this->_internal_type();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.api.ResourceDescriptor.type");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // repeated string pattern = 2 [json_name = "pattern"];
  for (int i = 0, n = this->_internal_pattern_size(); i < n; ++i) {
    const auto& s = this->_internal_pattern().Get(i);
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.api.ResourceDescriptor.pattern");
    target = stream->WriteString(2, s, target);
  }

  // string name_field = 3 [json_name = "nameField"];
  if (!this->_internal_name_field().empty()) {
    const std::string& _s = this->_internal_name_field();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.api.ResourceDescriptor.name_field");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // .google.api.ResourceDescriptor.History history = 4 [json_name = "history"];
  if (this->_internal_history() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        4, this->_internal_history(), target);
  }

  // string plural = 5 [json_name = "plural"];
  if (!this->_internal_plural().empty()) {
    const std::string& _s = this->_internal_plural();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.api.ResourceDescriptor.plural");
    target = stream->WriteStringMaybeAliased(5, _s, target);
  }

  // string singular = 6 [json_name = "singular"];
  if (!this->_internal_singular().empty()) {
    const std::string& _s = this->_internal_singular();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.api.ResourceDescriptor.singular");
    target = stream->WriteStringMaybeAliased(6, _s, target);
  }

  // repeated .google.api.ResourceDescriptor.Style style = 10 [json_name = "style"];
  {
    std::size_t byte_size = _impl_._style_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(10, _internal_style(),
                                       byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ResourceDescriptor)
  return target;
}

::size_t ResourceDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ResourceDescriptor)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string pattern = 2 [json_name = "pattern"];
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_pattern().size());
  for (int i = 0, n = _internal_pattern().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
        _internal_pattern().Get(i));
  }
  // repeated .google.api.ResourceDescriptor.Style style = 10 [json_name = "style"];
  {
    std::size_t data_size = 0;
    auto count = static_cast<std::size_t>(this->_internal_style_size());

    for (std::size_t i = 0; i < count; ++i) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
          this->_internal_style().Get(static_cast<int>(i)));
    }
    total_size += data_size;
    if (data_size > 0) {
      total_size += 1;
      total_size += ::_pbi::WireFormatLite::Int32Size(
          static_cast<int32_t>(data_size));
    }
    _impl_._style_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
  }
  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_type());
  }

  // string name_field = 3 [json_name = "nameField"];
  if (!this->_internal_name_field().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_name_field());
  }

  // string plural = 5 [json_name = "plural"];
  if (!this->_internal_plural().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_plural());
  }

  // string singular = 6 [json_name = "singular"];
  if (!this->_internal_singular().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_singular());
  }

  // .google.api.ResourceDescriptor.History history = 4 [json_name = "history"];
  if (this->_internal_history() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_history());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData ResourceDescriptor::_class_data_ = {
    ResourceDescriptor::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* ResourceDescriptor::GetClassData() const {
  return &_class_data_;
}

void ResourceDescriptor::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<ResourceDescriptor*>(&to_msg);
  auto& from = static_cast<const ResourceDescriptor&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.ResourceDescriptor)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_pattern()->MergeFrom(from._internal_pattern());
  _this->_internal_mutable_style()->MergeFrom(from._internal_style());
  if (!from._internal_type().empty()) {
    _this->_internal_set_type(from._internal_type());
  }
  if (!from._internal_name_field().empty()) {
    _this->_internal_set_name_field(from._internal_name_field());
  }
  if (!from._internal_plural().empty()) {
    _this->_internal_set_plural(from._internal_plural());
  }
  if (!from._internal_singular().empty()) {
    _this->_internal_set_singular(from._internal_singular());
  }
  if (from._internal_history() != 0) {
    _this->_internal_set_history(from._internal_history());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ResourceDescriptor::CopyFrom(const ResourceDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ResourceDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool ResourceDescriptor::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* ResourceDescriptor::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void ResourceDescriptor::InternalSwap(ResourceDescriptor* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.pattern_.InternalSwap(&other->_impl_.pattern_);
  _impl_.style_.InternalSwap(&other->_impl_.style_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_, &other->_impl_.type_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_field_, &other->_impl_.name_field_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.plural_, &other->_impl_.plural_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.singular_, &other->_impl_.singular_, arena);
  swap(_impl_.history_, other->_impl_.history_);
}

::google::protobuf::Metadata ResourceDescriptor::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fresource_2eproto_getter, &descriptor_table_google_2fapi_2fresource_2eproto_once,
      file_level_metadata_google_2fapi_2fresource_2eproto[0]);
}
// ===================================================================

class ResourceReference::_Internal {
 public:
};

ResourceReference::ResourceReference(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.ResourceReference)
}
inline PROTOBUF_NDEBUG_INLINE ResourceReference::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : type_(arena, from.type_),
        child_type_(arena, from.child_type_),
        _cached_size_{0} {}

ResourceReference::ResourceReference(
    ::google::protobuf::Arena* arena,
    const ResourceReference& from)
    : ::google::protobuf::Message(arena) {
  ResourceReference* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:google.api.ResourceReference)
}
inline PROTOBUF_NDEBUG_INLINE ResourceReference::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : type_(arena),
        child_type_(arena),
        _cached_size_{0} {}

inline void ResourceReference::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
ResourceReference::~ResourceReference() {
  // @@protoc_insertion_point(destructor:google.api.ResourceReference)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ResourceReference::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.type_.Destroy();
  _impl_.child_type_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void ResourceReference::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ResourceReference)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.type_.ClearToEmpty();
  _impl_.child_type_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* ResourceReference::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 51, 2> ResourceReference::_table_ = {
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
    &_ResourceReference_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string child_type = 2 [json_name = "childType"];
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceReference, _impl_.child_type_)}},
    // string type = 1 [json_name = "type"];
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(ResourceReference, _impl_.type_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string type = 1 [json_name = "type"];
    {PROTOBUF_FIELD_OFFSET(ResourceReference, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string child_type = 2 [json_name = "childType"];
    {PROTOBUF_FIELD_OFFSET(ResourceReference, _impl_.child_type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\34\4\12\0\0\0\0\0"
    "google.api.ResourceReference"
    "type"
    "child_type"
  }},
};

::uint8_t* ResourceReference::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ResourceReference)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    const std::string& _s = this->_internal_type();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.api.ResourceReference.type");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string child_type = 2 [json_name = "childType"];
  if (!this->_internal_child_type().empty()) {
    const std::string& _s = this->_internal_child_type();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.api.ResourceReference.child_type");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ResourceReference)
  return target;
}

::size_t ResourceReference::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ResourceReference)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_type());
  }

  // string child_type = 2 [json_name = "childType"];
  if (!this->_internal_child_type().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_child_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData ResourceReference::_class_data_ = {
    ResourceReference::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* ResourceReference::GetClassData() const {
  return &_class_data_;
}

void ResourceReference::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<ResourceReference*>(&to_msg);
  auto& from = static_cast<const ResourceReference&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.ResourceReference)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_type().empty()) {
    _this->_internal_set_type(from._internal_type());
  }
  if (!from._internal_child_type().empty()) {
    _this->_internal_set_child_type(from._internal_child_type());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ResourceReference::CopyFrom(const ResourceReference& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ResourceReference)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool ResourceReference::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* ResourceReference::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void ResourceReference::InternalSwap(ResourceReference* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_, &other->_impl_.type_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.child_type_, &other->_impl_.child_type_, arena);
}

::google::protobuf::Metadata ResourceReference::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fresource_2eproto_getter, &descriptor_table_google_2fapi_2fresource_2eproto_once,
      file_level_metadata_google_2fapi_2fresource_2eproto[1]);
}
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::api::ResourceReference >, 11, false>
  resource_reference(kResourceReferenceFieldNumber, ::google::api::ResourceReference::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::RepeatedMessageTypeTraits< ::google::api::ResourceDescriptor >, 11, false>
  resource_definition(kResourceDefinitionFieldNumber, ::google::api::ResourceDescriptor::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::api::ResourceDescriptor >, 11, false>
  resource(kResourceFieldNumber, ::google::api::ResourceDescriptor::default_instance(), nullptr);
// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
