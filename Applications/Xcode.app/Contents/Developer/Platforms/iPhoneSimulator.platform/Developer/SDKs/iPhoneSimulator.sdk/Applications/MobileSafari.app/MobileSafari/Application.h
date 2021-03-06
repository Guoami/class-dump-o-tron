//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "PageLoadTestRunnerDelegate.h"
#import "UIApplicationDelegate.h"

@class BrowserController, NSString, NSTimer, TabDocument, UIWindow, WBSCloudHistory;

@interface Application : UIApplication <PageLoadTestRunnerDelegate, UIApplicationDelegate>
{
    BrowserController *_controller;
    _Bool _finishedLaunching;
    _Bool _isHidingBrowserPanelForSuspend;
    _Bool _isHandlingMemoryWarning;
    NSTimer *_memoryWarningTimer;
    double _memoryWarningSleepInterval;
    int _memoryWarningState;
    _Bool _isReadingDefaults;
    _Bool _shouldReadDefaultsOnResume;
    NSString *_defaultPNGName;
    WBSCloudHistory *_cloudHistory;
    _Bool _isRunningShowBookmarksTest;
    _Bool _startedBookmarksTest;
    _Bool _isRunningCanvasTest;
    _Bool _wasSuspendedUnderLock;
    _Bool _willEnterSuspendedState;
    _Bool _shouldPrepareTabDocumentForNewUserActivityWhenFinishedLaunching;
    TabDocument *_tabDocumentPendingUserActivityPayload;
}

+ (id)sharedTestRunner;
+ (void)commandLineTestOption:(int)arg1 arg:(const char *)arg2;
@property(nonatomic) __weak TabDocument *tabDocumentPendingUserActivityPayload; // @synthesize tabDocumentPendingUserActivityPayload=_tabDocumentPendingUserActivityPayload;
- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (void)_getBookmarksDataClassEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_prepareTabDocumentForNewUserActivity;
- (_Bool)finishedLaunching;
- (_Bool)isHidingBrowserPanelForSuspend;
@property(retain, nonatomic) UIWindow *window;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)applicationWillTerminate;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_setHandlingURL:(_Bool)arg1 url:(id)arg2;
- (void)_appleKeyboardsChanged:(id)arg1;
- (void)_reloadSearchEngines;
- (void)userDefaultsDidChange:(id)arg1;
- (id)_openURLInNewTab:(id)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)applicationOpenURL:(id)arg1;
- (void)_saveNSURLCacheToDiskInBackground:(_Bool)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)clearReaderViewsExceptMultiplePageReader:(_Bool)arg1;
- (_Bool)shouldReportForegroundTabCrash;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidResume;
- (_Bool)applicationSuspendWithSettings:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_resumeForEventsOnly:(_Bool)arg1;
- (void)_readDefaults;
- (void)_suspendForEventsOnly:(_Bool)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (void)dealloc;
- (id)lastPageLoadTime;
- (id)lastPageVisualLayoutTime;
- (id)linksOnActivePage;
- (id)activeURL;
- (id)setNotifyPageLoadDidFinish:(id)arg1;
- (id)loadURLInNewWindow:(id)arg1;
- (id)loadURL:(id)arg1;
- (void)stopLoading;
- (void)scrollDocumentDown;
- (id)isAtEndOfPage;
- (id)isLoading;
- (void)_dumpMemoryStatistics:(_Bool)arg1;
- (void)reduceMemoryOnApplicationSuspendIfNeeded;
- (void)didReceiveMemoryWarning;
- (void)_handleMemoryWarningLevel;
- (void)_stopMemoryWarningTimer;
- (void)_startMemoryWarningTimer;
- (_Bool)isStillUnderMemoryPressure;
- (_Bool)_adjustMemoryPressureStatus:(_Bool)arg1;
- (_Bool)_purgeLowPriorityNavigationSnapshots;
- (void)_handleMemoryWarningBackground;
- (void)_handleMemoryWarningCriticalPriority;
- (_Bool)_handleMemoryWarningHighPriority:(id)arg1;
- (_Bool)_handleMemoryWarningMediumPriority:(id)arg1;
- (_Bool)_hibernateOneDocumentFrom:(id)arg1;
- (void)_hibernateTabDocument:(id)arg1;
- (void)_handleMemoryWarningLowPriority;
- (void)_incrementMemoryWarningState;
- (void)categorizeInMemoryImportantDocuments:(id)arg1 unimportantDocuments:(id)arg2;
- (void)_addTabDocumentToArrayInLastViewedTimeOrder:(id)arg1 documents:(id)arg2;
- (void)initMemoryJetsamInfo;
- (void)setHandlingMemoryWarning:(_Bool)arg1;
- (_Bool)isHandlingMemoryWarning;
- (_Bool)didStartBookmarksTest;
- (_Bool)isRunningCanvasTest;
- (_Bool)isRunningShowBookmarksTest;
- (void)finishedBookmarksTest;
- (void)startBookmarksTest;
- (_Bool)prepareBookmarksTest;
- (void)finishedCanvasTestWithURL:(id)arg1 forTabDocument:(id)arg2;
- (void)_pollCanvasTest:(id)arg1;
- (_Bool)startCanvasTest:(id)arg1;
- (void)failedPurpleTestWithError:(id)arg1;
- (void)finishedPurpleTest:(id)arg1;
- (void)startedPurpleTest;
- (void)setupTabViewBringUpTest;
- (void)startTabViewBringUpTest;
- (void)loadBlankPageforKeyboardTests;
- (void)startKeyboardRotationTest;
- (void)startKeyboardBringupTest;
- (void)startKeyboardSplitAndMergeTest;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (id)_numberOption:(id)arg1;
- (void)checkExtendedLaunchPageLoad:(id)arg1 forTabDocument:(id)arg2;
- (id)_extendLaunchTest;
- (_Bool)disableRestoreTabState;
- (void)startCommandLineTest;
- (void)pageLoadTestRunnerFinished:(id)arg1;
- (_Bool)_isTaskFootprintReachedLimit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

