// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_ai_to_gui.proto

#ifndef PROTOBUF_message_5fai_5fto_5fgui_2eproto__INCLUDED
#define PROTOBUF_message_5fai_5fto_5fgui_2eproto__INCLUDED

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
void  protobuf_AddDesc_message_5fai_5fto_5fgui_2eproto();
void protobuf_AssignDesc_message_5fai_5fto_5fgui_2eproto();
void protobuf_ShutdownFile_message_5fai_5fto_5fgui_2eproto();

class GUIRobot;
class GUIBall;
class AIToGUI;

// ===================================================================

class GUIRobot : public ::google::protobuf::Message {
 public:
  GUIRobot();
  virtual ~GUIRobot();
  
  GUIRobot(const GUIRobot& from);
  
  inline GUIRobot& operator=(const GUIRobot& from) {
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
  static const GUIRobot& default_instance();
  
  void Swap(GUIRobot* other);
  
  // implements Message ----------------------------------------------
  
  GUIRobot* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GUIRobot& from);
  void MergeFrom(const GUIRobot& from);
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
  
  // required int32 current_x = 1;
  inline bool has_current_x() const;
  inline void clear_current_x();
  static const int kCurrentXFieldNumber = 1;
  inline ::google::protobuf::int32 current_x() const;
  inline void set_current_x(::google::protobuf::int32 value);
  
  // required int32 current_y = 2;
  inline bool has_current_y() const;
  inline void clear_current_y();
  static const int kCurrentYFieldNumber = 2;
  inline ::google::protobuf::int32 current_y() const;
  inline void set_current_y(::google::protobuf::int32 value);
  
  // required float current_theta = 3;
  inline bool has_current_theta() const;
  inline void clear_current_theta();
  static const int kCurrentThetaFieldNumber = 3;
  inline float current_theta() const;
  inline void set_current_theta(float value);
  
  // required int32 future_x = 4;
  inline bool has_future_x() const;
  inline void clear_future_x();
  static const int kFutureXFieldNumber = 4;
  inline ::google::protobuf::int32 future_x() const;
  inline void set_future_x(::google::protobuf::int32 value);
  
  // required int32 future_y = 5;
  inline bool has_future_y() const;
  inline void clear_future_y();
  static const int kFutureYFieldNumber = 5;
  inline ::google::protobuf::int32 future_y() const;
  inline void set_future_y(::google::protobuf::int32 value);
  
  // required float future_theta = 6;
  inline bool has_future_theta() const;
  inline void clear_future_theta();
  static const int kFutureThetaFieldNumber = 6;
  inline float future_theta() const;
  inline void set_future_theta(float value);
  
  // required int32 past_x = 7;
  inline bool has_past_x() const;
  inline void clear_past_x();
  static const int kPastXFieldNumber = 7;
  inline ::google::protobuf::int32 past_x() const;
  inline void set_past_x(::google::protobuf::int32 value);
  
  // required int32 past_y = 8;
  inline bool has_past_y() const;
  inline void clear_past_y();
  static const int kPastYFieldNumber = 8;
  inline ::google::protobuf::int32 past_y() const;
  inline void set_past_y(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:GUIRobot)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 current_x_;
  ::google::protobuf::int32 current_y_;
  float current_theta_;
  ::google::protobuf::int32 future_x_;
  ::google::protobuf::int32 future_y_;
  float future_theta_;
  ::google::protobuf::int32 past_x_;
  ::google::protobuf::int32 past_y_;
  friend void  protobuf_AddDesc_message_5fai_5fto_5fgui_2eproto();
  friend void protobuf_AssignDesc_message_5fai_5fto_5fgui_2eproto();
  friend void protobuf_ShutdownFile_message_5fai_5fto_5fgui_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
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
  static GUIRobot* default_instance_;
};
// -------------------------------------------------------------------

class GUIBall : public ::google::protobuf::Message {
 public:
  GUIBall();
  virtual ~GUIBall();
  
  GUIBall(const GUIBall& from);
  
  inline GUIBall& operator=(const GUIBall& from) {
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
  static const GUIBall& default_instance();
  
  void Swap(GUIBall* other);
  
  // implements Message ----------------------------------------------
  
  GUIBall* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GUIBall& from);
  void MergeFrom(const GUIBall& from);
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
  
  // required int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // required int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // required int32 past_x = 3;
  inline bool has_past_x() const;
  inline void clear_past_x();
  static const int kPastXFieldNumber = 3;
  inline ::google::protobuf::int32 past_x() const;
  inline void set_past_x(::google::protobuf::int32 value);
  
  // required int32 past_y = 4;
  inline bool has_past_y() const;
  inline void clear_past_y();
  static const int kPastYFieldNumber = 4;
  inline ::google::protobuf::int32 past_y() const;
  inline void set_past_y(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:GUIBall)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 past_x_;
  ::google::protobuf::int32 past_y_;
  friend void  protobuf_AddDesc_message_5fai_5fto_5fgui_2eproto();
  friend void protobuf_AssignDesc_message_5fai_5fto_5fgui_2eproto();
  friend void protobuf_ShutdownFile_message_5fai_5fto_5fgui_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
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
  static GUIBall* default_instance_;
};
// -------------------------------------------------------------------

class AIToGUI : public ::google::protobuf::Message {
 public:
  AIToGUI();
  virtual ~AIToGUI();
  
  AIToGUI(const AIToGUI& from);
  
  inline AIToGUI& operator=(const AIToGUI& from) {
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
  static const AIToGUI& default_instance();
  
  void Swap(AIToGUI* other);
  
  // implements Message ----------------------------------------------
  
  AIToGUI* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AIToGUI& from);
  void MergeFrom(const AIToGUI& from);
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
  
  // repeated .GUIRobot blue_robots = 1;
  inline int blue_robots_size() const;
  inline void clear_blue_robots();
  static const int kBlueRobotsFieldNumber = 1;
  inline const ::GUIRobot& blue_robots(int index) const;
  inline ::GUIRobot* mutable_blue_robots(int index);
  inline ::GUIRobot* add_blue_robots();
  inline const ::google::protobuf::RepeatedPtrField< ::GUIRobot >&
      blue_robots() const;
  inline ::google::protobuf::RepeatedPtrField< ::GUIRobot >*
      mutable_blue_robots();
  
  // repeated .GUIRobot yellow_robots = 2;
  inline int yellow_robots_size() const;
  inline void clear_yellow_robots();
  static const int kYellowRobotsFieldNumber = 2;
  inline const ::GUIRobot& yellow_robots(int index) const;
  inline ::GUIRobot* mutable_yellow_robots(int index);
  inline ::GUIRobot* add_yellow_robots();
  inline const ::google::protobuf::RepeatedPtrField< ::GUIRobot >&
      yellow_robots() const;
  inline ::google::protobuf::RepeatedPtrField< ::GUIRobot >*
      mutable_yellow_robots();
  
  // required .GUIBall ball = 3;
  inline bool has_ball() const;
  inline void clear_ball();
  static const int kBallFieldNumber = 3;
  inline const ::GUIBall& ball() const;
  inline ::GUIBall* mutable_ball();
  
  // @@protoc_insertion_point(class_scope:AIToGUI)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::GUIRobot > blue_robots_;
  ::google::protobuf::RepeatedPtrField< ::GUIRobot > yellow_robots_;
  ::GUIBall* ball_;
  friend void  protobuf_AddDesc_message_5fai_5fto_5fgui_2eproto();
  friend void protobuf_AssignDesc_message_5fai_5fto_5fgui_2eproto();
  friend void protobuf_ShutdownFile_message_5fai_5fto_5fgui_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
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
  static AIToGUI* default_instance_;
};
// ===================================================================


// ===================================================================

// GUIRobot

// required int32 current_x = 1;
inline bool GUIRobot::has_current_x() const {
  return _has_bit(0);
}
inline void GUIRobot::clear_current_x() {
  current_x_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 GUIRobot::current_x() const {
  return current_x_;
}
inline void GUIRobot::set_current_x(::google::protobuf::int32 value) {
  _set_bit(0);
  current_x_ = value;
}

// required int32 current_y = 2;
inline bool GUIRobot::has_current_y() const {
  return _has_bit(1);
}
inline void GUIRobot::clear_current_y() {
  current_y_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 GUIRobot::current_y() const {
  return current_y_;
}
inline void GUIRobot::set_current_y(::google::protobuf::int32 value) {
  _set_bit(1);
  current_y_ = value;
}

// required float current_theta = 3;
inline bool GUIRobot::has_current_theta() const {
  return _has_bit(2);
}
inline void GUIRobot::clear_current_theta() {
  current_theta_ = 0;
  _clear_bit(2);
}
inline float GUIRobot::current_theta() const {
  return current_theta_;
}
inline void GUIRobot::set_current_theta(float value) {
  _set_bit(2);
  current_theta_ = value;
}

// required int32 future_x = 4;
inline bool GUIRobot::has_future_x() const {
  return _has_bit(3);
}
inline void GUIRobot::clear_future_x() {
  future_x_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 GUIRobot::future_x() const {
  return future_x_;
}
inline void GUIRobot::set_future_x(::google::protobuf::int32 value) {
  _set_bit(3);
  future_x_ = value;
}

// required int32 future_y = 5;
inline bool GUIRobot::has_future_y() const {
  return _has_bit(4);
}
inline void GUIRobot::clear_future_y() {
  future_y_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 GUIRobot::future_y() const {
  return future_y_;
}
inline void GUIRobot::set_future_y(::google::protobuf::int32 value) {
  _set_bit(4);
  future_y_ = value;
}

// required float future_theta = 6;
inline bool GUIRobot::has_future_theta() const {
  return _has_bit(5);
}
inline void GUIRobot::clear_future_theta() {
  future_theta_ = 0;
  _clear_bit(5);
}
inline float GUIRobot::future_theta() const {
  return future_theta_;
}
inline void GUIRobot::set_future_theta(float value) {
  _set_bit(5);
  future_theta_ = value;
}

// required int32 past_x = 7;
inline bool GUIRobot::has_past_x() const {
  return _has_bit(6);
}
inline void GUIRobot::clear_past_x() {
  past_x_ = 0;
  _clear_bit(6);
}
inline ::google::protobuf::int32 GUIRobot::past_x() const {
  return past_x_;
}
inline void GUIRobot::set_past_x(::google::protobuf::int32 value) {
  _set_bit(6);
  past_x_ = value;
}

// required int32 past_y = 8;
inline bool GUIRobot::has_past_y() const {
  return _has_bit(7);
}
inline void GUIRobot::clear_past_y() {
  past_y_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 GUIRobot::past_y() const {
  return past_y_;
}
inline void GUIRobot::set_past_y(::google::protobuf::int32 value) {
  _set_bit(7);
  past_y_ = value;
}

// -------------------------------------------------------------------

// GUIBall

// required int32 x = 1;
inline bool GUIBall::has_x() const {
  return _has_bit(0);
}
inline void GUIBall::clear_x() {
  x_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 GUIBall::x() const {
  return x_;
}
inline void GUIBall::set_x(::google::protobuf::int32 value) {
  _set_bit(0);
  x_ = value;
}

// required int32 y = 2;
inline bool GUIBall::has_y() const {
  return _has_bit(1);
}
inline void GUIBall::clear_y() {
  y_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 GUIBall::y() const {
  return y_;
}
inline void GUIBall::set_y(::google::protobuf::int32 value) {
  _set_bit(1);
  y_ = value;
}

// required int32 past_x = 3;
inline bool GUIBall::has_past_x() const {
  return _has_bit(2);
}
inline void GUIBall::clear_past_x() {
  past_x_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 GUIBall::past_x() const {
  return past_x_;
}
inline void GUIBall::set_past_x(::google::protobuf::int32 value) {
  _set_bit(2);
  past_x_ = value;
}

// required int32 past_y = 4;
inline bool GUIBall::has_past_y() const {
  return _has_bit(3);
}
inline void GUIBall::clear_past_y() {
  past_y_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 GUIBall::past_y() const {
  return past_y_;
}
inline void GUIBall::set_past_y(::google::protobuf::int32 value) {
  _set_bit(3);
  past_y_ = value;
}

// -------------------------------------------------------------------

// AIToGUI

// repeated .GUIRobot blue_robots = 1;
inline int AIToGUI::blue_robots_size() const {
  return blue_robots_.size();
}
inline void AIToGUI::clear_blue_robots() {
  blue_robots_.Clear();
}
inline const ::GUIRobot& AIToGUI::blue_robots(int index) const {
  return blue_robots_.Get(index);
}
inline ::GUIRobot* AIToGUI::mutable_blue_robots(int index) {
  return blue_robots_.Mutable(index);
}
inline ::GUIRobot* AIToGUI::add_blue_robots() {
  return blue_robots_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::GUIRobot >&
AIToGUI::blue_robots() const {
  return blue_robots_;
}
inline ::google::protobuf::RepeatedPtrField< ::GUIRobot >*
AIToGUI::mutable_blue_robots() {
  return &blue_robots_;
}

// repeated .GUIRobot yellow_robots = 2;
inline int AIToGUI::yellow_robots_size() const {
  return yellow_robots_.size();
}
inline void AIToGUI::clear_yellow_robots() {
  yellow_robots_.Clear();
}
inline const ::GUIRobot& AIToGUI::yellow_robots(int index) const {
  return yellow_robots_.Get(index);
}
inline ::GUIRobot* AIToGUI::mutable_yellow_robots(int index) {
  return yellow_robots_.Mutable(index);
}
inline ::GUIRobot* AIToGUI::add_yellow_robots() {
  return yellow_robots_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::GUIRobot >&
AIToGUI::yellow_robots() const {
  return yellow_robots_;
}
inline ::google::protobuf::RepeatedPtrField< ::GUIRobot >*
AIToGUI::mutable_yellow_robots() {
  return &yellow_robots_;
}

// required .GUIBall ball = 3;
inline bool AIToGUI::has_ball() const {
  return _has_bit(2);
}
inline void AIToGUI::clear_ball() {
  if (ball_ != NULL) ball_->::GUIBall::Clear();
  _clear_bit(2);
}
inline const ::GUIBall& AIToGUI::ball() const {
  return ball_ != NULL ? *ball_ : *default_instance_->ball_;
}
inline ::GUIBall* AIToGUI::mutable_ball() {
  _set_bit(2);
  if (ball_ == NULL) ball_ = new ::GUIBall;
  return ball_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fai_5fto_5fgui_2eproto__INCLUDED
