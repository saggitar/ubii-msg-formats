// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/dataStructure/matrix3x2.proto

#ifndef PROTOBUF_INCLUDED_proto_2fdataStructure_2fmatrix3x2_2eproto
#define PROTOBUF_INCLUDED_proto_2fdataStructure_2fmatrix3x2_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdataStructure_2fmatrix3x2_2eproto 

namespace protobuf_proto_2fdataStructure_2fmatrix3x2_2eproto {
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
}  // namespace protobuf_proto_2fdataStructure_2fmatrix3x2_2eproto
namespace ubii {
namespace dataStructure {
class Matrix3x2;
class Matrix3x2DefaultTypeInternal;
extern Matrix3x2DefaultTypeInternal _Matrix3x2_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::dataStructure::Matrix3x2* Arena::CreateMaybeMessage<::ubii::dataStructure::Matrix3x2>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace dataStructure {

// ===================================================================

class Matrix3x2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.dataStructure.Matrix3x2) */ {
 public:
  Matrix3x2();
  virtual ~Matrix3x2();

  Matrix3x2(const Matrix3x2& from);

  inline Matrix3x2& operator=(const Matrix3x2& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Matrix3x2(Matrix3x2&& from) noexcept
    : Matrix3x2() {
    *this = ::std::move(from);
  }

  inline Matrix3x2& operator=(Matrix3x2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Matrix3x2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Matrix3x2* internal_default_instance() {
    return reinterpret_cast<const Matrix3x2*>(
               &_Matrix3x2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Matrix3x2* other);
  friend void swap(Matrix3x2& a, Matrix3x2& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Matrix3x2* New() const final {
    return CreateMaybeMessage<Matrix3x2>(NULL);
  }

  Matrix3x2* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Matrix3x2>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Matrix3x2& from);
  void MergeFrom(const Matrix3x2& from);
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
  void InternalSwap(Matrix3x2* other);
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

  // double m00 = 1;
  void clear_m00();
  static const int kM00FieldNumber = 1;
  double m00() const;
  void set_m00(double value);

  // double m01 = 2;
  void clear_m01();
  static const int kM01FieldNumber = 2;
  double m01() const;
  void set_m01(double value);

  // double m10 = 3;
  void clear_m10();
  static const int kM10FieldNumber = 3;
  double m10() const;
  void set_m10(double value);

  // double m11 = 4;
  void clear_m11();
  static const int kM11FieldNumber = 4;
  double m11() const;
  void set_m11(double value);

  // double m20 = 5;
  void clear_m20();
  static const int kM20FieldNumber = 5;
  double m20() const;
  void set_m20(double value);

  // double m21 = 6;
  void clear_m21();
  static const int kM21FieldNumber = 6;
  double m21() const;
  void set_m21(double value);

  // @@protoc_insertion_point(class_scope:ubii.dataStructure.Matrix3x2)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double m00_;
  double m01_;
  double m10_;
  double m11_;
  double m20_;
  double m21_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fdataStructure_2fmatrix3x2_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Matrix3x2

// double m00 = 1;
inline void Matrix3x2::clear_m00() {
  m00_ = 0;
}
inline double Matrix3x2::m00() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Matrix3x2.m00)
  return m00_;
}
inline void Matrix3x2::set_m00(double value) {
  
  m00_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Matrix3x2.m00)
}

// double m01 = 2;
inline void Matrix3x2::clear_m01() {
  m01_ = 0;
}
inline double Matrix3x2::m01() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Matrix3x2.m01)
  return m01_;
}
inline void Matrix3x2::set_m01(double value) {
  
  m01_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Matrix3x2.m01)
}

// double m10 = 3;
inline void Matrix3x2::clear_m10() {
  m10_ = 0;
}
inline double Matrix3x2::m10() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Matrix3x2.m10)
  return m10_;
}
inline void Matrix3x2::set_m10(double value) {
  
  m10_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Matrix3x2.m10)
}

// double m11 = 4;
inline void Matrix3x2::clear_m11() {
  m11_ = 0;
}
inline double Matrix3x2::m11() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Matrix3x2.m11)
  return m11_;
}
inline void Matrix3x2::set_m11(double value) {
  
  m11_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Matrix3x2.m11)
}

// double m20 = 5;
inline void Matrix3x2::clear_m20() {
  m20_ = 0;
}
inline double Matrix3x2::m20() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Matrix3x2.m20)
  return m20_;
}
inline void Matrix3x2::set_m20(double value) {
  
  m20_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Matrix3x2.m20)
}

// double m21 = 6;
inline void Matrix3x2::clear_m21() {
  m21_ = 0;
}
inline double Matrix3x2::m21() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Matrix3x2.m21)
  return m21_;
}
inline void Matrix3x2::set_m21(double value) {
  
  m21_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Matrix3x2.m21)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dataStructure
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fdataStructure_2fmatrix3x2_2eproto