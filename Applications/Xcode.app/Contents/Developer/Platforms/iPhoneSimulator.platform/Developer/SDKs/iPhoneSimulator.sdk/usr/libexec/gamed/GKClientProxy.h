//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKClientProtocol.h"
#import "GKStateMachineDelegate.h"

@class GKClientProxy<GKUIViewService>, GKDataTransport, GKDatabaseConnection, GKDelayedRequestWriter, GKEntitlements, GKEventTuple, GKGameInternal, GKInviteSession, GKLocalPlayerInternal, GKMatchResponse, GKResourceManager, GKStateMachine, NSDictionary, NSLocale, NSManagedObjectContext, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface GKClientProxy : NSObject <GKClientProtocol, GKStateMachineDelegate>
{
    _Bool _deniedProductionEnvironment;
    _Bool _installed;
    _Bool _sandboxed;
    _Bool _initialized;
    int _pid;
    unsigned int _applicationState;
    unsigned int _previousApplicationState;
    GKClientProxy<GKUIViewService> *_weakViewService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_authQueue;
    NSXPCConnection *_connection;
    GKEntitlements *_entitlements;
    NSNumber *_adamID;
    NSNumber *_externalVersion;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    long long _environment;
    NSString *_appSession;
    NSString *_language;
    GKLocalPlayerInternal *_localPlayer;
    GKGameInternal *_currentGame;
    GKDataTransport *_transport;
    GKEventTuple *_launchEvent;
    GKInviteSession *_inviteSession;
    GKMatchResponse *_currentMatchResponse;
    GKStateMachine *_initAppStateMachine;
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;
    GKDatabaseConnection *_delayedRequestsDBConnection;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSManagedObjectContext *_managedObjectContext;
    GKResourceManager *_resourceManager;
    NSMutableSet *_pendingDataTypesForRefresh;
}

+ (id)syncQueue;
+ (id)newManagedObjectContextForClient:(id)arg1;
+ (id)_newManagedObjectContext;
+ (id)cacheFileQueue;
+ (id)managedObjectModel;
+ (void)removeAllCaches;
+ (id)cacheURLForClient:(id)arg1;
+ (id)cacheDirectoryForBundleID:(id)arg1 environment:(long long)arg2;
+ (void)removeClient:(id)arg1;
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;
+ (void)_enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)clientForMatchmakingRID:(id)arg1;
+ (id)clientForInviteSessionToken:(id)arg1;
+ (id)_foregroundClient;
+ (id)foregroundClient;
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;
+ (id)clientForProcessIdentifier:(int)arg1;
+ (id)clientForBundleID:(id)arg1;
+ (id)gameCenterClient;
+ (id)_clientLookup;
+ (id)factoryQueue;
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;
+ (void)performDelayedRequests;
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;
@property(retain, nonatomic) NSMutableSet *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain) GKStateMachine *initAppStateMachine; // @synthesize initAppStateMachine=_initAppStateMachine;
@property GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(retain, nonatomic) GKLocalPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(retain, nonatomic) NSString *appSession; // @synthesize appSession=_appSession;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool deniedProductionEnvironment; // @synthesize deniedProductionEnvironment=_deniedProductionEnvironment;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)processMatchResponse:(id)arg1;
- (void)checkMatchStatus;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)performSync:(CDUnknownBlockType)arg1;
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;
@property(nonatomic) GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_weakViewService;
- (_Bool)isUIService;
- (_Bool)isGameCenter;
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)resetCache:(id)arg1;
- (void)_setupCache;
- (void)dealloc;
- (void)updateIfRecentlyInstalled;
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;
- (void)initializeInitializationStateMachine;
- (void)invalidateStoreFrontDependentObjects;
- (id)transactionGroup;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;
- (oneway void)getPrivateServicesForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getServicesForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3;
- (void)didEnterForeground;
- (void)updateAppInitState;
- (id)verifyAuthorized;
- (id)appInitState;
- (_Bool)setAppInitState:(id)arg1;
- (void)stateDidChange;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)bgInitializeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)initializeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)setLogBits:(int)arg1;
- (oneway void)setLocalPlayer:(id)arg1 authenticated:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setPreferencesValues:(id)arg1;
- (oneway void)refreshPendingDataTypes;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)achievementSelected:(id)arg1;
- (oneway void)scoreSelected:(id)arg1;
- (oneway void)challengeCompleted:(id)arg1;
- (oneway void)challengeReceived:(id)arg1;
- (oneway void)completedChallengeSelected:(id)arg1;
- (oneway void)receivedChallengeSelected:(id)arg1;
- (oneway void)respondedToNearbyInvite:(id)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)endNetworkActivity;
- (oneway void)beginNetworkActivity;
- (void)performDelayedRequests;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *removeFriendWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *removeGameWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *deletePlayerPhotoWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *setPlayerPhotoWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *setPlayerStatusWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *abortChallengesWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *issueChallengesWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *submitAchievementsWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *submitRatingsWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *rejectFriendRequestsWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *acceptFriendRequestsWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *issueFriendRequestsWriter;
@property(readonly, retain, nonatomic) GKDelayedRequestWriter *submitScoresWriter;
- (void)removeDelayedRequestStore;
- (void)_removeDelayedRequestStore;
- (void)_setupDelayedRequestsWriters;
- (id)requestsCacheForEnvironment:(long long)arg1;
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

