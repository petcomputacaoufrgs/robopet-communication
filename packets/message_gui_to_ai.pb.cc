// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message_gui_to_ai.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* GUIToAI_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GUIToAI_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_5fgui_5fto_5fai_2eproto() {
  protobuf_AddDesc_message_5fgui_5fto_5fai_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message_gui_to_ai.proto");
  GOOGLE_CHECK(file != NULL);
  GUIToAI_descriptor_ = file->message_type(0);
  static const int GUIToAI_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GUIToAI, nada_),
  };
  GUIToAI_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GUIToAI_descriptor_,
      GUIToAI::default_instance_,
      GUIToAI_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GUIToAI, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GUIToAI, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GUIToAI));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_5fgui_5fto_5fai_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GUIToAI_descriptor_, &GUIToAI::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_5fgui_5fto_5fai_2eproto() {
  delete GUIToAI::default_instance_;
  delete GUIToAI_reflection_;
}

void protobuf_AddDesc_message_5fgui_5fto_5fai_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027message_gui_to_ai.proto\"\027\n\007GUIToAI\022\014\n\004"
    "nada\030\001 \002(\005", 50);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message_gui_to_ai.proto", &protobuf_RegisterTypes);
  GUIToAI::default_instance_ = new GUIToAI();
  GUIToAI::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_5fgui_5fto_5fai_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_5fgui_5fto_5fai_2eproto {
  StaticDescriptorInitializer_message_5fgui_5fto_5fai_2eproto() {
    protobuf_AddDesc_message_5fgui_5fto_5fai_2eproto();
  }
} static_descriptor_initializer_message_5fgui_5fto_5fai_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int GUIToAI::kNadaFieldNumber;
#endif  // !_MSC_VER

GUIToAI::GUIToAI()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GUIToAI::InitAsDefaultInstance() {
}

GUIToAI::GUIToAI(const GUIToAI& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GUIToAI::SharedCtor() {
  _cached_size_ = 0;
  nada_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GUIToAI::~GUIToAI() {
  SharedDtor();
}

void GUIToAI::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GUIToAI::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GUIToAI::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GUIToAI_descriptor_;
}

const GUIToAI& GUIToAI::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fgui_5fto_5fai_2eproto();  return *default_instance_;
}

GUIToAI* GUIToAI::default_instance_ = NULL;

GUIToAI* GUIToAI::New() const {
  return new GUIToAI;
}

void GUIToAI::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    nada_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GUIToAI::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 nada = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nada_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void GUIToAI::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 nada = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->nada(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GUIToAI::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 nada = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->nada(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GUIToAI::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 nada = 1;
    if (has_nada()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->nada());
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

void GUIToAI::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GUIToAI* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GUIToAI*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GUIToAI::MergeFrom(const GUIToAI& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_nada(from.nada());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GUIToAI::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GUIToAI::CopyFrom(const GUIToAI& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GUIToAI::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void GUIToAI::Swap(GUIToAI* other) {
  if (other != this) {
    std::swap(nada_, other->nada_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GUIToAI::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GUIToAI_descriptor_;
  metadata.reflection = GUIToAI_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
