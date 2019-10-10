// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/object3d.proto

#include "proto/topicData/topicDataRecord/dataStructure/object3d.pb.h"

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

namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Object3D;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Pose3D;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto
namespace ubii {
namespace dataStructure {
class Object3DDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Object3D>
      _instance;
} _Object3D_default_instance_;
class Object3DListDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Object3DList>
      _instance;
} _Object3DList_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto {
static void InitDefaultsObject3D() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Object3D_default_instance_;
    new (ptr) ::ubii::dataStructure::Object3D();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Object3D::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_Object3D =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsObject3D}, {
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto::scc_info_Pose3D.base,
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::scc_info_Vector3.base,}};

static void InitDefaultsObject3DList() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Object3DList_default_instance_;
    new (ptr) ::ubii::dataStructure::Object3DList();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Object3DList::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Object3DList =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsObject3DList}, {
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::scc_info_Object3D.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Object3D.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Object3DList.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Object3D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Object3D, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Object3D, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Object3D, size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Object3D, user_data_json_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Object3DList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Object3DList, elements_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::dataStructure::Object3D)},
  { 9, -1, sizeof(::ubii::dataStructure::Object3DList)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Object3D_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Object3DList_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/topicData/topicDataRecord/dataStructure/object3d.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n<proto/topicData/topicDataRecord/dataSt"
      "ructure/object3d.proto\022\022ubii.dataStructu"
      "re\032:proto/topicData/topicDataRecord/data"
      "Structure/pose3d.proto\032;proto/topicData/"
      "topicDataRecord/dataStructure/vector3.pr"
      "oto\"\203\001\n\010Object3D\022\n\n\002id\030\001 \001(\t\022(\n\004pose\030\002 \001"
      "(\0132\032.ubii.dataStructure.Pose3D\022)\n\004size\030\003"
      " \001(\0132\033.ubii.dataStructure.Vector3\022\026\n\016use"
      "r_data_json\030\004 \001(\t\">\n\014Object3DList\022.\n\010ele"
      "ments\030\001 \003(\0132\034.ubii.dataStructure.Object3"
      "Db\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 409);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/topicData/topicDataRecord/dataStructure/object3d.proto", &protobuf_RegisterTypes);
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto::AddDescriptors();
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::AddDescriptors();
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
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto
namespace ubii {
namespace dataStructure {

// ===================================================================

void Object3D::InitAsDefaultInstance() {
  ::ubii::dataStructure::_Object3D_default_instance_._instance.get_mutable()->pose_ = const_cast< ::ubii::dataStructure::Pose3D*>(
      ::ubii::dataStructure::Pose3D::internal_default_instance());
  ::ubii::dataStructure::_Object3D_default_instance_._instance.get_mutable()->size_ = const_cast< ::ubii::dataStructure::Vector3*>(
      ::ubii::dataStructure::Vector3::internal_default_instance());
}
void Object3D::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
void Object3D::clear_size() {
  if (GetArenaNoVirtual() == NULL && size_ != NULL) {
    delete size_;
  }
  size_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Object3D::kIdFieldNumber;
const int Object3D::kPoseFieldNumber;
const int Object3D::kSizeFieldNumber;
const int Object3D::kUserDataJsonFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Object3D::Object3D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::scc_info_Object3D.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Object3D)
}
Object3D::Object3D(const Object3D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  user_data_json_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.user_data_json().size() > 0) {
    user_data_json_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_data_json_);
  }
  if (from.has_pose()) {
    pose_ = new ::ubii::dataStructure::Pose3D(*from.pose_);
  } else {
    pose_ = NULL;
  }
  if (from.has_size()) {
    size_ = new ::ubii::dataStructure::Vector3(*from.size_);
  } else {
    size_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Object3D)
}

void Object3D::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_data_json_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&size_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(size_));
}

Object3D::~Object3D() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Object3D)
  SharedDtor();
}

void Object3D::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_data_json_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete size_;
}

void Object3D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Object3D::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Object3D& Object3D::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::scc_info_Object3D.base);
  return *internal_default_instance();
}


void Object3D::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Object3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_data_json_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  if (GetArenaNoVirtual() == NULL && size_ != NULL) {
    delete size_;
  }
  size_ = NULL;
  _internal_metadata_.Clear();
}

bool Object3D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Object3D)
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
            "ubii.dataStructure.Object3D.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.dataStructure.Pose3D pose = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.dataStructure.Vector3 size = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_size()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string user_data_json = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_data_json()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->user_data_json().data(), static_cast<int>(this->user_data_json().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.dataStructure.Object3D.user_data_json"));
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
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Object3D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Object3D)
  return false;
#undef DO_
}

void Object3D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Object3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.dataStructure.Object3D.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // .ubii.dataStructure.Pose3D pose = 2;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_pose(), output);
  }

  // .ubii.dataStructure.Vector3 size = 3;
  if (this->has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_size(), output);
  }

  // string user_data_json = 4;
  if (this->user_data_json().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user_data_json().data(), static_cast<int>(this->user_data_json().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.dataStructure.Object3D.user_data_json");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->user_data_json(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Object3D)
}

::google::protobuf::uint8* Object3D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Object3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.dataStructure.Object3D.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // .ubii.dataStructure.Pose3D pose = 2;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_pose(), deterministic, target);
  }

  // .ubii.dataStructure.Vector3 size = 3;
  if (this->has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_size(), deterministic, target);
  }

  // string user_data_json = 4;
  if (this->user_data_json().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user_data_json().data(), static_cast<int>(this->user_data_json().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.dataStructure.Object3D.user_data_json");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->user_data_json(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Object3D)
  return target;
}

size_t Object3D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Object3D)
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

  // string user_data_json = 4;
  if (this->user_data_json().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->user_data_json());
  }

  // .ubii.dataStructure.Pose3D pose = 2;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // .ubii.dataStructure.Vector3 size = 3;
  if (this->has_size()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *size_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Object3D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Object3D)
  GOOGLE_DCHECK_NE(&from, this);
  const Object3D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Object3D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Object3D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Object3D)
    MergeFrom(*source);
  }
}

void Object3D::MergeFrom(const Object3D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Object3D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.user_data_json().size() > 0) {

    user_data_json_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_data_json_);
  }
  if (from.has_pose()) {
    mutable_pose()->::ubii::dataStructure::Pose3D::MergeFrom(from.pose());
  }
  if (from.has_size()) {
    mutable_size()->::ubii::dataStructure::Vector3::MergeFrom(from.size());
  }
}

void Object3D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Object3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Object3D::CopyFrom(const Object3D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Object3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Object3D::IsInitialized() const {
  return true;
}

void Object3D::Swap(Object3D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Object3D::InternalSwap(Object3D* other) {
  using std::swap;
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  user_data_json_.Swap(&other->user_data_json_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pose_, other->pose_);
  swap(size_, other->size_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Object3D::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Object3DList::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Object3DList::kElementsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Object3DList::Object3DList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::scc_info_Object3DList.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Object3DList)
}
Object3DList::Object3DList(const Object3DList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      elements_(from.elements_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Object3DList)
}

void Object3DList::SharedCtor() {
}

Object3DList::~Object3DList() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Object3DList)
  SharedDtor();
}

void Object3DList::SharedDtor() {
}

void Object3DList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Object3DList::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Object3DList& Object3DList::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::scc_info_Object3DList.base);
  return *internal_default_instance();
}


void Object3DList::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Object3DList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  elements_.Clear();
  _internal_metadata_.Clear();
}

bool Object3DList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Object3DList)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ubii.dataStructure.Object3D elements = 1;
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
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Object3DList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Object3DList)
  return false;
#undef DO_
}

void Object3DList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Object3DList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Object3D elements = 1;
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
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Object3DList)
}

::google::protobuf::uint8* Object3DList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Object3DList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Object3D elements = 1;
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
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Object3DList)
  return target;
}

size_t Object3DList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Object3DList)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ubii.dataStructure.Object3D elements = 1;
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

void Object3DList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Object3DList)
  GOOGLE_DCHECK_NE(&from, this);
  const Object3DList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Object3DList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Object3DList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Object3DList)
    MergeFrom(*source);
  }
}

void Object3DList::MergeFrom(const Object3DList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Object3DList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  elements_.MergeFrom(from.elements_);
}

void Object3DList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Object3DList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Object3DList::CopyFrom(const Object3DList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Object3DList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Object3DList::IsInitialized() const {
  return true;
}

void Object3DList::Swap(Object3DList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Object3DList::InternalSwap(Object3DList* other) {
  using std::swap;
  CastToBase(&elements_)->InternalSwap(CastToBase(&other->elements_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Object3DList::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fobject3d_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Object3D* Arena::CreateMaybeMessage< ::ubii::dataStructure::Object3D >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Object3D >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Object3DList* Arena::CreateMaybeMessage< ::ubii::dataStructure::Object3DList >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Object3DList >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
