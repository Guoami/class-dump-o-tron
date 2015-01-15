//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSCloudTabStore.h"

@class NSTimer, NSUbiquitousKeyValueStore;

@interface CloudTabStore : WBSCloudTabStore
{
    NSUbiquitousKeyValueStore *_syncedDevicesStore;
    NSUbiquitousKeyValueStore *_userRequestsStore;
    NSTimer *_refreshTimer;
    long long _periodicUpdateRequestCount;
    id <CloudTabStoreDelegate> _delegate;
}

+ (id)cloudTabForTabDocument:(id)arg1;
@property(nonatomic) __weak id <CloudTabStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;
- (id)_storeForIdentifier:(long long)arg1;
- (id)_currentDeviceUUID;
- (_Bool)canSaveCloudTabsForCurrentDevice;
- (_Bool)cloudTabsAreEnabled;
- (void)_requestUpdateFromServer;
- (void)_refreshTimerDidFire:(id)arg1;
- (void)stopPerformingPeriodicUpdates;
- (void)startPerformingPeriodicUpdates;
- (void)saveCurrentDeviceTabsFromSuspendState;
- (void)saveCurrentDeviceCloudTabs:(id)arg1;
- (void)_removeConflictingDevice;
- (void)clearTabsForCurrentDevice;
- (void)_clearAllDevices;
- (id)syncedCloudTabDevices;
- (id)currentDevice;
- (void)_userRequestsStoreDidUpdate:(id)arg1;
- (void)_syncedDevicesStoreDidUpdate:(id)arg1;
- (void)_cloudTabsEnabledDidChange;
- (void)dealloc;
- (id)init;
- (void)saveCurrentDeviceTabDocuments:(id)arg1;

@end
