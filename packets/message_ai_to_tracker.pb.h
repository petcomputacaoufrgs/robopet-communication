// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_message_5fai_5fto_5ftracker_2eproto__INCLUDED
#define PROTOBUF_message_5fai_5fto_5ftracker_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2000003
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2000003 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>

// Internal implementation detail -- do not call these.
void  protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto();
void protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto_AssignGlobalDescriptors(
    ::google::protobuf::FileDescriptor* file);

class AIToTracker;

// ===================================================================

class AIToTracker : public ::google::protobuf::Message {
 public:
  AIToTracker();
  virtual ~AIToTracker();
  
  AIToTracker(const AIToTracker& from);
  
  inline AIToTracker& operator=(const AIToTracker& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const AIToTracker& default_instance();
  void Swap(AIToTracker* other);
  
  // implements Message ----------------------------------------------
  
  AIToTracker* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required float nada = 1;
  inline bool has_nada() const;
  inline void clear_nada();
  inline float nada() const;
  inline void set_nada(float value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  float nada_;
  friend void protobuf_BuildDesc_message_5fai_5fto_5ftracker_2eproto_AssignGlobalDescriptors(
      const ::google::protobuf::FileDescriptor* file);
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static AIToTracker* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// AIToTracker

// required float nada = 1;
inline bool AIToTracker::has_nada() const {
  return _has_bit(0);
}
inline void AIToTracker::clear_nada() {
  nada_ = 0;
  _clear_bit(0);
}
inline float AIToTracker::nada() const {
  return nada_;
}
inline void AIToTracker::set_nada(float value) {
  _set_bit(0);
  nada_ = value;
}

#endif  // PROTOBUF_message_5fai_5fto_5ftracker_2eproto__INCLUDED
