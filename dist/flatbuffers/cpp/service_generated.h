// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SERVICE_UBII_SERVICES_H_
#define FLATBUFFERS_GENERATED_SERVICE_UBII_SERVICES_H_

#include "flatbuffers/flatbuffers.h"

namespace ubii {
namespace services {

struct Service;
struct ServiceT;

struct ServiceT : public flatbuffers::NativeTable {
  typedef Service TableType;
  std::string id;
  std::string name;
  std::vector<std::string> tags;
  std::string description;
  std::string topic;
  std::string request_message_format;
  std::string response_message_format;
  ServiceT() {
  }
};

struct Service FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ServiceT NativeTableType;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_TAGS = 8,
    VT_DESCRIPTION = 10,
    VT_TOPIC = 12,
    VT_REQUEST_MESSAGE_FORMAT = 14,
    VT_RESPONSE_MESSAGE_FORMAT = 16
  };
  const flatbuffers::String *id() const {
    return GetPointer<const flatbuffers::String *>(VT_ID);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *tags() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_TAGS);
  }
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  const flatbuffers::String *topic() const {
    return GetPointer<const flatbuffers::String *>(VT_TOPIC);
  }
  const flatbuffers::String *request_message_format() const {
    return GetPointer<const flatbuffers::String *>(VT_REQUEST_MESSAGE_FORMAT);
  }
  const flatbuffers::String *response_message_format() const {
    return GetPointer<const flatbuffers::String *>(VT_RESPONSE_MESSAGE_FORMAT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ID) &&
           verifier.VerifyString(id()) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_TAGS) &&
           verifier.VerifyVector(tags()) &&
           verifier.VerifyVectorOfStrings(tags()) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           VerifyOffset(verifier, VT_TOPIC) &&
           verifier.VerifyString(topic()) &&
           VerifyOffset(verifier, VT_REQUEST_MESSAGE_FORMAT) &&
           verifier.VerifyString(request_message_format()) &&
           VerifyOffset(verifier, VT_RESPONSE_MESSAGE_FORMAT) &&
           verifier.VerifyString(response_message_format()) &&
           verifier.EndTable();
  }
  ServiceT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ServiceT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Service> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ServiceT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ServiceBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(flatbuffers::Offset<flatbuffers::String> id) {
    fbb_.AddOffset(Service::VT_ID, id);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Service::VT_NAME, name);
  }
  void add_tags(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> tags) {
    fbb_.AddOffset(Service::VT_TAGS, tags);
  }
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(Service::VT_DESCRIPTION, description);
  }
  void add_topic(flatbuffers::Offset<flatbuffers::String> topic) {
    fbb_.AddOffset(Service::VT_TOPIC, topic);
  }
  void add_request_message_format(flatbuffers::Offset<flatbuffers::String> request_message_format) {
    fbb_.AddOffset(Service::VT_REQUEST_MESSAGE_FORMAT, request_message_format);
  }
  void add_response_message_format(flatbuffers::Offset<flatbuffers::String> response_message_format) {
    fbb_.AddOffset(Service::VT_RESPONSE_MESSAGE_FORMAT, response_message_format);
  }
  explicit ServiceBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ServiceBuilder &operator=(const ServiceBuilder &);
  flatbuffers::Offset<Service> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Service>(end);
    return o;
  }
};

inline flatbuffers::Offset<Service> CreateService(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> tags = 0,
    flatbuffers::Offset<flatbuffers::String> description = 0,
    flatbuffers::Offset<flatbuffers::String> topic = 0,
    flatbuffers::Offset<flatbuffers::String> request_message_format = 0,
    flatbuffers::Offset<flatbuffers::String> response_message_format = 0) {
  ServiceBuilder builder_(_fbb);
  builder_.add_response_message_format(response_message_format);
  builder_.add_request_message_format(request_message_format);
  builder_.add_topic(topic);
  builder_.add_description(description);
  builder_.add_tags(tags);
  builder_.add_name(name);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<Service> CreateServiceDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *id = nullptr,
    const char *name = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *tags = nullptr,
    const char *description = nullptr,
    const char *topic = nullptr,
    const char *request_message_format = nullptr,
    const char *response_message_format = nullptr) {
  auto id__ = id ? _fbb.CreateString(id) : 0;
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto tags__ = tags ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*tags) : 0;
  auto description__ = description ? _fbb.CreateString(description) : 0;
  auto topic__ = topic ? _fbb.CreateString(topic) : 0;
  auto request_message_format__ = request_message_format ? _fbb.CreateString(request_message_format) : 0;
  auto response_message_format__ = response_message_format ? _fbb.CreateString(response_message_format) : 0;
  return ubii::services::CreateService(
      _fbb,
      id__,
      name__,
      tags__,
      description__,
      topic__,
      request_message_format__,
      response_message_format__);
}

flatbuffers::Offset<Service> CreateService(flatbuffers::FlatBufferBuilder &_fbb, const ServiceT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ServiceT *Service::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new ServiceT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Service::UnPackTo(ServiceT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = id(); if (_e) _o->id = _e->str(); };
  { auto _e = name(); if (_e) _o->name = _e->str(); };
  { auto _e = tags(); if (_e) { _o->tags.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tags[_i] = _e->Get(_i)->str(); } } };
  { auto _e = description(); if (_e) _o->description = _e->str(); };
  { auto _e = topic(); if (_e) _o->topic = _e->str(); };
  { auto _e = request_message_format(); if (_e) _o->request_message_format = _e->str(); };
  { auto _e = response_message_format(); if (_e) _o->response_message_format = _e->str(); };
}

inline flatbuffers::Offset<Service> Service::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ServiceT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateService(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Service> CreateService(flatbuffers::FlatBufferBuilder &_fbb, const ServiceT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ServiceT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _id = _o->id.empty() ? 0 : _fbb.CreateString(_o->id);
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _tags = _o->tags.size() ? _fbb.CreateVectorOfStrings(_o->tags) : 0;
  auto _description = _o->description.empty() ? 0 : _fbb.CreateString(_o->description);
  auto _topic = _o->topic.empty() ? 0 : _fbb.CreateString(_o->topic);
  auto _request_message_format = _o->request_message_format.empty() ? 0 : _fbb.CreateString(_o->request_message_format);
  auto _response_message_format = _o->response_message_format.empty() ? 0 : _fbb.CreateString(_o->response_message_format);
  return ubii::services::CreateService(
      _fbb,
      _id,
      _name,
      _tags,
      _description,
      _topic,
      _request_message_format,
      _response_message_format);
}

inline const ubii::services::Service *GetService(const void *buf) {
  return flatbuffers::GetRoot<ubii::services::Service>(buf);
}

inline const ubii::services::Service *GetSizePrefixedService(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::services::Service>(buf);
}

inline bool VerifyServiceBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::services::Service>(nullptr);
}

inline bool VerifySizePrefixedServiceBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::services::Service>(nullptr);
}

inline void FinishServiceBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::services::Service> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedServiceBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::services::Service> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<ServiceT> UnPackService(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ServiceT>(GetService(buf)->UnPack(res));
}

}  // namespace services
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_SERVICE_UBII_SERVICES_H_
