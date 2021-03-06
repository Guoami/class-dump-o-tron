//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, PCPersistentTimer;

__attribute__((visibility("hidden")))
@interface EKTravelEngineThrottle : NSObject
{
    _Bool _running;
    CDUnknownBlockType _adviceBlock;
    NSDate *_nextEmissionDate;
    NSMutableOrderedSet *_throttledAdviceQueue;
    PCPersistentTimer *_emissionTimer;
    NSObject<OS_dispatch_queue> *_throttleQueue;
    unsigned long long _numberOfThrottleAdviceObjectsToEmitLater;
}

+ (id)_throttleIdentifier;
+ (double)_throttlePeriodInSeconds;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) unsigned long long numberOfThrottleAdviceObjectsToEmitLater; // @synthesize numberOfThrottleAdviceObjectsToEmitLater=_numberOfThrottleAdviceObjectsToEmitLater;
@property(nonatomic) NSObject<OS_dispatch_queue> *throttleQueue; // @synthesize throttleQueue=_throttleQueue;
@property(retain, nonatomic) PCPersistentTimer *emissionTimer; // @synthesize emissionTimer=_emissionTimer;
@property(retain, nonatomic) NSMutableOrderedSet *throttledAdviceQueue; // @synthesize throttledAdviceQueue=_throttledAdviceQueue;
@property(retain, nonatomic) NSDate *nextEmissionDate; // @synthesize nextEmissionDate=_nextEmissionDate;
@property(copy, nonatomic) CDUnknownBlockType adviceBlock; // @synthesize adviceBlock=_adviceBlock;
- (void)_significantTimeChangeNotificationReceived;
- (void)_unregisterForNotificationObservation;
- (void)_registerForNotificationObservation;
- (void)_emitAdviceObjects:(id)arg1;
- (void)_emissionTimerFired:(id)arg1;
- (void)_uninstallEmissionTimer;
- (void)_updateEmissionTimerWithEmissionDate:(id)arg1;
- (void)_analyzeQueueAndPrepareForEmission;
- (void)removeAllThrottledAdvice;
- (void)removeThrottledAdviceForEventWithExternalURL:(id)arg1;
- (void)injectAdvice:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)stop;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)init;

@end

