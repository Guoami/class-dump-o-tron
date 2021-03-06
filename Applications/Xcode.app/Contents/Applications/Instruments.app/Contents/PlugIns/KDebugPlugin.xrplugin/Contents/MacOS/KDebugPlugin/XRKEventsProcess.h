//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRAbstractAggregator.h"

#import "XRKEventsThread.h"

@class NSMutableSet, NSString, XRKEventsThread;

@interface XRKEventsProcess : XRAbstractAggregator <XRKEventsThread>
{
    int _pid;
    unsigned int _generation;
    NSString *_name;
    NSString *_displayName;
    NSMutableSet *_threads;
    struct XRTimeRange _lifetime;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly, nonatomic) unsigned int generation; // @synthesize generation=_generation;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_name;
- (void).cxx_destruct;
- (id)baseQuery;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (id)threadIndices;
- (id)representativeThread;
- (id)process;
@property(readonly) unsigned long long tid;
@property(readonly) NSString *threadDisplayName;
@property(readonly, nonatomic) BOOL hasExited;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setTerminateTime:(unsigned long long)arg1;
- (BOOL)isAliveInTimeRange:(struct XRTimeRange)arg1;
@property(retain) XRKEventsThread *parentThread;
@property(nonatomic) int pid;
- (id)threadList;
- (void)addThread:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithProcessID:(int)arg1 generation:(unsigned int)arg2 run:(id)arg3;

@end

