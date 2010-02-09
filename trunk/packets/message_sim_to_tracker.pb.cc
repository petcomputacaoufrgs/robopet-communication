// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message_sim_to_tracker.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* BallSim_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BallSim_reflection_ = NULL;
const ::google::protobuf::Descriptor* RobotSim_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RobotSim_reflection_ = NULL;
const ::google::protobuf::Descriptor* SimToTracker_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SimToTracker_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_5fsim_5fto_5ftracker_2eproto() {
  protobuf_AddDesc_message_5fsim_5fto_5ftracker_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message_sim_to_tracker.proto");
  GOOGLE_CHECK(file != NULL);
  BallSim_descriptor_ = file->message_type(0);
  static const int BallSim_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BallSim, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BallSim, y_),
  };
  BallSim_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BallSim_descriptor_,
      BallSim::default_instance_,
      BallSim_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BallSim, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BallSim, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BallSim));
  RobotSim_descriptor_ = file->message_type(1);
  static const int RobotSim_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotSim, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotSim, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotSim, theta_),
  };
  RobotSim_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RobotSim_descriptor_,
      RobotSim::default_instance_,
      RobotSim_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotSim, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotSim, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RobotSim));
  SimToTracker_descriptor_ = file->message_type(2);
  static const int SimToTracker_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimToTracker, ball_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimToTracker, robots_blue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimToTracker, robots_yellow_),
  };
  SimToTracker_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SimToTracker_descriptor_,
      SimToTracker::default_instance_,
      SimToTracker_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimToTracker, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimToTracker, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SimToTracker));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_5fsim_5fto_5ftracker_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BallSim_descriptor_, &BallSim::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RobotSim_descriptor_, &RobotSim::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SimToTracker_descriptor_, &SimToTracker::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_5fsim_5fto_5ftracker_2eproto() {
  delete BallSim::default_instance_;
  delete BallSim_reflection_;
  delete RobotSim::default_instance_;
  delete RobotSim_reflection_;
  delete SimToTracker::default_instance_;
  delete SimToTracker_reflection_;
}

void protobuf_AddDesc_message_5fsim_5fto_5ftracker_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034message_sim_to_tracker.proto\"\037\n\007BallSi"
    "m\022\t\n\001x\030\001 \002(\001\022\t\n\001y\030\002 \002(\001\"/\n\010RobotSim\022\t\n\001x"
    "\030\001 \002(\r\022\t\n\001y\030\002 \002(\r\022\r\n\005theta\030\003 \002(\001\"h\n\014SimT"
    "oTracker\022\026\n\004ball\030\001 \002(\0132\010.BallSim\022\036\n\013robo"
    "ts_blue\030\002 \003(\0132\t.RobotSim\022 \n\rrobots_yello"
    "w\030\003 \003(\0132\t.RobotSim", 218);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message_sim_to_tracker.proto", &protobuf_RegisterTypes);
  BallSim::default_instance_ = new BallSim();
  RobotSim::default_instance_ = new RobotSim();
  SimToTracker::default_instance_ = new SimToTracker();
  BallSim::default_instance_->InitAsDefaultInstance();
  RobotSim::default_instance_->InitAsDefaultInstance();
  SimToTracker::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_5fsim_5fto_5ftracker_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_5fsim_5fto_5ftracker_2eproto {
  StaticDescriptorInitializer_message_5fsim_5fto_5ftracker_2eproto() {
    protobuf_AddDesc_message_5fsim_5fto_5ftracker_2eproto();
  }
} static_descriptor_initializer_message_5fsim_5fto_5ftracker_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int BallSim::kXFieldNumber;
const int BallSim::kYFieldNumber;
#endif  // !_MSC_VER

BallSim::BallSim()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BallSim::InitAsDefaultInstance() {
}

BallSim::BallSim(const BallSim& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BallSim::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BallSim::~BallSim() {
  SharedDtor();
}

void BallSim::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BallSim::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BallSim::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BallSim_descriptor_;
}

const BallSim& BallSim::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fsim_5fto_5ftracker_2eproto();  return *default_instance_;
}

BallSim* BallSim::default_instance_ = NULL;

BallSim* BallSim::New() const {
  return new BallSim;
}

void BallSim::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0;
    y_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BallSim::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_y;
        break;
      }
      
      // required double y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
          _set_bit(1);
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

void BallSim::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required double x = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }
  
  // required double y = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BallSim::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required double x = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }
  
  // required double y = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BallSim::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double x = 1;
    if (has_x()) {
      total_size += 1 + 8;
    }
    
    // required double y = 2;
    if (has_y()) {
      total_size += 1 + 8;
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

void BallSim::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BallSim* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BallSim*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BallSim::MergeFrom(const BallSim& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_x(from.x());
    }
    if (from._has_bit(1)) {
      set_y(from.y());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BallSim::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BallSim::CopyFrom(const BallSim& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BallSim::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void BallSim::Swap(BallSim* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BallSim::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BallSim_descriptor_;
  metadata.reflection = BallSim_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RobotSim::kXFieldNumber;
const int RobotSim::kYFieldNumber;
const int RobotSim::kThetaFieldNumber;
#endif  // !_MSC_VER

RobotSim::RobotSim()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RobotSim::InitAsDefaultInstance() {
}

RobotSim::RobotSim(const RobotSim& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RobotSim::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0u;
  y_ = 0u;
  theta_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RobotSim::~RobotSim() {
  SharedDtor();
}

void RobotSim::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RobotSim::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RobotSim::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RobotSim_descriptor_;
}

const RobotSim& RobotSim::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fsim_5fto_5ftracker_2eproto();  return *default_instance_;
}

RobotSim* RobotSim::default_instance_ = NULL;

RobotSim* RobotSim::New() const {
  return new RobotSim;
}

void RobotSim::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0u;
    y_ = 0u;
    theta_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RobotSim::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &x_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_y;
        break;
      }
      
      // required uint32 y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &y_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_theta;
        break;
      }
      
      // required double theta = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_theta:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &theta_)));
          _set_bit(2);
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

void RobotSim::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 x = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->x(), output);
  }
  
  // required uint32 y = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->y(), output);
  }
  
  // required double theta = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->theta(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RobotSim::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 x = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->x(), target);
  }
  
  // required uint32 y = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->y(), target);
  }
  
  // required double theta = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->theta(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RobotSim::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 x = 1;
    if (has_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->x());
    }
    
    // required uint32 y = 2;
    if (has_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->y());
    }
    
    // required double theta = 3;
    if (has_theta()) {
      total_size += 1 + 8;
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

void RobotSim::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RobotSim* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RobotSim*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RobotSim::MergeFrom(const RobotSim& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_x(from.x());
    }
    if (from._has_bit(1)) {
      set_y(from.y());
    }
    if (from._has_bit(2)) {
      set_theta(from.theta());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RobotSim::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotSim::CopyFrom(const RobotSim& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotSim::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void RobotSim::Swap(RobotSim* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(theta_, other->theta_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RobotSim::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RobotSim_descriptor_;
  metadata.reflection = RobotSim_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int SimToTracker::kBallFieldNumber;
const int SimToTracker::kRobotsBlueFieldNumber;
const int SimToTracker::kRobotsYellowFieldNumber;
#endif  // !_MSC_VER

SimToTracker::SimToTracker()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SimToTracker::InitAsDefaultInstance() {
  ball_ = const_cast< ::BallSim*>(&::BallSim::default_instance());
}

SimToTracker::SimToTracker(const SimToTracker& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SimToTracker::SharedCtor() {
  _cached_size_ = 0;
  ball_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SimToTracker::~SimToTracker() {
  SharedDtor();
}

void SimToTracker::SharedDtor() {
  if (this != default_instance_) {
    delete ball_;
  }
}

void SimToTracker::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SimToTracker::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SimToTracker_descriptor_;
}

const SimToTracker& SimToTracker::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fsim_5fto_5ftracker_2eproto();  return *default_instance_;
}

SimToTracker* SimToTracker::default_instance_ = NULL;

SimToTracker* SimToTracker::New() const {
  return new SimToTracker;
}

void SimToTracker::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (ball_ != NULL) ball_->::BallSim::Clear();
    }
  }
  robots_blue_.Clear();
  robots_yellow_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SimToTracker::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .BallSim ball = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ball()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_robots_blue;
        break;
      }
      
      // repeated .RobotSim robots_blue = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_robots_blue:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_robots_blue()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_robots_blue;
        if (input->ExpectTag(26)) goto parse_robots_yellow;
        break;
      }
      
      // repeated .RobotSim robots_yellow = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_robots_yellow:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_robots_yellow()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_robots_yellow;
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

void SimToTracker::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .BallSim ball = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->ball(), output);
  }
  
  // repeated .RobotSim robots_blue = 2;
  for (int i = 0; i < this->robots_blue_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->robots_blue(i), output);
  }
  
  // repeated .RobotSim robots_yellow = 3;
  for (int i = 0; i < this->robots_yellow_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->robots_yellow(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SimToTracker::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .BallSim ball = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->ball(), target);
  }
  
  // repeated .RobotSim robots_blue = 2;
  for (int i = 0; i < this->robots_blue_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->robots_blue(i), target);
  }
  
  // repeated .RobotSim robots_yellow = 3;
  for (int i = 0; i < this->robots_yellow_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->robots_yellow(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SimToTracker::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .BallSim ball = 1;
    if (has_ball()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ball());
    }
    
  }
  // repeated .RobotSim robots_blue = 2;
  total_size += 1 * this->robots_blue_size();
  for (int i = 0; i < this->robots_blue_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->robots_blue(i));
  }
  
  // repeated .RobotSim robots_yellow = 3;
  total_size += 1 * this->robots_yellow_size();
  for (int i = 0; i < this->robots_yellow_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->robots_yellow(i));
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

void SimToTracker::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SimToTracker* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SimToTracker*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SimToTracker::MergeFrom(const SimToTracker& from) {
  GOOGLE_CHECK_NE(&from, this);
  robots_blue_.MergeFrom(from.robots_blue_);
  robots_yellow_.MergeFrom(from.robots_yellow_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      mutable_ball()->::BallSim::MergeFrom(from.ball());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SimToTracker::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SimToTracker::CopyFrom(const SimToTracker& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimToTracker::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  if (has_ball()) {
    if (!this->ball().IsInitialized()) return false;
  }
  for (int i = 0; i < robots_blue_size(); i++) {
    if (!this->robots_blue(i).IsInitialized()) return false;
  }
  for (int i = 0; i < robots_yellow_size(); i++) {
    if (!this->robots_yellow(i).IsInitialized()) return false;
  }
  return true;
}

void SimToTracker::Swap(SimToTracker* other) {
  if (other != this) {
    std::swap(ball_, other->ball_);
    robots_blue_.Swap(&other->robots_blue_);
    robots_yellow_.Swap(&other->robots_yellow_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SimToTracker::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SimToTracker_descriptor_;
  metadata.reflection = SimToTracker_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
