// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_messages_5frobocup_5fssl_5fwrapper_2eproto__INCLUDED
#define PROTOBUF_messages_5frobocup_5fssl_5fwrapper_2eproto__INCLUDED

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
#include "message_ai_to_gui.pb.h"
#include "message_ai_to_radio.pb.h"
#include "message_ai_to_sim.pb.h"
#include "message_gui_to_ai.pb.h"
#include "message_sim_to_tracker.pb.h"
#include "messages_robocup_ssl_detection.pb.h"
#include "messages_robocup_ssl_geometry.pb.h"
#include "messages_robocup_ssl_refbox_log.pb.h"
#include "message_tracker_to_ai.pb.h"
#include "message_ai_to_tracker.pb.h"
#include "message_radio_to_tracker.pb.h"

// Internal implementation detail -- do not call these.
void  protobuf_BuildDesc_messages_5frobocup_5fssl_5fwrapper_2eproto();
void protobuf_BuildDesc_messages_5frobocup_5fssl_5fwrapper_2eproto_AssignGlobalDescriptors(
    ::google::protobuf::FileDescriptor* file);

class SSL_WrapperPacket;

// ===================================================================

class SSL_WrapperPacket : public ::google::protobuf::Message {
 public:
  SSL_WrapperPacket();
  virtual ~SSL_WrapperPacket();
  
  SSL_WrapperPacket(const SSL_WrapperPacket& from);
  
  inline SSL_WrapperPacket& operator=(const SSL_WrapperPacket& from) {
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
  static const SSL_WrapperPacket& default_instance();
  void Swap(SSL_WrapperPacket* other);
  
  // implements Message ----------------------------------------------
  
  SSL_WrapperPacket* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional .SSL_DetectionFrame detection = 1;
  inline bool has_detection() const;
  inline void clear_detection();
  inline const ::SSL_DetectionFrame& detection() const;
  inline ::SSL_DetectionFrame* mutable_detection();
  
  // optional .SSL_GeometryData geometry = 2;
  inline bool has_geometry() const;
  inline void clear_geometry();
  inline const ::SSL_GeometryData& geometry() const;
  inline ::SSL_GeometryData* mutable_geometry();
  
  // optional .Refbox_Log refbox = 3;
  inline bool has_refbox() const;
  inline void clear_refbox();
  inline const ::Refbox_Log& refbox() const;
  inline ::Refbox_Log* mutable_refbox();
  
  // optional .AIToGUI aiToGui = 4;
  inline bool has_aitogui() const;
  inline void clear_aitogui();
  inline const ::AIToGUI& aitogui() const;
  inline ::AIToGUI* mutable_aitogui();
  
  // optional .AIToRadio aiToRadio = 5;
  inline bool has_aitoradio() const;
  inline void clear_aitoradio();
  inline const ::AIToRadio& aitoradio() const;
  inline ::AIToRadio* mutable_aitoradio();
  
  // optional .AIToSim aiToSim = 6;
  inline bool has_aitosim() const;
  inline void clear_aitosim();
  inline const ::AIToSim& aitosim() const;
  inline ::AIToSim* mutable_aitosim();
  
  // optional .GUIToAI guiToAi = 7;
  inline bool has_guitoai() const;
  inline void clear_guitoai();
  inline const ::GUIToAI& guitoai() const;
  inline ::GUIToAI* mutable_guitoai();
  
  // optional .SimToTracker simToTracker = 8;
  inline bool has_simtotracker() const;
  inline void clear_simtotracker();
  inline const ::SimToTracker& simtotracker() const;
  inline ::SimToTracker* mutable_simtotracker();
  
  // optional .TrackerToAI trackerToAi = 9;
  inline bool has_trackertoai() const;
  inline void clear_trackertoai();
  inline const ::TrackerToAI& trackertoai() const;
  inline ::TrackerToAI* mutable_trackertoai();
  
  // optional .AIToTracker aiToTracker = 10;
  inline bool has_aitotracker() const;
  inline void clear_aitotracker();
  inline const ::AIToTracker& aitotracker() const;
  inline ::AIToTracker* mutable_aitotracker();
  
  // optional .RadioToTracker radioToTracker = 11;
  inline bool has_radiototracker() const;
  inline void clear_radiototracker();
  inline const ::RadioToTracker& radiototracker() const;
  inline ::RadioToTracker* mutable_radiototracker();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::SSL_DetectionFrame* detection_;
  ::SSL_GeometryData* geometry_;
  ::Refbox_Log* refbox_;
  ::AIToGUI* aitogui_;
  ::AIToRadio* aitoradio_;
  ::AIToSim* aitosim_;
  ::GUIToAI* guitoai_;
  ::SimToTracker* simtotracker_;
  ::TrackerToAI* trackertoai_;
  ::AIToTracker* aitotracker_;
  ::RadioToTracker* radiototracker_;
  friend void protobuf_BuildDesc_messages_5frobocup_5fssl_5fwrapper_2eproto_AssignGlobalDescriptors(
      const ::google::protobuf::FileDescriptor* file);
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];
  
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
  static SSL_WrapperPacket* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// SSL_WrapperPacket

// optional .SSL_DetectionFrame detection = 1;
inline bool SSL_WrapperPacket::has_detection() const {
  return _has_bit(0);
}
inline void SSL_WrapperPacket::clear_detection() {
  if (detection_ != NULL) detection_->::SSL_DetectionFrame::Clear();
  _clear_bit(0);
}
inline const ::SSL_DetectionFrame& SSL_WrapperPacket::detection() const {
  return detection_ != NULL ? *detection_ : *default_instance_->detection_;
}
inline ::SSL_DetectionFrame* SSL_WrapperPacket::mutable_detection() {
  _set_bit(0);
  if (detection_ == NULL) detection_ = new ::SSL_DetectionFrame;
  return detection_;
}

// optional .SSL_GeometryData geometry = 2;
inline bool SSL_WrapperPacket::has_geometry() const {
  return _has_bit(1);
}
inline void SSL_WrapperPacket::clear_geometry() {
  if (geometry_ != NULL) geometry_->::SSL_GeometryData::Clear();
  _clear_bit(1);
}
inline const ::SSL_GeometryData& SSL_WrapperPacket::geometry() const {
  return geometry_ != NULL ? *geometry_ : *default_instance_->geometry_;
}
inline ::SSL_GeometryData* SSL_WrapperPacket::mutable_geometry() {
  _set_bit(1);
  if (geometry_ == NULL) geometry_ = new ::SSL_GeometryData;
  return geometry_;
}

// optional .Refbox_Log refbox = 3;
inline bool SSL_WrapperPacket::has_refbox() const {
  return _has_bit(2);
}
inline void SSL_WrapperPacket::clear_refbox() {
  if (refbox_ != NULL) refbox_->::Refbox_Log::Clear();
  _clear_bit(2);
}
inline const ::Refbox_Log& SSL_WrapperPacket::refbox() const {
  return refbox_ != NULL ? *refbox_ : *default_instance_->refbox_;
}
inline ::Refbox_Log* SSL_WrapperPacket::mutable_refbox() {
  _set_bit(2);
  if (refbox_ == NULL) refbox_ = new ::Refbox_Log;
  return refbox_;
}

// optional .AIToGUI aiToGui = 4;
inline bool SSL_WrapperPacket::has_aitogui() const {
  return _has_bit(3);
}
inline void SSL_WrapperPacket::clear_aitogui() {
  if (aitogui_ != NULL) aitogui_->::AIToGUI::Clear();
  _clear_bit(3);
}
inline const ::AIToGUI& SSL_WrapperPacket::aitogui() const {
  return aitogui_ != NULL ? *aitogui_ : *default_instance_->aitogui_;
}
inline ::AIToGUI* SSL_WrapperPacket::mutable_aitogui() {
  _set_bit(3);
  if (aitogui_ == NULL) aitogui_ = new ::AIToGUI;
  return aitogui_;
}

// optional .AIToRadio aiToRadio = 5;
inline bool SSL_WrapperPacket::has_aitoradio() const {
  return _has_bit(4);
}
inline void SSL_WrapperPacket::clear_aitoradio() {
  if (aitoradio_ != NULL) aitoradio_->::AIToRadio::Clear();
  _clear_bit(4);
}
inline const ::AIToRadio& SSL_WrapperPacket::aitoradio() const {
  return aitoradio_ != NULL ? *aitoradio_ : *default_instance_->aitoradio_;
}
inline ::AIToRadio* SSL_WrapperPacket::mutable_aitoradio() {
  _set_bit(4);
  if (aitoradio_ == NULL) aitoradio_ = new ::AIToRadio;
  return aitoradio_;
}

// optional .AIToSim aiToSim = 6;
inline bool SSL_WrapperPacket::has_aitosim() const {
  return _has_bit(5);
}
inline void SSL_WrapperPacket::clear_aitosim() {
  if (aitosim_ != NULL) aitosim_->::AIToSim::Clear();
  _clear_bit(5);
}
inline const ::AIToSim& SSL_WrapperPacket::aitosim() const {
  return aitosim_ != NULL ? *aitosim_ : *default_instance_->aitosim_;
}
inline ::AIToSim* SSL_WrapperPacket::mutable_aitosim() {
  _set_bit(5);
  if (aitosim_ == NULL) aitosim_ = new ::AIToSim;
  return aitosim_;
}

// optional .GUIToAI guiToAi = 7;
inline bool SSL_WrapperPacket::has_guitoai() const {
  return _has_bit(6);
}
inline void SSL_WrapperPacket::clear_guitoai() {
  if (guitoai_ != NULL) guitoai_->::GUIToAI::Clear();
  _clear_bit(6);
}
inline const ::GUIToAI& SSL_WrapperPacket::guitoai() const {
  return guitoai_ != NULL ? *guitoai_ : *default_instance_->guitoai_;
}
inline ::GUIToAI* SSL_WrapperPacket::mutable_guitoai() {
  _set_bit(6);
  if (guitoai_ == NULL) guitoai_ = new ::GUIToAI;
  return guitoai_;
}

// optional .SimToTracker simToTracker = 8;
inline bool SSL_WrapperPacket::has_simtotracker() const {
  return _has_bit(7);
}
inline void SSL_WrapperPacket::clear_simtotracker() {
  if (simtotracker_ != NULL) simtotracker_->::SimToTracker::Clear();
  _clear_bit(7);
}
inline const ::SimToTracker& SSL_WrapperPacket::simtotracker() const {
  return simtotracker_ != NULL ? *simtotracker_ : *default_instance_->simtotracker_;
}
inline ::SimToTracker* SSL_WrapperPacket::mutable_simtotracker() {
  _set_bit(7);
  if (simtotracker_ == NULL) simtotracker_ = new ::SimToTracker;
  return simtotracker_;
}

// optional .TrackerToAI trackerToAi = 9;
inline bool SSL_WrapperPacket::has_trackertoai() const {
  return _has_bit(8);
}
inline void SSL_WrapperPacket::clear_trackertoai() {
  if (trackertoai_ != NULL) trackertoai_->::TrackerToAI::Clear();
  _clear_bit(8);
}
inline const ::TrackerToAI& SSL_WrapperPacket::trackertoai() const {
  return trackertoai_ != NULL ? *trackertoai_ : *default_instance_->trackertoai_;
}
inline ::TrackerToAI* SSL_WrapperPacket::mutable_trackertoai() {
  _set_bit(8);
  if (trackertoai_ == NULL) trackertoai_ = new ::TrackerToAI;
  return trackertoai_;
}

// optional .AIToTracker aiToTracker = 10;
inline bool SSL_WrapperPacket::has_aitotracker() const {
  return _has_bit(9);
}
inline void SSL_WrapperPacket::clear_aitotracker() {
  if (aitotracker_ != NULL) aitotracker_->::AIToTracker::Clear();
  _clear_bit(9);
}
inline const ::AIToTracker& SSL_WrapperPacket::aitotracker() const {
  return aitotracker_ != NULL ? *aitotracker_ : *default_instance_->aitotracker_;
}
inline ::AIToTracker* SSL_WrapperPacket::mutable_aitotracker() {
  _set_bit(9);
  if (aitotracker_ == NULL) aitotracker_ = new ::AIToTracker;
  return aitotracker_;
}

// optional .RadioToTracker radioToTracker = 11;
inline bool SSL_WrapperPacket::has_radiototracker() const {
  return _has_bit(10);
}
inline void SSL_WrapperPacket::clear_radiototracker() {
  if (radiototracker_ != NULL) radiototracker_->::RadioToTracker::Clear();
  _clear_bit(10);
}
inline const ::RadioToTracker& SSL_WrapperPacket::radiototracker() const {
  return radiototracker_ != NULL ? *radiototracker_ : *default_instance_->radiototracker_;
}
inline ::RadioToTracker* SSL_WrapperPacket::mutable_radiototracker() {
  _set_bit(10);
  if (radiototracker_ == NULL) radiototracker_ = new ::RadioToTracker;
  return radiototracker_;
}

#endif  // PROTOBUF_messages_5frobocup_5fssl_5fwrapper_2eproto__INCLUDED
