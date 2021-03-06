//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTProcessControlService.h"

#import "DTSpringBoardProcessControlServiceAuthorizedMethods.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface DTSpringBoardProcessControlService : DTProcessControlService <DTSpringBoardProcessControlServiceAuthorizedMethods>
{
    NSMutableDictionary *_watchdogAssertionsByPid;
    NSObject<OS_dispatch_queue> *_callbackCoordinationQueue;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)_watchDogWatcherStopWatchingPid:(id)arg1;
- (void)_watchDogWatcherWatchPid:(id)arg1;
- (void)stopObservingPid:(id)arg1;
- (void)startObservingPid:(id)arg1;
- (void)showNotificiationCenterWidget:(id)arg1;
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;
- (id)processIdentifierForBundleIdentifier:(id)arg1;
- (void)killPid:(id)arg1;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

