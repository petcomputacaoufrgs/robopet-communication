// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "message_ai_to_tracker.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace {

const ::google::protobuf::Descriptor* AIToTracker_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AIToTracker_reflection_ = NULL;

}  // namespace


void protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto_AssignGlobalDescriptors(const ::google::protobuf::FileDescriptor* file) {
  AIToTracker_descriptor_ = file->message_type(0);
  AIToTracker::default_instance_ = new AIToTracker();
  static const int AIToTracker_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIToTracker, nada_),
  };
  AIToTracker_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AIToTracker_descriptor_,
      AIToTracker::default_instance_,
      AIToTracker_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIToTracker, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIToTracker, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      sizeof(AIToTracker));
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AIToTracker_descriptor_, AIToTracker::default_instance_);
  AIToTracker::default_instance_->InitAsDefaultInstance();
}

void protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  ::google::protobuf::DescriptorPool* pool =
    ::google::protobuf::DescriptorPool::internal_generated_pool();

  pool->InternalBuildGeneratedFile(
    "\n\033message_ai_to_tracker.proto\"\033\n\013AIToTra"
    "cker\022\014\n\004nada\030\001 \002(\002", 58,
  &protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto_AssignGlobalDescriptors);
}

// Force BuildDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_5fai_5fto_5ftracker_2eproto {
  StaticDescriptorInitializer_message_5fai_5fto_5ftracker_2eproto() {
    protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto();
  }
} static_descriptor_initializer_message_5fai_5fto_5ftracker_2eproto_;


// ===================================================================


AIToTracker::AIToTracker()
  : ::google::protobuf::Message(),
    _cached_size_(0),
    nada_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

void AIToTracker::InitAsDefaultInstance() {}

AIToTracker::AIToTracker(const AIToTracker& from)
  : ::google::protobuf::Message(),
    _cached_size_(0),
    nada_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

AIToTracker::~AIToTracker() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* AIToTracker::descriptor() {
  if (AIToTracker_descriptor_ == NULL) protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto();
  return AIToTracker_descriptor_;
}

const AIToTracker& AIToTracker::default_instance() {
  if (default_instance_ == NULL) protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto();
  return *default_instance_;
}

AIToTracker* AIToTracker::default_instance_ = NULL;

AIToTracker* AIToTracker::New() const {
  return new AIToTracker;
}

const ::google::protobuf::Descriptor* AIToTracker::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* AIToTracker::GetReflection() const {
  if (AIToTracker_reflection_ == NULL) protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto();
  return AIToTracker_reflection_;
}
