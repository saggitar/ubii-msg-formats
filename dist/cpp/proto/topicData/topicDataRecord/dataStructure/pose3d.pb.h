// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/pose3d.proto

#ifndef PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto
#define PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "proto/topicData/topicDataRecord/dataStructure/vector3.pb.h"
#include "proto/topicData/topicDataRecord/dataStructure/quaternion.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto 

namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto
namespace ubii {
namespace dataStructure {
class Pose3D;
class Pose3DDefaultTypeInternal;
extern Pose3DDefaultTypeInternal _Pose3D_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::dataStructure::Pose3D* Arena::CreateMaybeMessage<::ubii::dataStructure::Pose3D>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace dataStructure {

// ===================================================================

class Pose3D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.dataStructure.Pose3D) */ {
 public:
  Pose3D();
  virtual ~Pose3D();

  Pose3D(const Pose3D& from);

  inline Pose3D& operator=(const Pose3D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Pose3D(Pose3D&& from) noexcept
    : Pose3D() {
    *this = ::std::move(from);
  }

  inline Pose3D& operator=(Pose3D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Pose3D& default_instance();

  enum OrientationCase {
    kQuaternion = 2,
    kEuler = 3,
    ORIENTATION_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Pose3D* internal_default_instance() {
    return reinterpret_cast<const Pose3D*>(
               &_Pose3D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Pose3D* other);
  friend void swap(Pose3D& a, Pose3D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Pose3D* New() const final {
    return CreateMaybeMessage<Pose3D>(NULL);
  }

  Pose3D* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Pose3D>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Pose3D& from);
  void MergeFrom(const Pose3D& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Pose3D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .ubii.dataStructure.Vector3 position = 1;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 1;
  private:
  const ::ubii::dataStructure::Vector3& _internal_position() const;
  public:
  const ::ubii::dataStructure::Vector3& position() const;
  ::ubii::dataStructure::Vector3* release_position();
  ::ubii::dataStructure::Vector3* mutable_position();
  void set_allocated_position(::ubii::dataStructure::Vector3* position);

  // .ubii.dataStructure.Quaternion quaternion = 2;
  bool has_quaternion() const;
  void clear_quaternion();
  static const int kQuaternionFieldNumber = 2;
  private:
  const ::ubii::dataStructure::Quaternion& _internal_quaternion() const;
  public:
  const ::ubii::dataStructure::Quaternion& quaternion() const;
  ::ubii::dataStructure::Quaternion* release_quaternion();
  ::ubii::dataStructure::Quaternion* mutable_quaternion();
  void set_allocated_quaternion(::ubii::dataStructure::Quaternion* quaternion);

  // .ubii.dataStructure.Vector3 euler = 3;
  bool has_euler() const;
  void clear_euler();
  static const int kEulerFieldNumber = 3;
  private:
  const ::ubii::dataStructure::Vector3& _internal_euler() const;
  public:
  const ::ubii::dataStructure::Vector3& euler() const;
  ::ubii::dataStructure::Vector3* release_euler();
  ::ubii::dataStructure::Vector3* mutable_euler();
  void set_allocated_euler(::ubii::dataStructure::Vector3* euler);

  void clear_orientation();
  OrientationCase orientation_case() const;
  // @@protoc_insertion_point(class_scope:ubii.dataStructure.Pose3D)
 private:
  void set_has_quaternion();
  void set_has_euler();

  inline bool has_orientation() const;
  inline void clear_has_orientation();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::ubii::dataStructure::Vector3* position_;
  union OrientationUnion {
    OrientationUnion() {}
    ::ubii::dataStructure::Quaternion* quaternion_;
    ::ubii::dataStructure::Vector3* euler_;
  } orientation_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Pose3D

// .ubii.dataStructure.Vector3 position = 1;
inline bool Pose3D::has_position() const {
  return this != internal_default_instance() && position_ != NULL;
}
inline const ::ubii::dataStructure::Vector3& Pose3D::_internal_position() const {
  return *position_;
}
inline const ::ubii::dataStructure::Vector3& Pose3D::position() const {
  const ::ubii::dataStructure::Vector3* p = position_;
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Pose3D.position)
  return p != NULL ? *p : *reinterpret_cast<const ::ubii::dataStructure::Vector3*>(
      &::ubii::dataStructure::_Vector3_default_instance_);
}
inline ::ubii::dataStructure::Vector3* Pose3D::release_position() {
  // @@protoc_insertion_point(field_release:ubii.dataStructure.Pose3D.position)
  
  ::ubii::dataStructure::Vector3* temp = position_;
  position_ = NULL;
  return temp;
}
inline ::ubii::dataStructure::Vector3* Pose3D::mutable_position() {
  
  if (position_ == NULL) {
    auto* p = CreateMaybeMessage<::ubii::dataStructure::Vector3>(GetArenaNoVirtual());
    position_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ubii.dataStructure.Pose3D.position)
  return position_;
}
inline void Pose3D::set_allocated_position(::ubii::dataStructure::Vector3* position) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(position_);
  }
  if (position) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      position = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:ubii.dataStructure.Pose3D.position)
}

// .ubii.dataStructure.Quaternion quaternion = 2;
inline bool Pose3D::has_quaternion() const {
  return orientation_case() == kQuaternion;
}
inline void Pose3D::set_has_quaternion() {
  _oneof_case_[0] = kQuaternion;
}
inline const ::ubii::dataStructure::Quaternion& Pose3D::_internal_quaternion() const {
  return *orientation_.quaternion_;
}
inline ::ubii::dataStructure::Quaternion* Pose3D::release_quaternion() {
  // @@protoc_insertion_point(field_release:ubii.dataStructure.Pose3D.quaternion)
  if (has_quaternion()) {
    clear_has_orientation();
      ::ubii::dataStructure::Quaternion* temp = orientation_.quaternion_;
    orientation_.quaternion_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::dataStructure::Quaternion& Pose3D::quaternion() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Pose3D.quaternion)
  return has_quaternion()
      ? *orientation_.quaternion_
      : *reinterpret_cast< ::ubii::dataStructure::Quaternion*>(&::ubii::dataStructure::_Quaternion_default_instance_);
}
inline ::ubii::dataStructure::Quaternion* Pose3D::mutable_quaternion() {
  if (!has_quaternion()) {
    clear_orientation();
    set_has_quaternion();
    orientation_.quaternion_ = CreateMaybeMessage< ::ubii::dataStructure::Quaternion >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.dataStructure.Pose3D.quaternion)
  return orientation_.quaternion_;
}

// .ubii.dataStructure.Vector3 euler = 3;
inline bool Pose3D::has_euler() const {
  return orientation_case() == kEuler;
}
inline void Pose3D::set_has_euler() {
  _oneof_case_[0] = kEuler;
}
inline const ::ubii::dataStructure::Vector3& Pose3D::_internal_euler() const {
  return *orientation_.euler_;
}
inline ::ubii::dataStructure::Vector3* Pose3D::release_euler() {
  // @@protoc_insertion_point(field_release:ubii.dataStructure.Pose3D.euler)
  if (has_euler()) {
    clear_has_orientation();
      ::ubii::dataStructure::Vector3* temp = orientation_.euler_;
    orientation_.euler_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::dataStructure::Vector3& Pose3D::euler() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Pose3D.euler)
  return has_euler()
      ? *orientation_.euler_
      : *reinterpret_cast< ::ubii::dataStructure::Vector3*>(&::ubii::dataStructure::_Vector3_default_instance_);
}
inline ::ubii::dataStructure::Vector3* Pose3D::mutable_euler() {
  if (!has_euler()) {
    clear_orientation();
    set_has_euler();
    orientation_.euler_ = CreateMaybeMessage< ::ubii::dataStructure::Vector3 >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.dataStructure.Pose3D.euler)
  return orientation_.euler_;
}

inline bool Pose3D::has_orientation() const {
  return orientation_case() != ORIENTATION_NOT_SET;
}
inline void Pose3D::clear_has_orientation() {
  _oneof_case_[0] = ORIENTATION_NOT_SET;
}
inline Pose3D::OrientationCase Pose3D::orientation_case() const {
  return Pose3D::OrientationCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dataStructure
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fpose3d_2eproto
