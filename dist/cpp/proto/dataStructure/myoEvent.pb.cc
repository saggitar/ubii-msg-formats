// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/dataStructure/myoEvent.proto

#include "proto/dataStructure/myoEvent.pb.h"

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

namespace protobuf_proto_2fdataStructure_2fquaternion_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdataStructure_2fquaternion_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Quaternion;
}  // namespace protobuf_proto_2fdataStructure_2fquaternion_2eproto
namespace protobuf_proto_2fdataStructure_2fvector3_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdataStructure_2fvector3_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3;
}  // namespace protobuf_proto_2fdataStructure_2fvector3_2eproto
namespace protobuf_proto_2fdataStructure_2fvector8_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdataStructure_2fvector8_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector8;
}  // namespace protobuf_proto_2fdataStructure_2fvector8_2eproto
namespace ubii {
namespace dataStructure {
class MyoEventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MyoEvent>
      _instance;
} _MyoEvent_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace protobuf_proto_2fdataStructure_2fmyoEvent_2eproto {
static void InitDefaultsMyoEvent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_MyoEvent_default_instance_;
    new (ptr) ::ubii::dataStructure::MyoEvent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::MyoEvent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_MyoEvent =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsMyoEvent}, {
      &protobuf_proto_2fdataStructure_2fvector8_2eproto::scc_info_Vector8.base,
      &protobuf_proto_2fdataStructure_2fquaternion_2eproto::scc_info_Quaternion.base,
      &protobuf_proto_2fdataStructure_2fvector3_2eproto::scc_info_Vector3.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_MyoEvent.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::MyoEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::MyoEvent, emg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::MyoEvent, orientation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::MyoEvent, gyroscope_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::MyoEvent, accelerometer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::MyoEvent, gesture_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::dataStructure::MyoEvent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_MyoEvent_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/dataStructure/myoEvent.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\"proto/dataStructure/myoEvent.proto\022\022ub"
      "ii.dataStructure\032!proto/dataStructure/ve"
      "ctor8.proto\032!proto/dataStructure/vector3"
      ".proto\032$proto/dataStructure/quaternion.p"
      "roto\032)proto/dataStructure/handGestureTyp"
      "e.proto\"\203\002\n\010MyoEvent\022(\n\003emg\030\001 \001(\0132\033.ubii"
      ".dataStructure.Vector8\0223\n\013orientation\030\002 "
      "\001(\0132\036.ubii.dataStructure.Quaternion\022.\n\tg"
      "yroscope\030\003 \001(\0132\033.ubii.dataStructure.Vect"
      "or3\0222\n\raccelerometer\030\004 \001(\0132\033.ubii.dataSt"
      "ructure.Vector3\0224\n\007gesture\030\005 \001(\0162#.ubii."
      "dataStructure.HandGestureTypeb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 477);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/dataStructure/myoEvent.proto", &protobuf_RegisterTypes);
  ::protobuf_proto_2fdataStructure_2fvector8_2eproto::AddDescriptors();
  ::protobuf_proto_2fdataStructure_2fvector3_2eproto::AddDescriptors();
  ::protobuf_proto_2fdataStructure_2fquaternion_2eproto::AddDescriptors();
  ::protobuf_proto_2fdataStructure_2fhandGestureType_2eproto::AddDescriptors();
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
}  // namespace protobuf_proto_2fdataStructure_2fmyoEvent_2eproto
namespace ubii {
namespace dataStructure {

// ===================================================================

void MyoEvent::InitAsDefaultInstance() {
  ::ubii::dataStructure::_MyoEvent_default_instance_._instance.get_mutable()->emg_ = const_cast< ::ubii::dataStructure::Vector8*>(
      ::ubii::dataStructure::Vector8::internal_default_instance());
  ::ubii::dataStructure::_MyoEvent_default_instance_._instance.get_mutable()->orientation_ = const_cast< ::ubii::dataStructure::Quaternion*>(
      ::ubii::dataStructure::Quaternion::internal_default_instance());
  ::ubii::dataStructure::_MyoEvent_default_instance_._instance.get_mutable()->gyroscope_ = const_cast< ::ubii::dataStructure::Vector3*>(
      ::ubii::dataStructure::Vector3::internal_default_instance());
  ::ubii::dataStructure::_MyoEvent_default_instance_._instance.get_mutable()->accelerometer_ = const_cast< ::ubii::dataStructure::Vector3*>(
      ::ubii::dataStructure::Vector3::internal_default_instance());
}
void MyoEvent::clear_emg() {
  if (GetArenaNoVirtual() == NULL && emg_ != NULL) {
    delete emg_;
  }
  emg_ = NULL;
}
void MyoEvent::clear_orientation() {
  if (GetArenaNoVirtual() == NULL && orientation_ != NULL) {
    delete orientation_;
  }
  orientation_ = NULL;
}
void MyoEvent::clear_gyroscope() {
  if (GetArenaNoVirtual() == NULL && gyroscope_ != NULL) {
    delete gyroscope_;
  }
  gyroscope_ = NULL;
}
void MyoEvent::clear_accelerometer() {
  if (GetArenaNoVirtual() == NULL && accelerometer_ != NULL) {
    delete accelerometer_;
  }
  accelerometer_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MyoEvent::kEmgFieldNumber;
const int MyoEvent::kOrientationFieldNumber;
const int MyoEvent::kGyroscopeFieldNumber;
const int MyoEvent::kAccelerometerFieldNumber;
const int MyoEvent::kGestureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MyoEvent::MyoEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2fdataStructure_2fmyoEvent_2eproto::scc_info_MyoEvent.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.MyoEvent)
}
MyoEvent::MyoEvent(const MyoEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_emg()) {
    emg_ = new ::ubii::dataStructure::Vector8(*from.emg_);
  } else {
    emg_ = NULL;
  }
  if (from.has_orientation()) {
    orientation_ = new ::ubii::dataStructure::Quaternion(*from.orientation_);
  } else {
    orientation_ = NULL;
  }
  if (from.has_gyroscope()) {
    gyroscope_ = new ::ubii::dataStructure::Vector3(*from.gyroscope_);
  } else {
    gyroscope_ = NULL;
  }
  if (from.has_accelerometer()) {
    accelerometer_ = new ::ubii::dataStructure::Vector3(*from.accelerometer_);
  } else {
    accelerometer_ = NULL;
  }
  gesture_ = from.gesture_;
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.MyoEvent)
}

void MyoEvent::SharedCtor() {
  ::memset(&emg_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&gesture_) -
      reinterpret_cast<char*>(&emg_)) + sizeof(gesture_));
}

MyoEvent::~MyoEvent() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.MyoEvent)
  SharedDtor();
}

void MyoEvent::SharedDtor() {
  if (this != internal_default_instance()) delete emg_;
  if (this != internal_default_instance()) delete orientation_;
  if (this != internal_default_instance()) delete gyroscope_;
  if (this != internal_default_instance()) delete accelerometer_;
}

void MyoEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* MyoEvent::descriptor() {
  ::protobuf_proto_2fdataStructure_2fmyoEvent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdataStructure_2fmyoEvent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MyoEvent& MyoEvent::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2fdataStructure_2fmyoEvent_2eproto::scc_info_MyoEvent.base);
  return *internal_default_instance();
}


void MyoEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.MyoEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && emg_ != NULL) {
    delete emg_;
  }
  emg_ = NULL;
  if (GetArenaNoVirtual() == NULL && orientation_ != NULL) {
    delete orientation_;
  }
  orientation_ = NULL;
  if (GetArenaNoVirtual() == NULL && gyroscope_ != NULL) {
    delete gyroscope_;
  }
  gyroscope_ = NULL;
  if (GetArenaNoVirtual() == NULL && accelerometer_ != NULL) {
    delete accelerometer_;
  }
  accelerometer_ = NULL;
  gesture_ = 0;
  _internal_metadata_.Clear();
}

bool MyoEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.MyoEvent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .ubii.dataStructure.Vector8 emg = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_emg()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.dataStructure.Quaternion orientation = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_orientation()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.dataStructure.Vector3 gyroscope = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_gyroscope()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.dataStructure.Vector3 accelerometer = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_accelerometer()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.dataStructure.HandGestureType gesture = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_gesture(static_cast< ::ubii::dataStructure::HandGestureType >(value));
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
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.MyoEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.MyoEvent)
  return false;
#undef DO_
}

void MyoEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.MyoEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ubii.dataStructure.Vector8 emg = 1;
  if (this->has_emg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_emg(), output);
  }

  // .ubii.dataStructure.Quaternion orientation = 2;
  if (this->has_orientation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_orientation(), output);
  }

  // .ubii.dataStructure.Vector3 gyroscope = 3;
  if (this->has_gyroscope()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_gyroscope(), output);
  }

  // .ubii.dataStructure.Vector3 accelerometer = 4;
  if (this->has_accelerometer()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_accelerometer(), output);
  }

  // .ubii.dataStructure.HandGestureType gesture = 5;
  if (this->gesture() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->gesture(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.MyoEvent)
}

::google::protobuf::uint8* MyoEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.MyoEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ubii.dataStructure.Vector8 emg = 1;
  if (this->has_emg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_emg(), deterministic, target);
  }

  // .ubii.dataStructure.Quaternion orientation = 2;
  if (this->has_orientation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_orientation(), deterministic, target);
  }

  // .ubii.dataStructure.Vector3 gyroscope = 3;
  if (this->has_gyroscope()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_gyroscope(), deterministic, target);
  }

  // .ubii.dataStructure.Vector3 accelerometer = 4;
  if (this->has_accelerometer()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_accelerometer(), deterministic, target);
  }

  // .ubii.dataStructure.HandGestureType gesture = 5;
  if (this->gesture() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->gesture(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.MyoEvent)
  return target;
}

size_t MyoEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.MyoEvent)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .ubii.dataStructure.Vector8 emg = 1;
  if (this->has_emg()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *emg_);
  }

  // .ubii.dataStructure.Quaternion orientation = 2;
  if (this->has_orientation()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *orientation_);
  }

  // .ubii.dataStructure.Vector3 gyroscope = 3;
  if (this->has_gyroscope()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *gyroscope_);
  }

  // .ubii.dataStructure.Vector3 accelerometer = 4;
  if (this->has_accelerometer()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *accelerometer_);
  }

  // .ubii.dataStructure.HandGestureType gesture = 5;
  if (this->gesture() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->gesture());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MyoEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.MyoEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const MyoEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MyoEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.MyoEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.MyoEvent)
    MergeFrom(*source);
  }
}

void MyoEvent::MergeFrom(const MyoEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.MyoEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_emg()) {
    mutable_emg()->::ubii::dataStructure::Vector8::MergeFrom(from.emg());
  }
  if (from.has_orientation()) {
    mutable_orientation()->::ubii::dataStructure::Quaternion::MergeFrom(from.orientation());
  }
  if (from.has_gyroscope()) {
    mutable_gyroscope()->::ubii::dataStructure::Vector3::MergeFrom(from.gyroscope());
  }
  if (from.has_accelerometer()) {
    mutable_accelerometer()->::ubii::dataStructure::Vector3::MergeFrom(from.accelerometer());
  }
  if (from.gesture() != 0) {
    set_gesture(from.gesture());
  }
}

void MyoEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.MyoEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MyoEvent::CopyFrom(const MyoEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.MyoEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyoEvent::IsInitialized() const {
  return true;
}

void MyoEvent::Swap(MyoEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MyoEvent::InternalSwap(MyoEvent* other) {
  using std::swap;
  swap(emg_, other->emg_);
  swap(orientation_, other->orientation_);
  swap(gyroscope_, other->gyroscope_);
  swap(accelerometer_, other->accelerometer_);
  swap(gesture_, other->gesture_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata MyoEvent::GetMetadata() const {
  protobuf_proto_2fdataStructure_2fmyoEvent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdataStructure_2fmyoEvent_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::MyoEvent* Arena::CreateMaybeMessage< ::ubii::dataStructure::MyoEvent >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::MyoEvent >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
