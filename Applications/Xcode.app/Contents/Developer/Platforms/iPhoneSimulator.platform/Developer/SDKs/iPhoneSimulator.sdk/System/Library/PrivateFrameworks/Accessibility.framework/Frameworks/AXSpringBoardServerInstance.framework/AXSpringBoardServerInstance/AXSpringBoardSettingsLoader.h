//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXSBVoiceOverSwipeDetectorDelegate.h"

@class AXTimer, NSString, UIWindow;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate>
{
    UIWindow *_voiceOverVibrateWindow;
    AXTimer *_voiceOverActivationCanceler;
    AXTimer *_managedConfigurationNotificationCoalesceTimer;
}

+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)initialize;
+ (void)_registerForNotifications;
+ (void)_updateAXSettings;
+ (void)_updateSpringBoardHelper;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)checkAccessibilityOptions;
+ (void)checkScreenContrast;
+ (void)_checkContrastSetting;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_checkClosedCaptioningSetByitunes;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_setVoiceOverTouchSettings:(unsigned char)arg1;
- (void)_remoteAccessibilitySettingsChanged:(id)arg1;
- (void)_updateRemoteAccessibilitySettings;
- (void)_registerReachability;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)_isDeviceAffectedByVOActivationWorkaround;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_showSwipeDetectionEnablerView;
- (void)swipeDetectorDetectedSwipe;
- (void)swipeDetectorCanceled;
- (void)_playVOActivationSoundStarted;
- (void)_playVOActivationSoundEnded;
- (void)_makeVoiceOverVibrateWindow;
- (void)_hideVoiceOverEnabler;
- (void)_voiceOverEnabled:(id)arg1;
- (void)_initializeRemoteSettingsListener;
- (void)dealloc;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)arg1;
- (void)_handleAggregateDictionaryStats;
- (void)_updateAXSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
