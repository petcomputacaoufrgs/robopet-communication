// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message_ai_to_radio.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* RadioRobot_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RadioRobot_reflection_ = NULL;
const ::google::protobuf::Descriptor* AIToRadio_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AIToRadio_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_5fai_5fto_5fradio_2eproto() {
  protobuf_AddDesc_message_5fai_5fto_5fradio_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message_ai_to_radio.proto");
  GOOGLE_CHECK(file != NULL);
  RadioRobot_descriptor_ = file->message_type(0);
  static const int RadioRobot_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadioRobot, displacement_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadioRobot, displacement_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadioRobot, displacement_theta_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadioRobot, drible_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadioRobot, kick_),
  };
  RadioRobot_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RadioRobot_descriptor_,
      RadioRobot::default_instance_,
      RadioRobot_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadioRobot, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RadioRobot, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RadioRobot));
  AIToRadio_descriptor_ = file->message_type(1);
  static const int AIToRadio_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIToRadio, robots_),
  };
  AIToRadio_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AIToRadio_descriptor_,
      AIToRadio::default_instance_,
      AIToRadio_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIToRadio, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIToRadio, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AIToRadio));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_5fai_5fto_5fradio_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RadioRobot_descriptor_, &RadioRobot::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AIToRadio_descriptor_, &AIToRadio::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_5fai_5fto_5fradio_2eproto() {
  delete RadioRobot::default_instance_;
  delete RadioRobot_reflection_;
  delete AIToRadio::default_instance_;
  delete AIToRadio_reflection_;
}

void protobuf_AddDesc_message_5fai_5fto_5fradio_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031message_ai_to_radio.proto\"v\n\nRadioRobo"
    "t\022\026\n\016displacement_x\030\001 \002(\r\022\026\n\016displacemen"
    "t_y\030\002 \002(\r\022\032\n\022displacement_theta\030\003 \002(\r\022\016\n"
    "\006drible\030\004 \002(\r\022\014\n\004kick\030\005 \002(\r\"(\n\tAIToRadio"
    "\022\033\n\006robots\030\001 \003(\0132\013.RadioRobot", 189);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message_ai_to_radio.proto", &protobuf_RegisterTypes);
  RadioRobot::default_instance_ = new RadioRobot();
  AIToRadio::default_instance_ = new AIToRadio();
  RadioRobot::default_instance_->InitAsDefaultInstance();
  AIToRadio::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_5fai_5fto_5fradio_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_5fai_5fto_5fradio_2eproto {
  StaticDescriptorInitializer_message_5fai_5fto_5fradio_2eproto() {
    protobuf_AddDesc_message_5fai_5fto_5fradio_2eproto();
  }
} static_descriptor_initializer_message_5fai_5fto_5fradio_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RadioRobot::kDisplacementXFieldNumber;
const int RadioRobot::kDisplacementYFieldNumber;
const int RadioRobot::kDisplacementThetaFieldNumber;
const int RadioRobot::kDribleFieldNumber;
const int RadioRobot::kKickFieldNumber;
#endif  // !_MSC_VER

RadioRobot::RadioRobot()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RadioRobot::InitAsDefaultInstance() {
}

RadioRobot::RadioRobot(const RadioRobot& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RadioRobot::SharedCtor() {
  _cached_size_ = 0;
  displacement_x_ = 0u;
  displacement_y_ = 0u;
  displacement_theta_ = 0u;
  drible_ = 0u;
  kick_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RadioRobot::~RadioRobot() {
  SharedDtor();
}

void RadioRobot::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RadioRobot::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RadioRobot::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RadioRobot_descriptor_;
}

const RadioRobot& RadioRobot::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fai_5fto_5fradio_2eproto();  return *default_instance_;
}

RadioRobot* RadioRobot::default_instance_ = NULL;

RadioRobot* RadioRobot::New() const {
  return new RadioRobot;
}

void RadioRobot::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    displacement_x_ = 0u;
    displacement_y_ = 0u;
    displacement_theta_ = 0u;
    drible_ = 0u;
    kick_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RadioRobot::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 displacement_x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &displacement_x_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_displacement_y;
        break;
      }
      
      // required uint32 displacement_y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_displacement_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &displacement_y_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_displacement_theta;
        break;
      }
      
      // required uint32 displacement_theta = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_displacement_theta:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &displacement_theta_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_drible;
        break;
      }
      
      // required uint32 drible = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_drible:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &drible_)));
          _set_bit(3);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_kick;
        break;
      }
      
      // required uint32 kick = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_kick:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &kick_)));
          _set_bit(4);
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

void RadioRobot::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 displacement_x = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->displacement_x(), output);
  }
  
  // required uint32 displacement_y = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->displacement_y(), output);
  }
  
  // required uint32 displacement_theta = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->displacement_theta(), output);
  }
  
  // required uint32 drible = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->drible(), output);
  }
  
  // required uint32 kick = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->kick(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RadioRobot::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 displacement_x = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->displacement_x(), target);
  }
  
  // required uint32 displacement_y = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->displacement_y(), target);
  }
  
  // required uint32 displacement_theta = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->displacement_theta(), target);
  }
  
  // required uint32 drible = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->drible(), target);
  }
  
  // required uint32 kick = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->kick(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RadioRobot::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 displacement_x = 1;
    if (has_displacement_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->displacement_x());
    }
    
    // required uint32 displacement_y = 2;
    if (has_displacement_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->displacement_y());
    }
    
    // required uint32 displacement_theta = 3;
    if (has_displacement_theta()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->displacement_theta());
    }
    
    // required uint32 drible = 4;
    if (has_drible()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->drible());
    }
    
    // required uint32 kick = 5;
    if (has_kick()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->kick());
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

void RadioRobot::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RadioRobot* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RadioRobot*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RadioRobot::MergeFrom(const RadioRobot& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_displacement_x(from.displacement_x());
    }
    if (from._has_bit(1)) {
      set_displacement_y(from.displacement_y());
    }
    if (from._has_bit(2)) {
      set_displacement_theta(from.displacement_theta());
    }
    if (from._has_bit(3)) {
      set_drible(from.drible());
    }
    if (from._has_bit(4)) {
      set_kick(from.kick());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RadioRobot::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RadioRobot::CopyFrom(const RadioRobot& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RadioRobot::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  
  return true;
}

void RadioRobot::Swap(RadioRobot* other) {
  if (other != this) {
    std::swap(displacement_x_, other->displacement_x_);
    std::swap(displacement_y_, other->displacement_y_);
    std::swap(displacement_theta_, other->displacement_theta_);
    std::swap(drible_, other->drible_);
    std::swap(kick_, other->kick_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RadioRobot::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RadioRobot_descriptor_;
  metadata.reflection = RadioRobot_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int AIToRadio::kRobotsFieldNumber;
#endif  // !_MSC_VER

AIToRadio::AIToRadio()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AIToRadio::InitAsDefaultInstance() {
}

AIToRadio::AIToRadio(const AIToRadio& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AIToRadio::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AIToRadio::~AIToRadio() {
  SharedDtor();
}

void AIToRadio::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AIToRadio::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AIToRadio::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AIToRadio_descriptor_;
}

const AIToRadio& AIToRadio::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fai_5fto_5fradio_2eproto();  return *default_instance_;
}

AIToRadio* AIToRadio::default_instance_ = NULL;

AIToRadio* AIToRadio::New() const {
  return new AIToRadio;
}

void AIToRadio::Clear() {
  robots_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AIToRadio::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .RadioRobot robots = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_robots:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_robots()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_robots;
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

void AIToRadio::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .RadioRobot robots = 1;
  for (int i = 0; i < this->robots_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->robots(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AIToRadio::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .RadioRobot robots = 1;
  for (int i = 0; i < this->robots_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->robots(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AIToRadio::ByteSize() const {
  int total_size = 0;
  
  // repeated .RadioRobot robots = 1;
  total_size += 1 * this->robots_size();
  for (int i = 0; i < this->robots_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->robots(i));
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

void AIToRadio::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AIToRadio* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AIToRadio*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AIToRadio::MergeFrom(const AIToRadio& from) {
  GOOGLE_CHECK_NE(&from, this);
  robots_.MergeFrom(from.robots_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AIToRadio::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AIToRadio::CopyFrom(const AIToRadio& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AIToRadio::IsInitialized() const {
  
  for (int i = 0; i < robots_size(); i++) {
    if (!this->robots(i).IsInitialized()) return false;
  }
  return true;
}

void AIToRadio::Swap(AIToRadio* other) {
  if (other != this) {
    robots_.Swap(&other->robots_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AIToRadio::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AIToRadio_descriptor_;
  metadata.reflection = AIToRadio_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
