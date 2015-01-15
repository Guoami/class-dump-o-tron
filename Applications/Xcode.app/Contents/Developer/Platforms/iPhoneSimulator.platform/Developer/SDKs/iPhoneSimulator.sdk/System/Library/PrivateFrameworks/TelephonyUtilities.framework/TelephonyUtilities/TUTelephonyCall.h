//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUCall.h>

@interface TUTelephonyCall : TUCall
{
    struct __CTCall *_call;
}

+ (void)stopPlayingDTMFTone;
+ (void)playDTMFToneForKey:(unsigned char)arg1;
+ (int)callStatusForCTCallStatusType:(int)arg1;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (_Bool)isTTY;
- (_Bool)managesAudioInterruptions;
- (_Bool)setDownlinkMuted:(_Bool)arg1;
- (_Bool)isDownlinkMuted;
- (_Bool)setUplinkMuted:(_Bool)arg1;
- (_Bool)isUplinkMuted;
- (id)audioMode;
- (id)audioCategory;
- (int)callStatus;
- (double)callDuration;
- (_Bool)isEqual:(id)arg1;
- (int)causeCode;
- (id)callUUID;
- (int)callIdentifier;
- (struct __CTCall *)call;
- (_Bool)isVoicemail;
- (_Bool)isAlerting;
- (_Bool)isEmergencyCall;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (void)leaveConference;
- (void)joinConference;
- (_Bool)isConferenced;
- (_Bool)hasSupport:(int)arg1;
- (double)startTime;
- (_Bool)allowsTTYSettingChanges;
- (_Bool)isWiFiCall;
- (_Bool)isBlocked;
- (_Bool)isOutgoing;
- (int)supportedModelType;
- (int)service;
- (void)disconnect;
- (void)unhold;
- (void)hold;
- (void)answerWithSourceIdentifier:(id)arg1;
- (void)emergencyCallStatusChangedNotification:(id)arg1;
- (void)_refreshFaceTimeIDSStatus;
- (void)dealloc;
- (id)initWithCall:(struct __CTCall *)arg1;

@end
