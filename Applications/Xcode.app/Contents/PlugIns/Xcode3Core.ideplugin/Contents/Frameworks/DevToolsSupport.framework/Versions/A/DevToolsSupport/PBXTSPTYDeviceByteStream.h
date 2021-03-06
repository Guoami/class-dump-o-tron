//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsSupport/PBXTSByteStream.h>

#import "PBXTSByteStreamConsuming.h"
#import "PBXTSTaskSynchronizedFileHandle.h"

@class NSConditionLock, NSFileHandle, NSMutableArray, NSMutableData, NSString, PBXTSTask;

@interface PBXTSPTYDeviceByteStream : PBXTSByteStream <PBXTSByteStreamConsuming, PBXTSTaskSynchronizedFileHandle>
{
    int _masterFD;
    int _slaveFD;
    NSString *_slaveDeviceName;
    NSFileHandle *_slaveFileHandle;
    PBXTSTask *_taskToSynchronizeWith;
    int _fromSignalPipeFD;
    int _toSignalPipeFD;
    NSConditionLock *_queueLock;
    NSMutableArray *_queue;
    NSMutableData *_accumulator;
    unsigned long long _bufferedDataLength;
    unsigned long long _stats_numBytesSent;
    unsigned long long _stats_numBytesRead;
    BOOL _receivedLastDataBuffer;
    BOOL _watcherThreadRunning;
}

- (void).cxx_destruct;
- (int)masterDeviceFD;
- (id)fileHandleForSlaveDevice;
- (id)slaveDeviceName;
- (void)stream:(id)arg1 processBytes:(id)arg2;
- (void)streamDidEnd:(id)arg1;
- (void)sendStreamDidEnd;
- (BOOL)didSynchronizedFileHandleReceiveLastData;
- (void)closePTY;
- (void)taskDidStopForSynchronizedFileHandle;
- (void)synchronizeWithTask:(id)arg1;
- (void)_stopPTYWatcherThread;
- (void)_ptyWatcherThreadDidExit;
- (void)_processPtyData;
- (void)_watchPTY;
- (void)_setupPTYWatcherThread;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

