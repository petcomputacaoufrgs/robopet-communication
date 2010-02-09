// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_ai_to_sim.proto

#ifndef PROTOBUF_message_5fai_5fto_5fsim_2eproto__INCLUDED
#define PROTOBUF_message_5fai_5fto_5fsim_2eproto__INCLUDED

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
void  protobuf_AddDesc_message_5fai_5fto_5fsim_2eproto();
void protobuf_AssignDesc_message_5fai_5fto_5fsim_2eproto();
void protobuf_ShutdownFile_message_5fai_5fto_5fsim_2eproto();

class KickAI;
class RobotAI;
class AIToSim;

// ===================================================================

class KickAI : public ::google::protobuf::Message {
 public:
  KickAI();
  virtual ~KickAI();
  
  KickAI(const KickAI& from);
  
  inline KickAI& operator=(const KickAI& from) {
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
  static const KickAI& default_instance();
  
  void Swap(KickAI* other);
  
  // implements Message ----------------------------------------------
  
  KickAI* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const KickAI& from);
  void MergeFrom(const KickAI& from);
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
  
  // required uint32 intensity = 1;
  inline bool has_intensity() const;
  inline void clear_intensity();
  static const int kIntensityFieldNumber = 1;
  inline ::google::protobuf::uint32 intensity() const;
  inline void set_intensity(::google::protobuf::uint32 value);
  
  // required bool is_chip_kick = 2;
  inline bool has_is_chip_kick() const;
  inline void clear_is_chip_kick();
  static const int kIsChipKickFieldNumber = 2;
  inline bool is_chip_kick() const;
  inline void set_is_chip_kick(bool value);
  
  // @@protoc_insertion_point(class_scope:KickAI)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 intensity_;
  bool is_chip_kick_;
  friend void  protobuf_AddDesc_message_5fai_5fto_5fsim_2eproto();
  friend void protobuf_AssignDesc_message_5fai_5fto_5fsim_2eproto();
  friend void protobuf_ShutdownFile_message_5fai_5fto_5fsim_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static KickAI* default_instance_;
};
// -------------------------------------------------------------------

class RobotAI : public ::google::protobuf::Message {
 public:
  RobotAI();
  virtual ~RobotAI();
  
  RobotAI(const RobotAI& from);
  
  inline RobotAI& operator=(const RobotAI& from) {
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
  static const RobotAI& default_instance();
  
  void Swap(RobotAI* other);
  
  // implements Message ----------------------------------------------
  
  RobotAI* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RobotAI& from);
  void MergeFrom(const RobotAI& from);
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
  
  // required double r = 3;
  inline bool has_r() const;
  inline void clear_r();
  static const int kRFieldNumber = 3;
  inline double r() const;
  inline void set_r(double value);
  
  // required double theta = 4;
  inline bool has_theta() const;
  inline void clear_theta();
  static const int kThetaFieldNumber = 4;
  inline double theta() const;
  inline void set_theta(double value);
  
  // required double omega = 5;
  inline bool has_omega() const;
  inline void clear_omega();
  static const int kOmegaFieldNumber = 5;
  inline double omega() const;
  inline void set_omega(double value);
  
  // required double movement_intensity = 6;
  inline bool has_movement_intensity() const;
  inline void clear_movement_intensity();
  static const int kMovementIntensityFieldNumber = 6;
  inline double movement_intensity() const;
  inline void set_movement_intensity(double value);
  
  // required .KickAI kick = 7;
  inline bool has_kick() const;
  inline void clear_kick();
  static const int kKickFieldNumber = 7;
  inline const ::KickAI& kick() const;
  inline ::KickAI* mutable_kick();
  
  // optional uint32 future_x = 8;
  inline bool has_future_x() const;
  inline void clear_future_x();
  static const int kFutureXFieldNumber = 8;
  inline ::google::protobuf::uint32 future_x() const;
  inline void set_future_x(::google::protobuf::uint32 value);
  
  // optional uint32 future_y = 9;
  inline bool has_future_y() const;
  inline void clear_future_y();
  static const int kFutureYFieldNumber = 9;
  inline ::google::protobuf::uint32 future_y() const;
  inline void set_future_y(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:RobotAI)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  double r_;
  double theta_;
  double omega_;
  double movement_intensity_;
  ::KickAI* kick_;
  ::google::protobuf::uint32 future_x_;
  ::google::protobuf::uint32 future_y_;
  friend void  protobuf_AddDesc_message_5fai_5fto_5fsim_2eproto();
  friend void protobuf_AssignDesc_message_5fai_5fto_5fsim_2eproto();
  friend void protobuf_ShutdownFile_message_5fai_5fto_5fsim_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
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
  static RobotAI* default_instance_;
};
// -------------------------------------------------------------------

class AIToSim : public ::google::protobuf::Message {
 public:
  AIToSim();
  virtual ~AIToSim();
  
  AIToSim(const AIToSim& from);
  
  inline AIToSim& operator=(const AIToSim& from) {
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
  static const AIToSim& default_instance();
  
  void Swap(AIToSim* other);
  
  // implements Message ----------------------------------------------
  
  AIToSim* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AIToSim& from);
  void MergeFrom(const AIToSim& from);
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
  
  // repeated .RobotAI robots = 1;
  inline int robots_size() const;
  inline void clear_robots();
  static const int kRobotsFieldNumber = 1;
  inline const ::RobotAI& robots(int index) const;
  inline ::RobotAI* mutable_robots(int index);
  inline ::RobotAI* add_robots();
  inline const ::google::protobuf::RepeatedPtrField< ::RobotAI >&
      robots() const;
  inline ::google::protobuf::RepeatedPtrField< ::RobotAI >*
      mutable_robots();
  
  // required uint32 team = 2;
  inline bool has_team() const;
  inline void clear_team();
  static const int kTeamFieldNumber = 2;
  inline ::google::protobuf::uint32 team() const;
  inline void set_team(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:AIToSim)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::RobotAI > robots_;
  ::google::protobuf::uint32 team_;
  friend void  protobuf_AddDesc_message_5fai_5fto_5fsim_2eproto();
  friend void protobuf_AssignDesc_message_5fai_5fto_5fsim_2eproto();
  friend void protobuf_ShutdownFile_message_5fai_5fto_5fsim_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static AIToSim* default_instance_;
};
// ===================================================================


// ===================================================================

// KickAI

// required uint32 intensity = 1;
inline bool KickAI::has_intensity() const {
  return _has_bit(0);
}
inline void KickAI::clear_intensity() {
  intensity_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 KickAI::intensity() const {
  return intensity_;
}
inline void KickAI::set_intensity(::google::protobuf::uint32 value) {
  _set_bit(0);
  intensity_ = value;
}

// required bool is_chip_kick = 2;
inline bool KickAI::has_is_chip_kick() const {
  return _has_bit(1);
}
inline void KickAI::clear_is_chip_kick() {
  is_chip_kick_ = false;
  _clear_bit(1);
}
inline bool KickAI::is_chip_kick() const {
  return is_chip_kick_;
}
inline void KickAI::set_is_chip_kick(bool value) {
  _set_bit(1);
  is_chip_kick_ = value;
}

// -------------------------------------------------------------------

// RobotAI

// required double r = 3;
inline bool RobotAI::has_r() const {
  return _has_bit(0);
}
inline void RobotAI::clear_r() {
  r_ = 0;
  _clear_bit(0);
}
inline double RobotAI::r() const {
  return r_;
}
inline void RobotAI::set_r(double value) {
  _set_bit(0);
  r_ = value;
}

// required double theta = 4;
inline bool RobotAI::has_theta() const {
  return _has_bit(1);
}
inline void RobotAI::clear_theta() {
  theta_ = 0;
  _clear_bit(1);
}
inline double RobotAI::theta() const {
  return theta_;
}
inline void RobotAI::set_theta(double value) {
  _set_bit(1);
  theta_ = value;
}

// required double omega = 5;
inline bool RobotAI::has_omega() const {
  return _has_bit(2);
}
inline void RobotAI::clear_omega() {
  omega_ = 0;
  _clear_bit(2);
}
inline double RobotAI::omega() const {
  return omega_;
}
inline void RobotAI::set_omega(double value) {
  _set_bit(2);
  omega_ = value;
}

// required double movement_intensity = 6;
inline bool RobotAI::has_movement_intensity() const {
  return _has_bit(3);
}
inline void RobotAI::clear_movement_intensity() {
  movement_intensity_ = 0;
  _clear_bit(3);
}
inline double RobotAI::movement_intensity() const {
  return movement_intensity_;
}
inline void RobotAI::set_movement_intensity(double value) {
  _set_bit(3);
  movement_intensity_ = value;
}

// required .KickAI kick = 7;
inline bool RobotAI::has_kick() const {
  return _has_bit(4);
}
inline void RobotAI::clear_kick() {
  if (kick_ != NULL) kick_->::KickAI::Clear();
  _clear_bit(4);
}
inline const ::KickAI& RobotAI::kick() const {
  return kick_ != NULL ? *kick_ : *default_instance_->kick_;
}
inline ::KickAI* RobotAI::mutable_kick() {
  _set_bit(4);
  if (kick_ == NULL) kick_ = new ::KickAI;
  return kick_;
}

// optional uint32 future_x = 8;
inline bool RobotAI::has_future_x() const {
  return _has_bit(5);
}
inline void RobotAI::clear_future_x() {
  future_x_ = 0u;
  _clear_bit(5);
}
inline ::google::protobuf::uint32 RobotAI::future_x() const {
  return future_x_;
}
inline void RobotAI::set_future_x(::google::protobuf::uint32 value) {
  _set_bit(5);
  future_x_ = value;
}

// optional uint32 future_y = 9;
inline bool RobotAI::has_future_y() const {
  return _has_bit(6);
}
inline void RobotAI::clear_future_y() {
  future_y_ = 0u;
  _clear_bit(6);
}
inline ::google::protobuf::uint32 RobotAI::future_y() const {
  return future_y_;
}
inline void RobotAI::set_future_y(::google::protobuf::uint32 value) {
  _set_bit(6);
  future_y_ = value;
}

// -------------------------------------------------------------------

// AIToSim

// repeated .RobotAI robots = 1;
inline int AIToSim::robots_size() const {
  return robots_.size();
}
inline void AIToSim::clear_robots() {
  robots_.Clear();
}
inline const ::RobotAI& AIToSim::robots(int index) const {
  return robots_.Get(index);
}
inline ::RobotAI* AIToSim::mutable_robots(int index) {
  return robots_.Mutable(index);
}
inline ::RobotAI* AIToSim::add_robots() {
  return robots_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::RobotAI >&
AIToSim::robots() const {
  return robots_;
}
inline ::google::protobuf::RepeatedPtrField< ::RobotAI >*
AIToSim::mutable_robots() {
  return &robots_;
}

// required uint32 team = 2;
inline bool AIToSim::has_team() const {
  return _has_bit(1);
}
inline void AIToSim::clear_team() {
  team_ = 0u;
  _clear_bit(1);
}
inline ::google::protobuf::uint32 AIToSim::team() const {
  return team_;
}
inline void AIToSim::set_team(::google::protobuf::uint32 value) {
  _set_bit(1);
  team_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fai_5fto_5fsim_2eproto__INCLUDED
