// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/servers/server.proto

#ifndef PROTOBUF_INCLUDED_proto_2fservers_2fserver_2eproto
#define PROTOBUF_INCLUDED_proto_2fservers_2fserver_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fservers_2fserver_2eproto 

namespace protobuf_proto_2fservers_2fserver_2eproto {
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
}  // namespace protobuf_proto_2fservers_2fserver_2eproto
namespace ubii {
namespace servers {
class Server;
class ServerDefaultTypeInternal;
extern ServerDefaultTypeInternal _Server_default_instance_;
}  // namespace servers
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::servers::Server* Arena::CreateMaybeMessage<::ubii::servers::Server>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace servers {

// ===================================================================

class Server : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.servers.Server) */ {
 public:
  Server();
  virtual ~Server();

  Server(const Server& from);

  inline Server& operator=(const Server& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Server(Server&& from) noexcept
    : Server() {
    *this = ::std::move(from);
  }

  inline Server& operator=(Server&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Server& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Server* internal_default_instance() {
    return reinterpret_cast<const Server*>(
               &_Server_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Server* other);
  friend void swap(Server& a, Server& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Server* New() const final {
    return CreateMaybeMessage<Server>(NULL);
  }

  Server* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Server>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Server& from);
  void MergeFrom(const Server& from);
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
  void InternalSwap(Server* other);
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

  // string ip_ethernet = 3;
  void clear_ip_ethernet();
  static const int kIpEthernetFieldNumber = 3;
  const ::std::string& ip_ethernet() const;
  void set_ip_ethernet(const ::std::string& value);
  #if LANG_CXX11
  void set_ip_ethernet(::std::string&& value);
  #endif
  void set_ip_ethernet(const char* value);
  void set_ip_ethernet(const char* value, size_t size);
  ::std::string* mutable_ip_ethernet();
  ::std::string* release_ip_ethernet();
  void set_allocated_ip_ethernet(::std::string* ip_ethernet);

  // string ip_wlan = 4;
  void clear_ip_wlan();
  static const int kIpWlanFieldNumber = 4;
  const ::std::string& ip_wlan() const;
  void set_ip_wlan(const ::std::string& value);
  #if LANG_CXX11
  void set_ip_wlan(::std::string&& value);
  #endif
  void set_ip_wlan(const char* value);
  void set_ip_wlan(const char* value, size_t size);
  ::std::string* mutable_ip_wlan();
  ::std::string* release_ip_wlan();
  void set_allocated_ip_wlan(::std::string* ip_wlan);

  // string port_service_zmq = 5;
  void clear_port_service_zmq();
  static const int kPortServiceZmqFieldNumber = 5;
  const ::std::string& port_service_zmq() const;
  void set_port_service_zmq(const ::std::string& value);
  #if LANG_CXX11
  void set_port_service_zmq(::std::string&& value);
  #endif
  void set_port_service_zmq(const char* value);
  void set_port_service_zmq(const char* value, size_t size);
  ::std::string* mutable_port_service_zmq();
  ::std::string* release_port_service_zmq();
  void set_allocated_port_service_zmq(::std::string* port_service_zmq);

  // string port_service_rest = 6;
  void clear_port_service_rest();
  static const int kPortServiceRestFieldNumber = 6;
  const ::std::string& port_service_rest() const;
  void set_port_service_rest(const ::std::string& value);
  #if LANG_CXX11
  void set_port_service_rest(::std::string&& value);
  #endif
  void set_port_service_rest(const char* value);
  void set_port_service_rest(const char* value, size_t size);
  ::std::string* mutable_port_service_rest();
  ::std::string* release_port_service_rest();
  void set_allocated_port_service_rest(::std::string* port_service_rest);

  // string port_topic_data_zmq = 7;
  void clear_port_topic_data_zmq();
  static const int kPortTopicDataZmqFieldNumber = 7;
  const ::std::string& port_topic_data_zmq() const;
  void set_port_topic_data_zmq(const ::std::string& value);
  #if LANG_CXX11
  void set_port_topic_data_zmq(::std::string&& value);
  #endif
  void set_port_topic_data_zmq(const char* value);
  void set_port_topic_data_zmq(const char* value, size_t size);
  ::std::string* mutable_port_topic_data_zmq();
  ::std::string* release_port_topic_data_zmq();
  void set_allocated_port_topic_data_zmq(::std::string* port_topic_data_zmq);

  // string port_topic_data_ws = 8;
  void clear_port_topic_data_ws();
  static const int kPortTopicDataWsFieldNumber = 8;
  const ::std::string& port_topic_data_ws() const;
  void set_port_topic_data_ws(const ::std::string& value);
  #if LANG_CXX11
  void set_port_topic_data_ws(::std::string&& value);
  #endif
  void set_port_topic_data_ws(const char* value);
  void set_port_topic_data_ws(const char* value, size_t size);
  ::std::string* mutable_port_topic_data_ws();
  ::std::string* release_port_topic_data_ws();
  void set_allocated_port_topic_data_ws(::std::string* port_topic_data_ws);

  // @@protoc_insertion_point(class_scope:ubii.servers.Server)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr ip_ethernet_;
  ::google::protobuf::internal::ArenaStringPtr ip_wlan_;
  ::google::protobuf::internal::ArenaStringPtr port_service_zmq_;
  ::google::protobuf::internal::ArenaStringPtr port_service_rest_;
  ::google::protobuf::internal::ArenaStringPtr port_topic_data_zmq_;
  ::google::protobuf::internal::ArenaStringPtr port_topic_data_ws_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fservers_2fserver_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Server

// string id = 1;
inline void Server::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::id() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.id)
  return id_.GetNoArena();
}
inline void Server::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.id)
}
#if LANG_CXX11
inline void Server::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.id)
}
#endif
inline void Server::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.id)
}
inline void Server::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.id)
}
inline ::std::string* Server::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_id() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.id)
}

// string name = 2;
inline void Server::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::name() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.name)
  return name_.GetNoArena();
}
inline void Server::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.name)
}
#if LANG_CXX11
inline void Server::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.name)
}
#endif
inline void Server::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.name)
}
inline void Server::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.name)
}
inline ::std::string* Server::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_name() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.name)
}

// string ip_ethernet = 3;
inline void Server::clear_ip_ethernet() {
  ip_ethernet_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::ip_ethernet() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.ip_ethernet)
  return ip_ethernet_.GetNoArena();
}
inline void Server::set_ip_ethernet(const ::std::string& value) {
  
  ip_ethernet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.ip_ethernet)
}
#if LANG_CXX11
inline void Server::set_ip_ethernet(::std::string&& value) {
  
  ip_ethernet_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.ip_ethernet)
}
#endif
inline void Server::set_ip_ethernet(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ip_ethernet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.ip_ethernet)
}
inline void Server::set_ip_ethernet(const char* value, size_t size) {
  
  ip_ethernet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.ip_ethernet)
}
inline ::std::string* Server::mutable_ip_ethernet() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.ip_ethernet)
  return ip_ethernet_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_ip_ethernet() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.ip_ethernet)
  
  return ip_ethernet_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_ip_ethernet(::std::string* ip_ethernet) {
  if (ip_ethernet != NULL) {
    
  } else {
    
  }
  ip_ethernet_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip_ethernet);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.ip_ethernet)
}

// string ip_wlan = 4;
inline void Server::clear_ip_wlan() {
  ip_wlan_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::ip_wlan() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.ip_wlan)
  return ip_wlan_.GetNoArena();
}
inline void Server::set_ip_wlan(const ::std::string& value) {
  
  ip_wlan_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.ip_wlan)
}
#if LANG_CXX11
inline void Server::set_ip_wlan(::std::string&& value) {
  
  ip_wlan_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.ip_wlan)
}
#endif
inline void Server::set_ip_wlan(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ip_wlan_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.ip_wlan)
}
inline void Server::set_ip_wlan(const char* value, size_t size) {
  
  ip_wlan_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.ip_wlan)
}
inline ::std::string* Server::mutable_ip_wlan() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.ip_wlan)
  return ip_wlan_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_ip_wlan() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.ip_wlan)
  
  return ip_wlan_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_ip_wlan(::std::string* ip_wlan) {
  if (ip_wlan != NULL) {
    
  } else {
    
  }
  ip_wlan_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip_wlan);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.ip_wlan)
}

// string port_service_zmq = 5;
inline void Server::clear_port_service_zmq() {
  port_service_zmq_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::port_service_zmq() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.port_service_zmq)
  return port_service_zmq_.GetNoArena();
}
inline void Server::set_port_service_zmq(const ::std::string& value) {
  
  port_service_zmq_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.port_service_zmq)
}
#if LANG_CXX11
inline void Server::set_port_service_zmq(::std::string&& value) {
  
  port_service_zmq_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.port_service_zmq)
}
#endif
inline void Server::set_port_service_zmq(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  port_service_zmq_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.port_service_zmq)
}
inline void Server::set_port_service_zmq(const char* value, size_t size) {
  
  port_service_zmq_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.port_service_zmq)
}
inline ::std::string* Server::mutable_port_service_zmq() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.port_service_zmq)
  return port_service_zmq_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_port_service_zmq() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.port_service_zmq)
  
  return port_service_zmq_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_port_service_zmq(::std::string* port_service_zmq) {
  if (port_service_zmq != NULL) {
    
  } else {
    
  }
  port_service_zmq_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), port_service_zmq);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.port_service_zmq)
}

// string port_service_rest = 6;
inline void Server::clear_port_service_rest() {
  port_service_rest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::port_service_rest() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.port_service_rest)
  return port_service_rest_.GetNoArena();
}
inline void Server::set_port_service_rest(const ::std::string& value) {
  
  port_service_rest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.port_service_rest)
}
#if LANG_CXX11
inline void Server::set_port_service_rest(::std::string&& value) {
  
  port_service_rest_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.port_service_rest)
}
#endif
inline void Server::set_port_service_rest(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  port_service_rest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.port_service_rest)
}
inline void Server::set_port_service_rest(const char* value, size_t size) {
  
  port_service_rest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.port_service_rest)
}
inline ::std::string* Server::mutable_port_service_rest() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.port_service_rest)
  return port_service_rest_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_port_service_rest() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.port_service_rest)
  
  return port_service_rest_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_port_service_rest(::std::string* port_service_rest) {
  if (port_service_rest != NULL) {
    
  } else {
    
  }
  port_service_rest_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), port_service_rest);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.port_service_rest)
}

// string port_topic_data_zmq = 7;
inline void Server::clear_port_topic_data_zmq() {
  port_topic_data_zmq_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::port_topic_data_zmq() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.port_topic_data_zmq)
  return port_topic_data_zmq_.GetNoArena();
}
inline void Server::set_port_topic_data_zmq(const ::std::string& value) {
  
  port_topic_data_zmq_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.port_topic_data_zmq)
}
#if LANG_CXX11
inline void Server::set_port_topic_data_zmq(::std::string&& value) {
  
  port_topic_data_zmq_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.port_topic_data_zmq)
}
#endif
inline void Server::set_port_topic_data_zmq(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  port_topic_data_zmq_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.port_topic_data_zmq)
}
inline void Server::set_port_topic_data_zmq(const char* value, size_t size) {
  
  port_topic_data_zmq_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.port_topic_data_zmq)
}
inline ::std::string* Server::mutable_port_topic_data_zmq() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.port_topic_data_zmq)
  return port_topic_data_zmq_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_port_topic_data_zmq() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.port_topic_data_zmq)
  
  return port_topic_data_zmq_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_port_topic_data_zmq(::std::string* port_topic_data_zmq) {
  if (port_topic_data_zmq != NULL) {
    
  } else {
    
  }
  port_topic_data_zmq_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), port_topic_data_zmq);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.port_topic_data_zmq)
}

// string port_topic_data_ws = 8;
inline void Server::clear_port_topic_data_ws() {
  port_topic_data_ws_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Server::port_topic_data_ws() const {
  // @@protoc_insertion_point(field_get:ubii.servers.Server.port_topic_data_ws)
  return port_topic_data_ws_.GetNoArena();
}
inline void Server::set_port_topic_data_ws(const ::std::string& value) {
  
  port_topic_data_ws_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.servers.Server.port_topic_data_ws)
}
#if LANG_CXX11
inline void Server::set_port_topic_data_ws(::std::string&& value) {
  
  port_topic_data_ws_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.servers.Server.port_topic_data_ws)
}
#endif
inline void Server::set_port_topic_data_ws(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  port_topic_data_ws_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.servers.Server.port_topic_data_ws)
}
inline void Server::set_port_topic_data_ws(const char* value, size_t size) {
  
  port_topic_data_ws_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.servers.Server.port_topic_data_ws)
}
inline ::std::string* Server::mutable_port_topic_data_ws() {
  
  // @@protoc_insertion_point(field_mutable:ubii.servers.Server.port_topic_data_ws)
  return port_topic_data_ws_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Server::release_port_topic_data_ws() {
  // @@protoc_insertion_point(field_release:ubii.servers.Server.port_topic_data_ws)
  
  return port_topic_data_ws_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Server::set_allocated_port_topic_data_ws(::std::string* port_topic_data_ws) {
  if (port_topic_data_ws != NULL) {
    
  } else {
    
  }
  port_topic_data_ws_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), port_topic_data_ws);
  // @@protoc_insertion_point(field_set_allocated:ubii.servers.Server.port_topic_data_ws)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace servers
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fservers_2fserver_2eproto