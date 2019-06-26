// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/interactions/interaction.proto

#ifndef PROTOBUF_INCLUDED_proto_2finteractions_2finteraction_2eproto
#define PROTOBUF_INCLUDED_proto_2finteractions_2finteraction_2eproto

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
#include "proto/interactions/ioFormat.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2finteractions_2finteraction_2eproto 

namespace protobuf_proto_2finteractions_2finteraction_2eproto {
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
}  // namespace protobuf_proto_2finteractions_2finteraction_2eproto
namespace ubii {
namespace interactions {
class Interaction;
class InteractionDefaultTypeInternal;
extern InteractionDefaultTypeInternal _Interaction_default_instance_;
class InteractionList;
class InteractionListDefaultTypeInternal;
extern InteractionListDefaultTypeInternal _InteractionList_default_instance_;
}  // namespace interactions
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::interactions::Interaction* Arena::CreateMaybeMessage<::ubii::interactions::Interaction>(Arena*);
template<> ::ubii::interactions::InteractionList* Arena::CreateMaybeMessage<::ubii::interactions::InteractionList>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace interactions {

// ===================================================================

class Interaction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.interactions.Interaction) */ {
 public:
  Interaction();
  virtual ~Interaction();

  Interaction(const Interaction& from);

  inline Interaction& operator=(const Interaction& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Interaction(Interaction&& from) noexcept
    : Interaction() {
    *this = ::std::move(from);
  }

  inline Interaction& operator=(Interaction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Interaction& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Interaction* internal_default_instance() {
    return reinterpret_cast<const Interaction*>(
               &_Interaction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Interaction* other);
  friend void swap(Interaction& a, Interaction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Interaction* New() const final {
    return CreateMaybeMessage<Interaction>(NULL);
  }

  Interaction* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Interaction>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Interaction& from);
  void MergeFrom(const Interaction& from);
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
  void InternalSwap(Interaction* other);
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

  // repeated .ubii.interactions.IOFormat input_formats = 4;
  int input_formats_size() const;
  void clear_input_formats();
  static const int kInputFormatsFieldNumber = 4;
  ::ubii::interactions::IOFormat* mutable_input_formats(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >*
      mutable_input_formats();
  const ::ubii::interactions::IOFormat& input_formats(int index) const;
  ::ubii::interactions::IOFormat* add_input_formats();
  const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >&
      input_formats() const;

  // repeated .ubii.interactions.IOFormat output_formats = 5;
  int output_formats_size() const;
  void clear_output_formats();
  static const int kOutputFormatsFieldNumber = 5;
  ::ubii::interactions::IOFormat* mutable_output_formats(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >*
      mutable_output_formats();
  const ::ubii::interactions::IOFormat& output_formats(int index) const;
  ::ubii::interactions::IOFormat* add_output_formats();
  const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >&
      output_formats() const;

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

  // string processing_callback = 3;
  void clear_processing_callback();
  static const int kProcessingCallbackFieldNumber = 3;
  const ::std::string& processing_callback() const;
  void set_processing_callback(const ::std::string& value);
  #if LANG_CXX11
  void set_processing_callback(::std::string&& value);
  #endif
  void set_processing_callback(const char* value);
  void set_processing_callback(const char* value, size_t size);
  ::std::string* mutable_processing_callback();
  ::std::string* release_processing_callback();
  void set_allocated_processing_callback(::std::string* processing_callback);

  // @@protoc_insertion_point(class_scope:ubii.interactions.Interaction)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat > input_formats_;
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat > output_formats_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr processing_callback_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2finteractions_2finteraction_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class InteractionList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.interactions.InteractionList) */ {
 public:
  InteractionList();
  virtual ~InteractionList();

  InteractionList(const InteractionList& from);

  inline InteractionList& operator=(const InteractionList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InteractionList(InteractionList&& from) noexcept
    : InteractionList() {
    *this = ::std::move(from);
  }

  inline InteractionList& operator=(InteractionList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const InteractionList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InteractionList* internal_default_instance() {
    return reinterpret_cast<const InteractionList*>(
               &_InteractionList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(InteractionList* other);
  friend void swap(InteractionList& a, InteractionList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InteractionList* New() const final {
    return CreateMaybeMessage<InteractionList>(NULL);
  }

  InteractionList* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InteractionList>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const InteractionList& from);
  void MergeFrom(const InteractionList& from);
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
  void InternalSwap(InteractionList* other);
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

  // repeated .ubii.interactions.Interaction elements = 1;
  int elements_size() const;
  void clear_elements();
  static const int kElementsFieldNumber = 1;
  ::ubii::interactions::Interaction* mutable_elements(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >*
      mutable_elements();
  const ::ubii::interactions::Interaction& elements(int index) const;
  ::ubii::interactions::Interaction* add_elements();
  const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >&
      elements() const;

  // @@protoc_insertion_point(class_scope:ubii.interactions.InteractionList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction > elements_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2finteractions_2finteraction_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Interaction

// string id = 1;
inline void Interaction::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Interaction::id() const {
  // @@protoc_insertion_point(field_get:ubii.interactions.Interaction.id)
  return id_.GetNoArena();
}
inline void Interaction::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.interactions.Interaction.id)
}
#if LANG_CXX11
inline void Interaction::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.interactions.Interaction.id)
}
#endif
inline void Interaction::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.interactions.Interaction.id)
}
inline void Interaction::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.interactions.Interaction.id)
}
inline ::std::string* Interaction::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:ubii.interactions.Interaction.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Interaction::release_id() {
  // @@protoc_insertion_point(field_release:ubii.interactions.Interaction.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Interaction::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:ubii.interactions.Interaction.id)
}

// string name = 2;
inline void Interaction::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Interaction::name() const {
  // @@protoc_insertion_point(field_get:ubii.interactions.Interaction.name)
  return name_.GetNoArena();
}
inline void Interaction::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.interactions.Interaction.name)
}
#if LANG_CXX11
inline void Interaction::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.interactions.Interaction.name)
}
#endif
inline void Interaction::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.interactions.Interaction.name)
}
inline void Interaction::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.interactions.Interaction.name)
}
inline ::std::string* Interaction::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ubii.interactions.Interaction.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Interaction::release_name() {
  // @@protoc_insertion_point(field_release:ubii.interactions.Interaction.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Interaction::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ubii.interactions.Interaction.name)
}

// string processing_callback = 3;
inline void Interaction::clear_processing_callback() {
  processing_callback_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Interaction::processing_callback() const {
  // @@protoc_insertion_point(field_get:ubii.interactions.Interaction.processing_callback)
  return processing_callback_.GetNoArena();
}
inline void Interaction::set_processing_callback(const ::std::string& value) {
  
  processing_callback_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.interactions.Interaction.processing_callback)
}
#if LANG_CXX11
inline void Interaction::set_processing_callback(::std::string&& value) {
  
  processing_callback_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.interactions.Interaction.processing_callback)
}
#endif
inline void Interaction::set_processing_callback(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  processing_callback_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.interactions.Interaction.processing_callback)
}
inline void Interaction::set_processing_callback(const char* value, size_t size) {
  
  processing_callback_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.interactions.Interaction.processing_callback)
}
inline ::std::string* Interaction::mutable_processing_callback() {
  
  // @@protoc_insertion_point(field_mutable:ubii.interactions.Interaction.processing_callback)
  return processing_callback_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Interaction::release_processing_callback() {
  // @@protoc_insertion_point(field_release:ubii.interactions.Interaction.processing_callback)
  
  return processing_callback_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Interaction::set_allocated_processing_callback(::std::string* processing_callback) {
  if (processing_callback != NULL) {
    
  } else {
    
  }
  processing_callback_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), processing_callback);
  // @@protoc_insertion_point(field_set_allocated:ubii.interactions.Interaction.processing_callback)
}

// repeated .ubii.interactions.IOFormat input_formats = 4;
inline int Interaction::input_formats_size() const {
  return input_formats_.size();
}
inline ::ubii::interactions::IOFormat* Interaction::mutable_input_formats(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.interactions.Interaction.input_formats)
  return input_formats_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >*
Interaction::mutable_input_formats() {
  // @@protoc_insertion_point(field_mutable_list:ubii.interactions.Interaction.input_formats)
  return &input_formats_;
}
inline const ::ubii::interactions::IOFormat& Interaction::input_formats(int index) const {
  // @@protoc_insertion_point(field_get:ubii.interactions.Interaction.input_formats)
  return input_formats_.Get(index);
}
inline ::ubii::interactions::IOFormat* Interaction::add_input_formats() {
  // @@protoc_insertion_point(field_add:ubii.interactions.Interaction.input_formats)
  return input_formats_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >&
Interaction::input_formats() const {
  // @@protoc_insertion_point(field_list:ubii.interactions.Interaction.input_formats)
  return input_formats_;
}

// repeated .ubii.interactions.IOFormat output_formats = 5;
inline int Interaction::output_formats_size() const {
  return output_formats_.size();
}
inline ::ubii::interactions::IOFormat* Interaction::mutable_output_formats(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.interactions.Interaction.output_formats)
  return output_formats_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >*
Interaction::mutable_output_formats() {
  // @@protoc_insertion_point(field_mutable_list:ubii.interactions.Interaction.output_formats)
  return &output_formats_;
}
inline const ::ubii::interactions::IOFormat& Interaction::output_formats(int index) const {
  // @@protoc_insertion_point(field_get:ubii.interactions.Interaction.output_formats)
  return output_formats_.Get(index);
}
inline ::ubii::interactions::IOFormat* Interaction::add_output_formats() {
  // @@protoc_insertion_point(field_add:ubii.interactions.Interaction.output_formats)
  return output_formats_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::IOFormat >&
Interaction::output_formats() const {
  // @@protoc_insertion_point(field_list:ubii.interactions.Interaction.output_formats)
  return output_formats_;
}

// -------------------------------------------------------------------

// InteractionList

// repeated .ubii.interactions.Interaction elements = 1;
inline int InteractionList::elements_size() const {
  return elements_.size();
}
inline void InteractionList::clear_elements() {
  elements_.Clear();
}
inline ::ubii::interactions::Interaction* InteractionList::mutable_elements(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.interactions.InteractionList.elements)
  return elements_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >*
InteractionList::mutable_elements() {
  // @@protoc_insertion_point(field_mutable_list:ubii.interactions.InteractionList.elements)
  return &elements_;
}
inline const ::ubii::interactions::Interaction& InteractionList::elements(int index) const {
  // @@protoc_insertion_point(field_get:ubii.interactions.InteractionList.elements)
  return elements_.Get(index);
}
inline ::ubii::interactions::Interaction* InteractionList::add_elements() {
  // @@protoc_insertion_point(field_add:ubii.interactions.InteractionList.elements)
  return elements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::interactions::Interaction >&
InteractionList::elements() const {
  // @@protoc_insertion_point(field_list:ubii.interactions.InteractionList.elements)
  return elements_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace interactions
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2finteractions_2finteraction_2eproto