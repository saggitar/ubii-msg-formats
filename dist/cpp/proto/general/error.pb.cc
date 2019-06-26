// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/general/error.proto

#include "proto/general/error.pb.h"

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

namespace ubii {
namespace general {
class ErrorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Error>
      _instance;
} _Error_default_instance_;
}  // namespace general
}  // namespace ubii
namespace protobuf_proto_2fgeneral_2ferror_2eproto {
static void InitDefaultsError() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::general::_Error_default_instance_;
    new (ptr) ::ubii::general::Error();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::general::Error::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Error =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsError}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Error.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::general::Error, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::general::Error, title_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::general::Error, message_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::general::Error, stack_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::general::Error)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::general::_Error_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/general/error.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\031proto/general/error.proto\022\014ubii.genera"
      "l\"6\n\005Error\022\r\n\005title\030\001 \001(\t\022\017\n\007message\030\002 \001"
      "(\t\022\r\n\005stack\030\003 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 105);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/general/error.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_proto_2fgeneral_2ferror_2eproto
namespace ubii {
namespace general {

// ===================================================================

void Error::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Error::kTitleFieldNumber;
const int Error::kMessageFieldNumber;
const int Error::kStackFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Error::Error()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2fgeneral_2ferror_2eproto::scc_info_Error.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.general.Error)
}
Error::Error(const Error& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.title().size() > 0) {
    title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.message().size() > 0) {
    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  stack_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.stack().size() > 0) {
    stack_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stack_);
  }
  // @@protoc_insertion_point(copy_constructor:ubii.general.Error)
}

void Error::SharedCtor() {
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stack_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Error::~Error() {
  // @@protoc_insertion_point(destructor:ubii.general.Error)
  SharedDtor();
}

void Error::SharedDtor() {
  title_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stack_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Error::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Error::descriptor() {
  ::protobuf_proto_2fgeneral_2ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fgeneral_2ferror_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Error& Error::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2fgeneral_2ferror_2eproto::scc_info_Error.base);
  return *internal_default_instance();
}


void Error::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.general.Error)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stack_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Error::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.general.Error)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string title = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->title().data(), static_cast<int>(this->title().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.general.Error.title"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string message = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), static_cast<int>(this->message().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.general.Error.message"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string stack = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stack()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->stack().data(), static_cast<int>(this->stack().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.general.Error.stack"));
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
  // @@protoc_insertion_point(parse_success:ubii.general.Error)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.general.Error)
  return false;
#undef DO_
}

void Error::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.general.Error)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string title = 1;
  if (this->title().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->title().data(), static_cast<int>(this->title().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.general.Error.title");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->title(), output);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.general.Error.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->message(), output);
  }

  // string stack = 3;
  if (this->stack().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stack().data(), static_cast<int>(this->stack().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.general.Error.stack");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->stack(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.general.Error)
}

::google::protobuf::uint8* Error::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.general.Error)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string title = 1;
  if (this->title().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->title().data(), static_cast<int>(this->title().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.general.Error.title");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->title(), target);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.general.Error.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->message(), target);
  }

  // string stack = 3;
  if (this->stack().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stack().data(), static_cast<int>(this->stack().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.general.Error.stack");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->stack(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.general.Error)
  return target;
}

size_t Error::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.general.Error)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string title = 1;
  if (this->title().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->title());
  }

  // string message = 2;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  // string stack = 3;
  if (this->stack().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->stack());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Error::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.general.Error)
  GOOGLE_DCHECK_NE(&from, this);
  const Error* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Error>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.general.Error)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.general.Error)
    MergeFrom(*source);
  }
}

void Error::MergeFrom(const Error& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.general.Error)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.title().size() > 0) {

    title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  if (from.stack().size() > 0) {

    stack_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stack_);
  }
}

void Error::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.general.Error)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Error::CopyFrom(const Error& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.general.Error)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Error::IsInitialized() const {
  return true;
}

void Error::Swap(Error* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Error::InternalSwap(Error* other) {
  using std::swap;
  title_.Swap(&other->title_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  message_.Swap(&other->message_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  stack_.Swap(&other->stack_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Error::GetMetadata() const {
  protobuf_proto_2fgeneral_2ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fgeneral_2ferror_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace general
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::general::Error* Arena::CreateMaybeMessage< ::ubii::general::Error >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::general::Error >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)