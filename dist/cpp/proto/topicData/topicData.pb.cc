// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicData.proto

#include "proto/topicData/topicData.pb.h"

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

namespace protobuf_proto_2fgeneral_2ferror_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fgeneral_2ferror_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Error;
}  // namespace protobuf_proto_2fgeneral_2ferror_2eproto
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2ftopicDataRecord_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2ftopicDataRecord_2eproto ::google::protobuf::internal::SCCInfo<16> scc_info_TopicDataRecord;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2ftopicDataRecord_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_TopicDataRecordList;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2ftopicDataRecord_2eproto
namespace ubii {
namespace topicData {
class TopicDataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TopicData>
      _instance;
  const ::ubii::topicData::TopicDataRecord* topic_data_record_;
  const ::ubii::topicData::TopicDataRecordList* topic_data_record_list_;
  const ::ubii::general::Error* error_;
} _TopicData_default_instance_;
}  // namespace topicData
}  // namespace ubii
namespace protobuf_proto_2ftopicData_2ftopicData_2eproto {
static void InitDefaultsTopicData() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::topicData::_TopicData_default_instance_;
    new (ptr) ::ubii::topicData::TopicData();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::topicData::TopicData::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_TopicData =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsTopicData}, {
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2ftopicDataRecord_2eproto::scc_info_TopicDataRecord.base,
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2ftopicDataRecord_2eproto::scc_info_TopicDataRecordList.base,
      &protobuf_proto_2fgeneral_2ferror_2eproto::scc_info_Error.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TopicData.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::topicData::TopicData, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::topicData::TopicData, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::ubii::topicData::TopicDataDefaultTypeInternal, topic_data_record_),
  offsetof(::ubii::topicData::TopicDataDefaultTypeInternal, topic_data_record_list_),
  offsetof(::ubii::topicData::TopicDataDefaultTypeInternal, error_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::topicData::TopicData, type_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::topicData::TopicData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::topicData::_TopicData_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/topicData/topicData.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\037proto/topicData/topicData.proto\022\016ubii."
      "topicData\0325proto/topicData/topicDataReco"
      "rd/topicDataRecord.proto\032\031proto/general/"
      "error.proto\"\276\001\n\tTopicData\022<\n\021topic_data_"
      "record\030\002 \001(\0132\037.ubii.topicData.TopicDataR"
      "ecordH\000\022E\n\026topic_data_record_list\030\003 \001(\0132"
      "#.ubii.topicData.TopicDataRecordListH\000\022$"
      "\n\005error\030\004 \001(\0132\023.ubii.general.ErrorH\000B\006\n\004"
      "typeb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 332);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/topicData/topicData.proto", &protobuf_RegisterTypes);
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2ftopicDataRecord_2eproto::AddDescriptors();
  ::protobuf_proto_2fgeneral_2ferror_2eproto::AddDescriptors();
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
}  // namespace protobuf_proto_2ftopicData_2ftopicData_2eproto
namespace ubii {
namespace topicData {

// ===================================================================

void TopicData::InitAsDefaultInstance() {
  ::ubii::topicData::_TopicData_default_instance_.topic_data_record_ = const_cast< ::ubii::topicData::TopicDataRecord*>(
      ::ubii::topicData::TopicDataRecord::internal_default_instance());
  ::ubii::topicData::_TopicData_default_instance_.topic_data_record_list_ = const_cast< ::ubii::topicData::TopicDataRecordList*>(
      ::ubii::topicData::TopicDataRecordList::internal_default_instance());
  ::ubii::topicData::_TopicData_default_instance_.error_ = const_cast< ::ubii::general::Error*>(
      ::ubii::general::Error::internal_default_instance());
}
void TopicData::set_allocated_topic_data_record(::ubii::topicData::TopicDataRecord* topic_data_record) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_type();
  if (topic_data_record) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      topic_data_record = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, topic_data_record, submessage_arena);
    }
    set_has_topic_data_record();
    type_.topic_data_record_ = topic_data_record;
  }
  // @@protoc_insertion_point(field_set_allocated:ubii.topicData.TopicData.topic_data_record)
}
void TopicData::clear_topic_data_record() {
  if (has_topic_data_record()) {
    delete type_.topic_data_record_;
    clear_has_type();
  }
}
void TopicData::set_allocated_topic_data_record_list(::ubii::topicData::TopicDataRecordList* topic_data_record_list) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_type();
  if (topic_data_record_list) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      topic_data_record_list = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, topic_data_record_list, submessage_arena);
    }
    set_has_topic_data_record_list();
    type_.topic_data_record_list_ = topic_data_record_list;
  }
  // @@protoc_insertion_point(field_set_allocated:ubii.topicData.TopicData.topic_data_record_list)
}
void TopicData::clear_topic_data_record_list() {
  if (has_topic_data_record_list()) {
    delete type_.topic_data_record_list_;
    clear_has_type();
  }
}
void TopicData::set_allocated_error(::ubii::general::Error* error) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_type();
  if (error) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      error = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, error, submessage_arena);
    }
    set_has_error();
    type_.error_ = error;
  }
  // @@protoc_insertion_point(field_set_allocated:ubii.topicData.TopicData.error)
}
void TopicData::clear_error() {
  if (has_error()) {
    delete type_.error_;
    clear_has_type();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TopicData::kTopicDataRecordFieldNumber;
const int TopicData::kTopicDataRecordListFieldNumber;
const int TopicData::kErrorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TopicData::TopicData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicData_2eproto::scc_info_TopicData.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.topicData.TopicData)
}
TopicData::TopicData(const TopicData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_type();
  switch (from.type_case()) {
    case kTopicDataRecord: {
      mutable_topic_data_record()->::ubii::topicData::TopicDataRecord::MergeFrom(from.topic_data_record());
      break;
    }
    case kTopicDataRecordList: {
      mutable_topic_data_record_list()->::ubii::topicData::TopicDataRecordList::MergeFrom(from.topic_data_record_list());
      break;
    }
    case kError: {
      mutable_error()->::ubii::general::Error::MergeFrom(from.error());
      break;
    }
    case TYPE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:ubii.topicData.TopicData)
}

void TopicData::SharedCtor() {
  clear_has_type();
}

TopicData::~TopicData() {
  // @@protoc_insertion_point(destructor:ubii.topicData.TopicData)
  SharedDtor();
}

void TopicData::SharedDtor() {
  if (has_type()) {
    clear_type();
  }
}

void TopicData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TopicData::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TopicData& TopicData::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicData_2eproto::scc_info_TopicData.base);
  return *internal_default_instance();
}


void TopicData::clear_type() {
// @@protoc_insertion_point(one_of_clear_start:ubii.topicData.TopicData)
  switch (type_case()) {
    case kTopicDataRecord: {
      delete type_.topic_data_record_;
      break;
    }
    case kTopicDataRecordList: {
      delete type_.topic_data_record_list_;
      break;
    }
    case kError: {
      delete type_.error_;
      break;
    }
    case TYPE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = TYPE_NOT_SET;
}


void TopicData::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.topicData.TopicData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_type();
  _internal_metadata_.Clear();
}

bool TopicData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.topicData.TopicData)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .ubii.topicData.TopicDataRecord topic_data_record = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_topic_data_record()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.topicData.TopicDataRecordList topic_data_record_list = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_topic_data_record_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.general.Error error = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_error()));
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
  // @@protoc_insertion_point(parse_success:ubii.topicData.TopicData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.topicData.TopicData)
  return false;
#undef DO_
}

void TopicData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.topicData.TopicData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ubii.topicData.TopicDataRecord topic_data_record = 2;
  if (has_topic_data_record()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_topic_data_record(), output);
  }

  // .ubii.topicData.TopicDataRecordList topic_data_record_list = 3;
  if (has_topic_data_record_list()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_topic_data_record_list(), output);
  }

  // .ubii.general.Error error = 4;
  if (has_error()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_error(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.topicData.TopicData)
}

::google::protobuf::uint8* TopicData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.topicData.TopicData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ubii.topicData.TopicDataRecord topic_data_record = 2;
  if (has_topic_data_record()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_topic_data_record(), deterministic, target);
  }

  // .ubii.topicData.TopicDataRecordList topic_data_record_list = 3;
  if (has_topic_data_record_list()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_topic_data_record_list(), deterministic, target);
  }

  // .ubii.general.Error error = 4;
  if (has_error()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_error(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.topicData.TopicData)
  return target;
}

size_t TopicData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.topicData.TopicData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  switch (type_case()) {
    // .ubii.topicData.TopicDataRecord topic_data_record = 2;
    case kTopicDataRecord: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *type_.topic_data_record_);
      break;
    }
    // .ubii.topicData.TopicDataRecordList topic_data_record_list = 3;
    case kTopicDataRecordList: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *type_.topic_data_record_list_);
      break;
    }
    // .ubii.general.Error error = 4;
    case kError: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *type_.error_);
      break;
    }
    case TYPE_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TopicData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.topicData.TopicData)
  GOOGLE_DCHECK_NE(&from, this);
  const TopicData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TopicData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.topicData.TopicData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.topicData.TopicData)
    MergeFrom(*source);
  }
}

void TopicData::MergeFrom(const TopicData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.topicData.TopicData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.type_case()) {
    case kTopicDataRecord: {
      mutable_topic_data_record()->::ubii::topicData::TopicDataRecord::MergeFrom(from.topic_data_record());
      break;
    }
    case kTopicDataRecordList: {
      mutable_topic_data_record_list()->::ubii::topicData::TopicDataRecordList::MergeFrom(from.topic_data_record_list());
      break;
    }
    case kError: {
      mutable_error()->::ubii::general::Error::MergeFrom(from.error());
      break;
    }
    case TYPE_NOT_SET: {
      break;
    }
  }
}

void TopicData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.topicData.TopicData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TopicData::CopyFrom(const TopicData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.topicData.TopicData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TopicData::IsInitialized() const {
  return true;
}

void TopicData::Swap(TopicData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TopicData::InternalSwap(TopicData* other) {
  using std::swap;
  swap(type_, other->type_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TopicData::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace topicData
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::topicData::TopicData* Arena::CreateMaybeMessage< ::ubii::topicData::TopicData >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::topicData::TopicData >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
