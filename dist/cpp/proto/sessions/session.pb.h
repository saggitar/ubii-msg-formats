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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/sessions/ioMappings.pb.h"
#include "proto/processing/processingModule.pb.h"
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

enum SessionStatus {
  CREATED = 0,
  RUNNING = 1,
  PAUSED = 2,
  STOPPED = 3,
  SessionStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SessionStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SessionStatus_IsValid(int value);
const SessionStatus SessionStatus_MIN = CREATED;
const SessionStatus SessionStatus_MAX = STOPPED;
const int SessionStatus_ARRAYSIZE = SessionStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* SessionStatus_descriptor();
inline const ::std::string& SessionStatus_Name(SessionStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    SessionStatus_descriptor(), value);
}
inline bool SessionStatus_Parse(
    const ::std::string& name, SessionStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SessionStatus>(
    SessionStatus_descriptor(), name, value);
}
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

  // repeated .ubii.processing.ProcessingModule processing_modules = 3;
  int processing_modules_size() const;
  void clear_processing_modules();
  static const int kProcessingModulesFieldNumber = 3;
  ::ubii::processing::ProcessingModule* mutable_processing_modules(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >*
      mutable_processing_modules();
  const ::ubii::processing::ProcessingModule& processing_modules(int index) const;
  ::ubii::processing::ProcessingModule* add_processing_modules();
  const ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >&
      processing_modules() const;

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

  // repeated string tags = 5;
  int tags_size() const;
  void clear_tags();
  static const int kTagsFieldNumber = 5;
  const ::std::string& tags(int index) const;
  ::std::string* mutable_tags(int index);
  void set_tags(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_tags(int index, ::std::string&& value);
  #endif
  void set_tags(int index, const char* value);
  void set_tags(int index, const char* value, size_t size);
  ::std::string* add_tags();
  void add_tags(const ::std::string& value);
  #if LANG_CXX11
  void add_tags(::std::string&& value);
  #endif
  void add_tags(const char* value);
  void add_tags(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& tags() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_tags();

  // repeated string authors = 7;
  int authors_size() const;
  void clear_authors();
  static const int kAuthorsFieldNumber = 7;
  const ::std::string& authors(int index) const;
  ::std::string* mutable_authors(int index);
  void set_authors(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_authors(int index, ::std::string&& value);
  #endif
  void set_authors(int index, const char* value);
  void set_authors(int index, const char* value, size_t size);
  ::std::string* add_authors();
  void add_authors(const ::std::string& value);
  #if LANG_CXX11
  void add_authors(::std::string&& value);
  #endif
  void add_authors(const char* value);
  void add_authors(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& authors() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_authors();

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

  // string description = 6;
  void clear_description();
  static const int kDescriptionFieldNumber = 6;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // .ubii.sessions.SessionStatus status = 8;
  void clear_status();
  static const int kStatusFieldNumber = 8;
  ::ubii::sessions::SessionStatus status() const;
  void set_status(::ubii::sessions::SessionStatus value);

  // bool editable = 9;
  void clear_editable();
  static const int kEditableFieldNumber = 9;
  bool editable() const;
  void set_editable(bool value);

  // @@protoc_insertion_point(class_scope:ubii.sessions.Session)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule > processing_modules_;
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping > io_mappings_;
  ::google::protobuf::RepeatedPtrField< ::std::string> tags_;
  ::google::protobuf::RepeatedPtrField< ::std::string> authors_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  int status_;
  bool editable_;
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

// repeated .ubii.processing.ProcessingModule processing_modules = 3;
inline int Session::processing_modules_size() const {
  return processing_modules_.size();
}
inline ::ubii::processing::ProcessingModule* Session::mutable_processing_modules(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.processing_modules)
  return processing_modules_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >*
Session::mutable_processing_modules() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.Session.processing_modules)
  return &processing_modules_;
}
inline const ::ubii::processing::ProcessingModule& Session::processing_modules(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.processing_modules)
  return processing_modules_.Get(index);
}
inline ::ubii::processing::ProcessingModule* Session::add_processing_modules() {
  // @@protoc_insertion_point(field_add:ubii.sessions.Session.processing_modules)
  return processing_modules_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >&
Session::processing_modules() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.Session.processing_modules)
  return processing_modules_;
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

// repeated string tags = 5;
inline int Session::tags_size() const {
  return tags_.size();
}
inline void Session::clear_tags() {
  tags_.Clear();
}
inline const ::std::string& Session::tags(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.tags)
  return tags_.Get(index);
}
inline ::std::string* Session::mutable_tags(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.tags)
  return tags_.Mutable(index);
}
inline void Session::set_tags(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.tags)
  tags_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Session::set_tags(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.tags)
  tags_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Session::set_tags(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ubii.sessions.Session.tags)
}
inline void Session::set_tags(int index, const char* value, size_t size) {
  tags_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.Session.tags)
}
inline ::std::string* Session::add_tags() {
  // @@protoc_insertion_point(field_add_mutable:ubii.sessions.Session.tags)
  return tags_.Add();
}
inline void Session::add_tags(const ::std::string& value) {
  tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ubii.sessions.Session.tags)
}
#if LANG_CXX11
inline void Session::add_tags(::std::string&& value) {
  tags_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ubii.sessions.Session.tags)
}
#endif
inline void Session::add_tags(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ubii.sessions.Session.tags)
}
inline void Session::add_tags(const char* value, size_t size) {
  tags_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ubii.sessions.Session.tags)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Session::tags() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.Session.tags)
  return tags_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Session::mutable_tags() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.Session.tags)
  return &tags_;
}

// string description = 6;
inline void Session::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Session::description() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.description)
  return description_.GetNoArena();
}
inline void Session::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.description)
}
#if LANG_CXX11
inline void Session::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.sessions.Session.description)
}
#endif
inline void Session::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.sessions.Session.description)
}
inline void Session::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.Session.description)
}
inline ::std::string* Session::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Session::release_description() {
  // @@protoc_insertion_point(field_release:ubii.sessions.Session.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Session::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:ubii.sessions.Session.description)
}

// repeated string authors = 7;
inline int Session::authors_size() const {
  return authors_.size();
}
inline void Session::clear_authors() {
  authors_.Clear();
}
inline const ::std::string& Session::authors(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.authors)
  return authors_.Get(index);
}
inline ::std::string* Session::mutable_authors(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.Session.authors)
  return authors_.Mutable(index);
}
inline void Session::set_authors(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.authors)
  authors_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Session::set_authors(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.authors)
  authors_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Session::set_authors(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  authors_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ubii.sessions.Session.authors)
}
inline void Session::set_authors(int index, const char* value, size_t size) {
  authors_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.Session.authors)
}
inline ::std::string* Session::add_authors() {
  // @@protoc_insertion_point(field_add_mutable:ubii.sessions.Session.authors)
  return authors_.Add();
}
inline void Session::add_authors(const ::std::string& value) {
  authors_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ubii.sessions.Session.authors)
}
#if LANG_CXX11
inline void Session::add_authors(::std::string&& value) {
  authors_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ubii.sessions.Session.authors)
}
#endif
inline void Session::add_authors(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  authors_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ubii.sessions.Session.authors)
}
inline void Session::add_authors(const char* value, size_t size) {
  authors_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ubii.sessions.Session.authors)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Session::authors() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.Session.authors)
  return authors_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Session::mutable_authors() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.Session.authors)
  return &authors_;
}

// .ubii.sessions.SessionStatus status = 8;
inline void Session::clear_status() {
  status_ = 0;
}
inline ::ubii::sessions::SessionStatus Session::status() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.status)
  return static_cast< ::ubii::sessions::SessionStatus >(status_);
}
inline void Session::set_status(::ubii::sessions::SessionStatus value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.status)
}

// bool editable = 9;
inline void Session::clear_editable() {
  editable_ = false;
}
inline bool Session::editable() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.Session.editable)
  return editable_;
}
inline void Session::set_editable(bool value) {
  
  editable_ = value;
  // @@protoc_insertion_point(field_set:ubii.sessions.Session.editable)
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

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ubii::sessions::SessionStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ubii::sessions::SessionStatus>() {
  return ::ubii::sessions::SessionStatus_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fsessions_2fsession_2eproto
