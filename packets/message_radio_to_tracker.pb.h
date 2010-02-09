// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_radio_to_tracker.proto

#ifndef PROTOBUF_message_5fradio_5fto_5ftracker_2eproto__INCLUDED
#define PROTOBUF_message_5fradio_5fto_5ftracker_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_message_5fradio_5fto_5ftracker_2eproto();
void protobuf_AssignDesc_message_5fradio_5fto_5ftracker_2eproto();
void protobuf_ShutdownFile_message_5fradio_5fto_5ftracker_2eproto();

class RadioToTracker;

// ===================================================================

class RadioToTracker : public ::google::protobuf::Message {
 public:
  RadioToTracker();
  virtual ~RadioToTracker();
  
  RadioToTracker(const RadioToTracker& from);
  
  inline RadioToTracker& operator=(const RadioToTracker& from) {
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
  static const RadioToTracker& default_instance();
  
  void Swap(RadioToTracker* other);
  
  // implements Message ----------------------------------------------
  
  RadioToTracker* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RadioToTracker& from);
  void MergeFrom(const RadioToTracker& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required float nada = 1;
  inline bool has_nada() const;
  inline void clear_nada();
  static const int kNadaFieldNumber = 1;
  inline float nada() const;
  inline void set_nada(float value);
  
  // @@protoc_insertion_point(class_scope:RadioToTracker)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  float nada_;
  friend void  protobuf_AddDesc_message_5fradio_5fto_5ftracker_2eproto();
  friend void protobuf_AssignDesc_message_5fradio_5fto_5ftracker_2eproto();
  friend void protobuf_ShutdownFile_message_5fradio_5fto_5ftracker_2eproto();
  
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
  static RadioToTracker* default_instance_;
};
// ===================================================================


// ===================================================================

// RadioToTracker

// required float nada = 1;
inline bool RadioToTracker::has_nada() const {
  return _has_bit(0);
}
inline void RadioToTracker::clear_nada() {
  nada_ = 0;
  _clear_bit(0);
}
inline float RadioToTracker::nada() const {
  return nada_;
}
inline void RadioToTracker::set_nada(float value) {
  _set_bit(0);
  nada_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fradio_5fto_5ftracker_2eproto__INCLUDED
