// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pigrequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pigrequest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Pig {

namespace {

const ::google::protobuf::Descriptor* PigRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PigRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_pigrequest_2eproto() {
  protobuf_AddDesc_pigrequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pigrequest.proto");
  GOOGLE_CHECK(file != NULL);
  PigRequest_descriptor_ = file->message_type(0);
  static const int PigRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PigRequest, action_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PigRequest, body_),
  };
  PigRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PigRequest_descriptor_,
      PigRequest::default_instance_,
      PigRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PigRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PigRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PigRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pigrequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PigRequest_descriptor_, &PigRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pigrequest_2eproto() {
  delete PigRequest::default_instance_;
  delete PigRequest_reflection_;
}

void protobuf_AddDesc_pigrequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020pigrequest.proto\022\003Pig\"*\n\nPigRequest\022\016\n"
    "\006action\030\001 \002(\t\022\014\n\004body\030\002 \002(\t", 67);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pigrequest.proto", &protobuf_RegisterTypes);
  PigRequest::default_instance_ = new PigRequest();
  PigRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pigrequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pigrequest_2eproto {
  StaticDescriptorInitializer_pigrequest_2eproto() {
    protobuf_AddDesc_pigrequest_2eproto();
  }
} static_descriptor_initializer_pigrequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PigRequest::kActionFieldNumber;
const int PigRequest::kBodyFieldNumber;
#endif  // !_MSC_VER

PigRequest::PigRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Pig.PigRequest)
}

void PigRequest::InitAsDefaultInstance() {
}

PigRequest::PigRequest(const PigRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Pig.PigRequest)
}

void PigRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  action_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  body_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PigRequest::~PigRequest() {
  // @@protoc_insertion_point(destructor:Pig.PigRequest)
  SharedDtor();
}

void PigRequest::SharedDtor() {
  if (action_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete action_;
  }
  if (body_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete body_;
  }
  if (this != default_instance_) {
  }
}

void PigRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PigRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PigRequest_descriptor_;
}

const PigRequest& PigRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pigrequest_2eproto();
  return *default_instance_;
}

PigRequest* PigRequest::default_instance_ = NULL;

PigRequest* PigRequest::New() const {
  return new PigRequest;
}

void PigRequest::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_action()) {
      if (action_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        action_->clear();
      }
    }
    if (has_body()) {
      if (body_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        body_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PigRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Pig.PigRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string action = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_action()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->action().data(), this->action().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "action");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_body;
        break;
      }

      // required string body = 2;
      case 2: {
        if (tag == 18) {
         parse_body:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_body()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->body().data(), this->body().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "body");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Pig.PigRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Pig.PigRequest)
  return false;
#undef DO_
}

void PigRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Pig.PigRequest)
  // required string action = 1;
  if (has_action()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->action().data(), this->action().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "action");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->action(), output);
  }

  // required string body = 2;
  if (has_body()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->body().data(), this->body().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "body");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->body(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Pig.PigRequest)
}

::google::protobuf::uint8* PigRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Pig.PigRequest)
  // required string action = 1;
  if (has_action()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->action().data(), this->action().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "action");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->action(), target);
  }

  // required string body = 2;
  if (has_body()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->body().data(), this->body().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "body");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->body(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Pig.PigRequest)
  return target;
}

int PigRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string action = 1;
    if (has_action()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->action());
    }

    // required string body = 2;
    if (has_body()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->body());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PigRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PigRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PigRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PigRequest::MergeFrom(const PigRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_action()) {
      set_action(from.action());
    }
    if (from.has_body()) {
      set_body(from.body());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PigRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PigRequest::CopyFrom(const PigRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PigRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PigRequest::Swap(PigRequest* other) {
  if (other != this) {
    std::swap(action_, other->action_);
    std::swap(body_, other->body_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PigRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PigRequest_descriptor_;
  metadata.reflection = PigRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Pig

// @@protoc_insertion_point(global_scope)
