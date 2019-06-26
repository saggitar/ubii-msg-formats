// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/devices/topicDemux.proto

#include "proto/devices/topicDemux.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_proto_2fdevices_2ftopicDemux_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdevices_2ftopicDemux_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TopicDemux;
}  // namespace protobuf_proto_2fdevices_2ftopicDemux_2eproto
namespace ubii {
namespace devices {
class TopicDemuxDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TopicDemux>
      _instance;
} _TopicDemux_default_instance_;
class TopicDemuxListDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TopicDemuxList>
      _instance;
} _TopicDemuxList_default_instance_;
}  // namespace devices
}  // namespace ubii
namespace protobuf_proto_2fdevices_2ftopicDemux_2eproto {
static void InitDefaultsTopicDemux() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::devices::_TopicDemux_default_instance_;
    new (ptr) ::ubii::devices::TopicDemux();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::devices::TopicDemux::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TopicDemux =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTopicDemux}, {}};

static void InitDefaultsTopicDemuxList() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::devices::_TopicDemuxList_default_instance_;
    new (ptr) ::ubii::devices::TopicDemuxList();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::devices::TopicDemuxList::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_TopicDemuxList =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsTopicDemuxList}, {
      &protobuf_proto_2fdevices_2ftopicDemux_2eproto::scc_info_TopicDemux.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TopicDemux.base);
  ::google::protobuf::internal::InitSCC(&scc_info_TopicDemuxList.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::TopicDemux, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::TopicDemux, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::TopicDemux, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::TopicDemux, data_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::TopicDemux, output_topic_format_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::TopicDemuxList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::TopicDemuxList, elements_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::devices::TopicDemux)},
  { 9, -1, sizeof(::ubii::devices::TopicDemuxList)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::devices::_TopicDemux_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::devices::_TopicDemuxList_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/devices/topicDemux.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\036proto/devices/topicDemux.proto\022\014ubii.d"
      "evices\"V\n\nTopicDemux\022\n\n\002id\030\001 \001(\t\022\014\n\004name"
      "\030\002 \001(\t\022\021\n\tdata_type\030\003 \001(\t\022\033\n\023output_topi"
      "c_format\030\004 \001(\t\"<\n\016TopicDemuxList\022*\n\010elem"
      "ents\030\001 \003(\0132\030.ubii.devices.TopicDemuxb\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 204);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/devices/topicDemux.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_proto_2fdevices_2ftopicDemux_2eproto
namespace ubii {
namespace devices {

// ===================================================================

void TopicDemux::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TopicDemux::kIdFieldNumber;
const int TopicDemux::kNameFieldNumber;
const int TopicDemux::kDataTypeFieldNumber;
const int TopicDemux::kOutputTopicFormatFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TopicDemux::TopicDemux()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2fdevices_2ftopicDemux_2eproto::scc_info_TopicDemux.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.devices.TopicDemux)
}
TopicDemux::TopicDemux(const TopicDemux& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  data_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data_type().size() > 0) {
    data_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_type_);
  }
  output_topic_format_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.output_topic_format().size() > 0) {
    output_topic_format_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.output_topic_format_);
  }
  // @@protoc_insertion_point(copy_constructor:ubii.devices.TopicDemux)
}

void TopicDemux::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  output_topic_format_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

TopicDemux::~TopicDemux() {
  // @@protoc_insertion_point(destructor:ubii.devices.TopicDemux)
  SharedDtor();
}

void TopicDemux::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  output_topic_format_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TopicDemux::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TopicDemux::descriptor() {
  ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TopicDemux& TopicDemux::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2fdevices_2ftopicDemux_2eproto::scc_info_TopicDemux.base);
  return *internal_default_instance();
}


void TopicDemux::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.devices.TopicDemux)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  output_topic_format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool TopicDemux::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.devices.TopicDemux)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.TopicDemux.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.TopicDemux.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string data_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_data_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->data_type().data(), static_cast<int>(this->data_type().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.TopicDemux.data_type"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string output_topic_format = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_output_topic_format()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->output_topic_format().data(), static_cast<int>(this->output_topic_format().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.TopicDemux.output_topic_format"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ubii.devices.TopicDemux)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.devices.TopicDemux)
  return false;
#undef DO_
}

void TopicDemux::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.devices.TopicDemux)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // string data_type = 3;
  if (this->data_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->data_type().data(), static_cast<int>(this->data_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.data_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->data_type(), output);
  }

  // string output_topic_format = 4;
  if (this->output_topic_format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->output_topic_format().data(), static_cast<int>(this->output_topic_format().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.output_topic_format");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->output_topic_format(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.devices.TopicDemux)
}

::google::protobuf::uint8* TopicDemux::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.devices.TopicDemux)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // string data_type = 3;
  if (this->data_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->data_type().data(), static_cast<int>(this->data_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.data_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->data_type(), target);
  }

  // string output_topic_format = 4;
  if (this->output_topic_format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->output_topic_format().data(), static_cast<int>(this->output_topic_format().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.TopicDemux.output_topic_format");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->output_topic_format(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.devices.TopicDemux)
  return target;
}

size_t TopicDemux::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.devices.TopicDemux)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string data_type = 3;
  if (this->data_type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->data_type());
  }

  // string output_topic_format = 4;
  if (this->output_topic_format().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->output_topic_format());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TopicDemux::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.devices.TopicDemux)
  GOOGLE_DCHECK_NE(&from, this);
  const TopicDemux* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TopicDemux>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.devices.TopicDemux)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.devices.TopicDemux)
    MergeFrom(*source);
  }
}

void TopicDemux::MergeFrom(const TopicDemux& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.devices.TopicDemux)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.data_type().size() > 0) {

    data_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_type_);
  }
  if (from.output_topic_format().size() > 0) {

    output_topic_format_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.output_topic_format_);
  }
}

void TopicDemux::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.devices.TopicDemux)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TopicDemux::CopyFrom(const TopicDemux& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.devices.TopicDemux)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TopicDemux::IsInitialized() const {
  return true;
}

void TopicDemux::Swap(TopicDemux* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TopicDemux::InternalSwap(TopicDemux* other) {
  using std::swap;
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  data_type_.Swap(&other->data_type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  output_topic_format_.Swap(&other->output_topic_format_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TopicDemux::GetMetadata() const {
  protobuf_proto_2fdevices_2ftopicDemux_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void TopicDemuxList::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TopicDemuxList::kElementsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TopicDemuxList::TopicDemuxList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2fdevices_2ftopicDemux_2eproto::scc_info_TopicDemuxList.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.devices.TopicDemuxList)
}
TopicDemuxList::TopicDemuxList(const TopicDemuxList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      elements_(from.elements_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ubii.devices.TopicDemuxList)
}

void TopicDemuxList::SharedCtor() {
}

TopicDemuxList::~TopicDemuxList() {
  // @@protoc_insertion_point(destructor:ubii.devices.TopicDemuxList)
  SharedDtor();
}

void TopicDemuxList::SharedDtor() {
}

void TopicDemuxList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TopicDemuxList::descriptor() {
  ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TopicDemuxList& TopicDemuxList::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2fdevices_2ftopicDemux_2eproto::scc_info_TopicDemuxList.base);
  return *internal_default_instance();
}


void TopicDemuxList::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.devices.TopicDemuxList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  elements_.Clear();
  _internal_metadata_.Clear();
}

bool TopicDemuxList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.devices.TopicDemuxList)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ubii.devices.TopicDemux elements = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_elements()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ubii.devices.TopicDemuxList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.devices.TopicDemuxList)
  return false;
#undef DO_
}

void TopicDemuxList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.devices.TopicDemuxList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.devices.TopicDemux elements = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->elements_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->elements(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.devices.TopicDemuxList)
}

::google::protobuf::uint8* TopicDemuxList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.devices.TopicDemuxList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.devices.TopicDemux elements = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->elements_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->elements(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.devices.TopicDemuxList)
  return target;
}

size_t TopicDemuxList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.devices.TopicDemuxList)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ubii.devices.TopicDemux elements = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->elements_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->elements(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TopicDemuxList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.devices.TopicDemuxList)
  GOOGLE_DCHECK_NE(&from, this);
  const TopicDemuxList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TopicDemuxList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.devices.TopicDemuxList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.devices.TopicDemuxList)
    MergeFrom(*source);
  }
}

void TopicDemuxList::MergeFrom(const TopicDemuxList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.devices.TopicDemuxList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  elements_.MergeFrom(from.elements_);
}

void TopicDemuxList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.devices.TopicDemuxList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TopicDemuxList::CopyFrom(const TopicDemuxList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.devices.TopicDemuxList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TopicDemuxList::IsInitialized() const {
  return true;
}

void TopicDemuxList::Swap(TopicDemuxList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TopicDemuxList::InternalSwap(TopicDemuxList* other) {
  using std::swap;
  CastToBase(&elements_)->InternalSwap(CastToBase(&other->elements_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TopicDemuxList::GetMetadata() const {
  protobuf_proto_2fdevices_2ftopicDemux_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace devices
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::devices::TopicDemux* Arena::CreateMaybeMessage< ::ubii::devices::TopicDemux >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::devices::TopicDemux >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::devices::TopicDemuxList* Arena::CreateMaybeMessage< ::ubii::devices::TopicDemuxList >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::devices::TopicDemuxList >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)