// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/sessions/session.proto

#ifndef PROTOBUF_INCLUDED_proto_2fsessions_2fsession_2eproto
#define PROTOBUF_INCLUDED_proto_2fsessions_2fsession_2eproto

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
#include "proto/interactions/interaction.pb.h"
#include "proto/sessions/ioMapping.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fsessions_2fsession_2eproto 

namespace protobuf_proto_2fsessions_2fsession_2eproto {
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
}  // namespace protobuf_proto_2fsessions_2fsession_2eproto
namespace ubii {
namespace sessions {
class Session;
class SessionDefaultTypeInternal;
extern SessionDefaultTypeInternal _Session_default_instance_;
class SessionList;
class SessionListDefaultTypeInternal;
extern SessionListDefaultTypeInternal _SessionList_default_instance_;
}  // namespace sessions
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::sessions::Session* Arena::CreateMaybeMessage<::ubii::sessions::Session>(Arena*);
template<> ::ubii::sessions::SessionList* Arena::CreateMaybeMessage<::ubii::sessions::SessionList>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace sessions {

// ===================================================================

class Session : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.sessions.Session) */ {
 public:
  Session();
  virtual ~Session();

  Session(const Session& from);

  inline Session& operator=(const Session& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Session(Session&& from) noexcept
    : Session() {
    *this = ::std::move(from);
  }

  inline Session& operator=(Session&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Session& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Session* internal_default_instance() {
    return reinterpret_cast<const Session*>(
               &_Session_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Session* other);
  friend void swap(Session& a, Session& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Session* New() const final {
    return CreateMaybeMessage<Session>(NULL);
  }

  Session* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Session>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Session& from);
  void MergeFrom(const Session& from);
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
  void InternalSwap(Session* other);
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

  // repeated .ubii.interactions.Interaction interactions = 3;
  int interactions_size() const;
  void clear_interactions();
  static const int kInteractionsFieldNumber = 3;
  ::ubii::interactions::Interaction* mutable_interactions(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >*
      mutable_interactions();
  const ::ubii::interactions::Interaction& interactions(int index) const;
  ::ubii::interactions::Interaction* add_interactions();
  const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >&
      interactions() const;

  // repeated .ubii.sessions.IOMapping io_mappings = 4;
  int io_mappings_size() const;
  void clear_io_mappings();
  static const int kIoMappingsFieldNumber = 4;
  ::ubii::sessions::IOMapping* mutable_io_mappings(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >*
      mutable_io_mappings();
  const ::ubii::sessions::IOMapping& io_mappings(int index) const;
  ::ubii::sessions::IOMapping* add_io_mappings();
  const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >&
      io_mappings() const;

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
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

  // @@protoc_insertion_point(class_scope:ubii.sessions.Session)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction > interactions_;
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping > io_mappings_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fsessions_2fsession_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SessionList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.sessions.SessionList) */ {
 public:
  SessionList();
  virtual ~SessionList();

  SessionList(const SessionList& from);

  inline SessionList& operator=(const SessionList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SessionList(SessionList&& from) noexcept
    : SessionList() {
    *this = ::std::move(from);
  }

  inline SessionList& operator=(SessionList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SessionList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SessionList* internal_default_instance() {
    return reinterpret_cast<const SessionList*>(
               &_SessionList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SessionList* other);
  friend void swap(SessionList& a, SessionList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SessionList* New() const final {
    return CreateMaybeMessage<SessionList>(NULL);
  }

  SessionList* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SessionList>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SessionList& from);
  void MergeFrom(const SessionList& from);
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
  void InternalSwap(SessionList* other);
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

  // repeated .ubii.sessions.Session elements = 1;
  int elements_size() const;
  void clear_elements();
  static const int kElementsFieldNumber = 1;
  ::ubii::sessions::Session* mutable_elements(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::Session >*
      mutable_elements();
  const ::ubii::sessions::Session& elements(int index) const;
  ::ubii::sessions::Session* add_elements();
  const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::Session >&
      elements() const;

  // @@protoc_insertion_point(class_scope:ubii.sessions.SessionList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::Session > elements_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fsessions_2fsession_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Session

// string id = 1;
inline void Session::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Session::id() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.id)
  return id_.GetNoArena();
}
inline void Session::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.id)
}
#if LANG_CXX11
inline void Session::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.sessions.Session.id)
}
#endif
inline void Session::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.sessions.Session.id)
}
inline void Session::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.Session.id)
}
inline ::std::string* Session::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Session::release_id() {
  // @@protoc_insertion_point(field_release:ubii.sessions.Session.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Session::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:ubii.sessions.Session.id)
}

// string name = 2;
inline void Session::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Session::name() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.name)
  return name_.GetNoArena();
}
inline void Session::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.name)
}
#if LANG_CXX11
inline void Session::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.sessions.Session.name)
}
#endif
inline void Session::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.sessions.Session.name)
}
inline void Session::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.Session.name)
}
inline ::std::string* Session::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Session::release_name() {
  // @@protoc_insertion_point(field_release:ubii.sessions.Session.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Session::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ubii.sessions.Session.name)
}

// repeated .ubii.interactions.Interaction interactions = 3;
inline int Session::interactions_size() const {
  return interactions_.size();
}
inline ::ubii::interactions::Interaction* Session::mutable_interactions(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.interactions)
  return interactions_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >*
Session::mutable_interactions() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.Session.interactions)
  return &interactions_;
}
inline const ::ubii::interactions::Interaction& Session::interactions(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.interactions)
  return interactions_.Get(index);
}
inline ::ubii::interactions::Interaction* Session::add_interactions() {
  // @@protoc_insertion_point(field_add:ubii.sessions.Session.interactions)
  return interactions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >&
Session::interactions() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.Session.interactions)
  return interactions_;
}

// repeated .ubii.sessions.IOMapping io_mappings = 4;
inline int Session::io_mappings_size() const {
  return io_mappings_.size();
}
inline ::ubii::sessions::IOMapping* Session::mutable_io_mappings(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.io_mappings)
  return io_mappings_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >*
Session::mutable_io_mappings() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.Session.io_mappings)
  return &io_mappings_;
}
inline const ::ubii::sessions::IOMapping& Session::io_mappings(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.io_mappings)
  return io_mappings_.Get(index);
}
inline ::ubii::sessions::IOMapping* Session::add_io_mappings() {
  // @@protoc_insertion_point(field_add:ubii.sessions.Session.io_mappings)
  return io_mappings_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >&
Session::io_mappings() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.Session.io_mappings)
  return io_mappings_;
}

// -------------------------------------------------------------------

// SessionList

// repeated .ubii.sessions.Session elements = 1;
inline int SessionList::elements_size() const {
  return elements_.size();
}
inline void SessionList::clear_elements() {
  elements_.Clear();
}
inline ::ubii::sessions::Session* SessionList::mutable_elements(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.SessionList.elements)
  return elements_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::sessions::Session >*
SessionList::mutable_elements() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.SessionList.elements)
  return &elements_;
}
inline const ::ubii::sessions::Session& SessionList::elements(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.SessionList.elements)
  return elements_.Get(index);
}
inline ::ubii::sessions::Session* SessionList::add_elements() {
  // @@protoc_insertion_point(field_add:ubii.sessions.SessionList.elements)
  return elements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::Session >&
SessionList::elements() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.SessionList.elements)
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

#endif  // PROTOBUF_INCLUDED_proto_2fsessions_2fsession_2eproto