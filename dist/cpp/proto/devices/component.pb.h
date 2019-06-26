// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/devices/component.proto

#ifndef PROTOBUF_INCLUDED_proto_2fdevices_2fcomponent_2eproto
#define PROTOBUF_INCLUDED_proto_2fdevices_2fcomponent_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdevices_2fcomponent_2eproto 

namespace protobuf_proto_2fdevices_2fcomponent_2eproto {
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
}  // namespace protobuf_proto_2fdevices_2fcomponent_2eproto
namespace ubii {
namespace devices {
class Component;
class ComponentDefaultTypeInternal;
extern ComponentDefaultTypeInternal _Component_default_instance_;
}  // namespace devices
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::devices::Component* Arena::CreateMaybeMessage<::ubii::devices::Component>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace devices {

enum Component_IOType {
  Component_IOType_INPUT = 0,
  Component_IOType_OUTPUT = 1,
  Component_IOType_Component_IOType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Component_IOType_Component_IOType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Component_IOType_IsValid(int value);
const Component_IOType Component_IOType_IOType_MIN = Component_IOType_INPUT;
const Component_IOType Component_IOType_IOType_MAX = Component_IOType_OUTPUT;
const int Component_IOType_IOType_ARRAYSIZE = Component_IOType_IOType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Component_IOType_descriptor();
inline const ::std::string& Component_IOType_Name(Component_IOType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Component_IOType_descriptor(), value);
}
inline bool Component_IOType_Parse(
    const ::std::string& name, Component_IOType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Component_IOType>(
    Component_IOType_descriptor(), name, value);
}
// ===================================================================

class Component : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.devices.Component) */ {
 public:
  Component();
  virtual ~Component();

  Component(const Component& from);

  inline Component& operator=(const Component& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Component(Component&& from) noexcept
    : Component() {
    *this = ::std::move(from);
  }

  inline Component& operator=(Component&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Component& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Component* internal_default_instance() {
    return reinterpret_cast<const Component*>(
               &_Component_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Component* other);
  friend void swap(Component& a, Component& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Component* New() const final {
    return CreateMaybeMessage<Component>(NULL);
  }

  Component* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Component>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Component& from);
  void MergeFrom(const Component& from);
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
  void InternalSwap(Component* other);
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

  typedef Component_IOType IOType;
  static const IOType INPUT =
    Component_IOType_INPUT;
  static const IOType OUTPUT =
    Component_IOType_OUTPUT;
  static inline bool IOType_IsValid(int value) {
    return Component_IOType_IsValid(value);
  }
  static const IOType IOType_MIN =
    Component_IOType_IOType_MIN;
  static const IOType IOType_MAX =
    Component_IOType_IOType_MAX;
  static const int IOType_ARRAYSIZE =
    Component_IOType_IOType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  IOType_descriptor() {
    return Component_IOType_descriptor();
  }
  static inline const ::std::string& IOType_Name(IOType value) {
    return Component_IOType_Name(value);
  }
  static inline bool IOType_Parse(const ::std::string& name,
      IOType* value) {
    return Component_IOType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string topic = 1;
  void clear_topic();
  static const int kTopicFieldNumber = 1;
  const ::std::string& topic() const;
  void set_topic(const ::std::string& value);
  #if LANG_CXX11
  void set_topic(::std::string&& value);
  #endif
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  ::std::string* mutable_topic();
  ::std::string* release_topic();
  void set_allocated_topic(::std::string* topic);

  // string message_format = 2;
  void clear_message_format();
  static const int kMessageFormatFieldNumber = 2;
  const ::std::string& message_format() const;
  void set_message_format(const ::std::string& value);
  #if LANG_CXX11
  void set_message_format(::std::string&& value);
  #endif
  void set_message_format(const char* value);
  void set_message_format(const char* value, size_t size);
  ::std::string* mutable_message_format();
  ::std::string* release_message_format();
  void set_allocated_message_format(::std::string* message_format);

  // .ubii.devices.Component.IOType io_type = 3;
  void clear_io_type();
  static const int kIoTypeFieldNumber = 3;
  ::ubii::devices::Component_IOType io_type() const;
  void set_io_type(::ubii::devices::Component_IOType value);

  // @@protoc_insertion_point(class_scope:ubii.devices.Component)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr topic_;
  ::google::protobuf::internal::ArenaStringPtr message_format_;
  int io_type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fdevices_2fcomponent_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Component

// string topic = 1;
inline void Component::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Component::topic() const {
  // @@protoc_insertion_point(field_get:ubii.devices.Component.topic)
  return topic_.GetNoArena();
}
inline void Component::set_topic(const ::std::string& value) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.devices.Component.topic)
}
#if LANG_CXX11
inline void Component::set_topic(::std::string&& value) {
  
  topic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.devices.Component.topic)
}
#endif
inline void Component::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.devices.Component.topic)
}
inline void Component::set_topic(const char* value, size_t size) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.devices.Component.topic)
}
inline ::std::string* Component::mutable_topic() {
  
  // @@protoc_insertion_point(field_mutable:ubii.devices.Component.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Component::release_topic() {
  // @@protoc_insertion_point(field_release:ubii.devices.Component.topic)
  
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Component::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    
  } else {
    
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:ubii.devices.Component.topic)
}

// string message_format = 2;
inline void Component::clear_message_format() {
  message_format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Component::message_format() const {
  // @@protoc_insertion_point(field_get:ubii.devices.Component.message_format)
  return message_format_.GetNoArena();
}
inline void Component::set_message_format(const ::std::string& value) {
  
  message_format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.devices.Component.message_format)
}
#if LANG_CXX11
inline void Component::set_message_format(::std::string&& value) {
  
  message_format_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.devices.Component.message_format)
}
#endif
inline void Component::set_message_format(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.devices.Component.message_format)
}
inline void Component::set_message_format(const char* value, size_t size) {
  
  message_format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.devices.Component.message_format)
}
inline ::std::string* Component::mutable_message_format() {
  
  // @@protoc_insertion_point(field_mutable:ubii.devices.Component.message_format)
  return message_format_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Component::release_message_format() {
  // @@protoc_insertion_point(field_release:ubii.devices.Component.message_format)
  
  return message_format_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Component::set_allocated_message_format(::std::string* message_format) {
  if (message_format != NULL) {
    
  } else {
    
  }
  message_format_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message_format);
  // @@protoc_insertion_point(field_set_allocated:ubii.devices.Component.message_format)
}

// .ubii.devices.Component.IOType io_type = 3;
inline void Component::clear_io_type() {
  io_type_ = 0;
}
inline ::ubii::devices::Component_IOType Component::io_type() const {
  // @@protoc_insertion_point(field_get:ubii.devices.Component.io_type)
  return static_cast< ::ubii::devices::Component_IOType >(io_type_);
}
inline void Component::set_io_type(::ubii::devices::Component_IOType value) {
  
  io_type_ = value;
  // @@protoc_insertion_point(field_set:ubii.devices.Component.io_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace devices
}  // namespace ubii

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ubii::devices::Component_IOType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ubii::devices::Component_IOType>() {
  return ::ubii::devices::Component_IOType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fdevices_2fcomponent_2eproto