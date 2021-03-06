//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface DVTDispatchLock : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)readWriteDispatchLockWithDebugName:(id)arg1;
+ (id)recursiveDispatchLockWithDebugName:(id)arg1;
+ (id)dispatchLockWithDebugName:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)performLockedBlockAsyncUnlessRecursing:(CDUnknownBlockType)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)afterTimeInterval:(double)arg1 asyncPerformLockedBlock:(CDUnknownBlockType)arg2;
- (void)asyncPerformLockedWriterBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)performLockedWriterBlock:(CDUnknownBlockType)arg1;
- (void)performLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedBlock:(CDUnknownBlockType)arg1;
- (void)performLockedBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isRecursive;
@property(readonly) NSString *debugName;
- (void)dealloc;
- (id)initWithDebugName:(id)arg1;
- (id)initWithDebugName:(id)arg1 isRecursive:(BOOL)arg2;

@end

