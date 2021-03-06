//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudHistorySyncThrottlerDataStore.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, WBSCloudHistorySyncThrottler;

@interface WBSCloudHistory : NSObject <WBSCloudHistorySyncThrottlerDataStore>
{
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    _Bool _cloudHistoryEnabled;
    _Bool _saveChangesWhenHistoryLoads;
    _Bool _fetchChangesWhenHistoryLoads;
    id <NSObject> _historyWasLoadedObserver;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _saveOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _fetchOperationSuddenTerminationDisabler;
    _Bool _removedHistoryItemsArePendingSave;
    WBSCloudHistorySyncThrottler *_saveChangesThrottler;
    WBSCloudHistorySyncThrottler *_fetchChangesThrottler;
    WBSCloudHistorySyncThrottler *_syncCircleSizeRetrievalThrottler;
    NSTimer *_serverBackoffTimer;
    _Bool _saveChangesWhenBackoffTimerFires;
    _Bool _fetchChangesWhenBackoffTimerFires;
    unsigned long long _numberOfDevicesInSyncCircle;
    NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
}

+ (id)sharedCloudHistory;
@property(nonatomic) unsigned long long numberOfDevicesInSyncCircle; // @synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_updateFetchThrottlerAndSaveThrottlerPolicies;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)currentSaveChangesThrottlerPolicyString;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (void)_cloudHistoryConfigurationChanged:(id)arg1;
- (void)_serverBackoffTimerFired:(id)arg1;
- (void)_backOffWithInterval:(double)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (long long)_resultFromError:(id)arg1;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(_Bool)arg3;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(CDUnknownBlockType)arg1;
- (void)_historyWasLoaded:(id)arg1;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_saveChangesWhenHistoryLoads;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2 withPriority:(long long)arg3;
- (void)_fetchAndMergeChangesBypassingThrottler:(_Bool)arg1;
- (void)fetchAndMergeChangesBypassingThrottler;
- (void)fetchAndMergeChanges;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(_Bool)arg1;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(_Bool)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)_saveChangesToCloudHistoryStoreBypassingThrottler:(_Bool)arg1;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)saveChangesToCloudHistoryStore;
@property(nonatomic, getter=isCloudHistoryEnabled) _Bool cloudHistoryEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

