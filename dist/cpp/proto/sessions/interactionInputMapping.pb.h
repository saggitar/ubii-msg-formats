// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/sessions/interactionInputMapping.proto

#ifndef PROTOBUF_INCLUDED_proto_2fsessions_2finteractionInputMapping_2eproto
#define PROTOBUF_INCLUDED_proto_2fsessions_2finteractionInputMapping_2eproto

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
#include "proto/devices/topicMux.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fsessions_2finteractionInputMapping_2eproto 

namespace protobuf_proto_2fsessions_2finteractionInputMapping_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_proto_2fsessions_2finteractionInputMapping_2eproto
namespace ubii {
namespace sessions {
class InteractionInputMapping;
class InteractionInputMappingDefaultTypeInternal;
extern InteractionInputMappingDefaultTypeInternal _InteractionInputMapping_default_instance_;
class InteractionInputMappingList;
class InteractionInputMappingListDefaultTypeInternal;
extern InteractionInputMappingListDefaultTypeInternal _InteractionInputMappingList_default_instance_;
}  // namespace sessions
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::sessions::InteractionInputMapping* Arena::CreateMaybeMessage<::ubii::sessions::InteractionInputMapping>(Arena*);
template<> ::ubii::sessions::InteractionInputMappingList* Arena::CreateMaybeMessage<::ubii::sessions::InteractionInputMappingList>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace sessions {

// ===================================================================

class InteractionInputMapping : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.sessions.InteractionInputMapping) */ {
 public:
  InteractionInputMapping();
  virtual ~InteractionInputMapping();

  InteractionInputMapping(const InteractionInputMapping& from);

  inline InteractionInputMapping& operator=(const InteractionInputMapping& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InteractionInputMapping(InteractionInputMapping&& from) noexcept
    : InteractionInputMapping() {
    *this = ::std::move(from);
  }

  inline InteractionInputMapping& operator=(InteractionInputMapping&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const InteractionInputMapping& default_instance();

  enum TopicSourceCase {
    kTopic = 2,
    kTopicMux = 3,
    TOPIC_SOURCE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InteractionInputMapping* internal_default_instance() {
    return reinterpret_cast<const InteractionInputMapping*>(
               &_InteractionInputMapping_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(InteractionInputMapping* other);
  friend void swap(InteractionInputMapping& a, InteractionInputMapping& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InteractionInputMapping* New() const final {
    return CreateMaybeMessage<InteractionInputMapping>(NULL);
  }

  InteractionInputMapping* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InteractionInputMapping>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const InteractionInputMapping& from);
  void MergeFrom(const InteractionInputMapping& from);
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
  void InternalSwap(InteractionInputMapping* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string topic = 2;
  private:
  bool has_topic() const;
  public:
  void clear_topic();
  static const int kTopicFieldNumber = 2;
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

  // .ubii.devices.TopicMux topic_mux = 3;
  bool has_topic_mux() const;
  void clear_topic_mux();
  static const int kTopicMuxFieldNumber = 3;
  private:
  const ::ubii::devices::TopicMux& _internal_topic_mux() const;
  public:
  const ::ubii::devices::TopicMux& topic_mux() const;
  ::ubii::devices::TopicMux* release_topic_mux();
  ::ubii::devices::TopicMux* mutable_topic_mux();
  void set_allocated_topic_mux(::ubii::devices::TopicMux* topic_mux);

  void clear_topic_source();
  TopicSourceCase topic_source_case() const;
  // @@protoc_insertion_point(class_scope:ubii.sessions.InteractionInputMapping)
 private:
  void set_has_topic();
  void set_has_topic_mux();

  inline bool has_topic_source() const;
  inline void clear_has_topic_source();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  union TopicSourceUnion {
    TopicSourceUnion() {}
    ::google::protobuf::internal::ArenaStringPtr topic_;
    ::ubii::devices::TopicMux* topic_mux_;
  } topic_source_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_proto_2fsessions_2finteractionInputMapping_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class InteractionInputMappingList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.sessions.InteractionInputMappingList) */ {
 public:
  InteractionInputMappingList();
  virtual ~InteractionInputMappingList();

  InteractionInputMappingList(const InteractionInputMappingList& from);

  inline InteractionInputMappingList& operator=(const InteractionInputMappingList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InteractionInputMappingList(InteractionInputMappingList&& from) noexcept
    : InteractionInputMappingList() {
    *this = ::std::move(from);
  }

  inline InteractionInputMappingList& operator=(InteractionInputMappingList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const InteractionInputMappingList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InteractionInputMappingList* internal_default_instance() {
    return reinterpret_cast<const InteractionInputMappingList*>(
               &_InteractionInputMappingList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(InteractionInputMappingList* other);
  friend void swap(InteractionInputMappingList& a, InteractionInputMappingList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InteractionInputMappingList* New() const final {
    return CreateMaybeMessage<InteractionInputMappingList>(NULL);
  }

  InteractionInputMappingList* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InteractionInputMappingList>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const InteractionInputMappingList& from);
  void MergeFrom(const InteractionInputMappingList& from);
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
  void InternalSwap(InteractionInputMappingList* other);
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

  // repeated .ubii.sessions.InteractionInputMapping elements = 1;
  int elements_size() const;
  void clear_elements();
  static const int kElementsFieldNumber = 1;
  ::ubii::sessions::InteractionInputMapping* mutable_elements(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >*
      mutable_elements();
  const ::ubii::sessions::InteractionInputMapping& elements(int index) const;
  ::ubii::sessions::InteractionInputMapping* add_elements();
  const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >&
      elements() const;

  // @@protoc_insertion_point(class_scope:ubii.sessions.InteractionInputMappingList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping > elements_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fsessions_2finteractionInputMapping_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InteractionInputMapping

// string name = 1;
inline void InteractionInputMapping::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& InteractionInputMapping::name() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.InteractionInputMapping.name)
  return name_.GetNoArena();
}
inline void InteractionInputMapping::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.sessions.InteractionInputMapping.name)
}
#if LANG_CXX11
inline void InteractionInputMapping::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.sessions.InteractionInputMapping.name)
}
#endif
inline void InteractionInputMapping::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.sessions.InteractionInputMapping.name)
}
inline void InteractionInputMapping::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.InteractionInputMapping.name)
}
inline ::std::string* InteractionInputMapping::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ubii.sessions.InteractionInputMapping.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InteractionInputMapping::release_name() {
  // @@protoc_insertion_point(field_release:ubii.sessions.InteractionInputMapping.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InteractionInputMapping::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ubii.sessions.InteractionInputMapping.name)
}

// string topic = 2;
inline bool InteractionInputMapping::has_topic() const {
  return topic_source_case() == kTopic;
}
inline void InteractionInputMapping::set_has_topic() {
  _oneof_case_[0] = kTopic;
}
inline void InteractionInputMapping::clear_topic() {
  if (has_topic()) {
    topic_source_.topic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_topic_source();
  }
}
inline const ::std::string& InteractionInputMapping::topic() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.InteractionInputMapping.topic)
  if (has_topic()) {
    return topic_source_.topic_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void InteractionInputMapping::set_topic(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ubii.sessions.InteractionInputMapping.topic)
  if (!has_topic()) {
    clear_topic_source();
    set_has_topic();
    topic_source_.topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  topic_source_.topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.sessions.InteractionInputMapping.topic)
}
#if LANG_CXX11
inline void InteractionInputMapping::set_topic(::std::string&& value) {
  // @@protoc_insertion_point(field_set:ubii.sessions.InteractionInputMapping.topic)
  if (!has_topic()) {
    clear_topic_source();
    set_has_topic();
    topic_source_.topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  topic_source_.topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.sessions.InteractionInputMapping.topic)
}
#endif
inline void InteractionInputMapping::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_topic()) {
    clear_topic_source();
    set_has_topic();
    topic_source_.topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  topic_source_.topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.sessions.InteractionInputMapping.topic)
}
inline void InteractionInputMapping::set_topic(const char* value, size_t size) {
  if (!has_topic()) {
    clear_topic_source();
    set_has_topic();
    topic_source_.topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  topic_source_.topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.InteractionInputMapping.topic)
}
inline ::std::string* InteractionInputMapping::mutable_topic() {
  if (!has_topic()) {
    clear_topic_source();
    set_has_topic();
    topic_source_.topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:ubii.sessions.InteractionInputMapping.topic)
  return topic_source_.topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InteractionInputMapping::release_topic() {
  // @@protoc_insertion_point(field_release:ubii.sessions.InteractionInputMapping.topic)
  if (has_topic()) {
    clear_has_topic_source();
    return topic_source_.topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void InteractionInputMapping::set_allocated_topic(::std::string* topic) {
  if (!has_topic()) {
    topic_source_.topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_topic_source();
  if (topic != NULL) {
    set_has_topic();
    topic_source_.topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  }
  // @@protoc_insertion_point(field_set_allocated:ubii.sessions.InteractionInputMapping.topic)
}

// .ubii.devices.TopicMux topic_mux = 3;
inline bool InteractionInputMapping::has_topic_mux() const {
  return topic_source_case() == kTopicMux;
}
inline void InteractionInputMapping::set_has_topic_mux() {
  _oneof_case_[0] = kTopicMux;
}
inline const ::ubii::devices::TopicMux& InteractionInputMapping::_internal_topic_mux() const {
  return *topic_source_.topic_mux_;
}
inline ::ubii::devices::TopicMux* InteractionInputMapping::release_topic_mux() {
  // @@protoc_insertion_point(field_release:ubii.sessions.InteractionInputMapping.topic_mux)
  if (has_topic_mux()) {
    clear_has_topic_source();
      ::ubii::devices::TopicMux* temp = topic_source_.topic_mux_;
    topic_source_.topic_mux_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ubii::devices::TopicMux& InteractionInputMapping::topic_mux() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.InteractionInputMapping.topic_mux)
  return has_topic_mux()
      ? *topic_source_.topic_mux_
      : *reinterpret_cast< ::ubii::devices::TopicMux*>(&::ubii::devices::_TopicMux_default_instance_);
}
inline ::ubii::devices::TopicMux* InteractionInputMapping::mutable_topic_mux() {
  if (!has_topic_mux()) {
    clear_topic_source();
    set_has_topic_mux();
    topic_source_.topic_mux_ = CreateMaybeMessage< ::ubii::devices::TopicMux >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ubii.sessions.InteractionInputMapping.topic_mux)
  return topic_source_.topic_mux_;
}

inline bool InteractionInputMapping::has_topic_source() const {
  return topic_source_case() != TOPIC_SOURCE_NOT_SET;
}
inline void InteractionInputMapping::clear_has_topic_source() {
  _oneof_case_[0] = TOPIC_SOURCE_NOT_SET;
}
inline InteractionInputMapping::TopicSourceCase InteractionInputMapping::topic_source_case() const {
  return InteractionInputMapping::TopicSourceCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// InteractionInputMappingList

// repeated .ubii.sessions.InteractionInputMapping elements = 1;
inline int InteractionInputMappingList::elements_size() const {
  return elements_.size();
}
inline void InteractionInputMappingList::clear_elements() {
  elements_.Clear();
}
inline ::ubii::sessions::InteractionInputMapping* InteractionInputMappingList::mutable_elements(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.InteractionInputMappingList.elements)
  return elements_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >*
InteractionInputMappingList::mutable_elements() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.InteractionInputMappingList.elements)
  return &elements_;
}
inline const ::ubii::sessions::InteractionInputMapping& InteractionInputMappingList::elements(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.InteractionInputMappingList.elements)
  return elements_.Get(index);
}
inline ::ubii::sessions::InteractionInputMapping* InteractionInputMappingList::add_elements() {
  // @@protoc_insertion_point(field_add:ubii.sessions.InteractionInputMappingList.elements)
  return elements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >&
InteractionInputMappingList::elements() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.InteractionInputMappingList.elements)
  return elements_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sessions
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fsessions_2finteractionInputMapping_2eproto
