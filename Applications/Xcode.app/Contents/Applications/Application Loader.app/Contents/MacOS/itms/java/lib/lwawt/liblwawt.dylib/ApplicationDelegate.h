//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class CMenuBar, NSMenu, NSMenuItem;

@interface ApplicationDelegate : NSObject <NSApplicationDelegate>
{
    NSMenuItem *fPreferencesMenu;
    NSMenuItem *fAboutMenu;
    NSMenu *fDockMenu;
    CMenuBar *fDefaultMenuBar;
    BOOL fHandlesDocumentTypes;
    BOOL fHandlesURLTypes;
}

+ (id)sharedDelegate;
+ (void)_notifyJava:(int)arg1;
+ (void)_willFinishLaunching;
+ (void)_systemWillPowerOff;
+ (void)_appDidActivate;
+ (void)_appDidDeactivate;
+ (void)_appDidHide;
+ (void)_appDidUnhide;
+ (void)_sessionDidActivate;
+ (void)_sessionDidDeactivate;
+ (void)_screenDidSleep;
+ (void)_screenDidWake;
+ (void)_systemDidSleep;
+ (void)_systemDidWake;
+ (void)_registerForNotification:(id)arg1;
+ (void)_setDockIconImage:(id)arg1;
+ (id)_dockIconImage;
- (void)_updatePreferencesMenu:(BOOL)arg1 enabled:(BOOL)arg2;
- (void)_updateAboutMenu:(BOOL)arg1 enabled:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (void)_handleOpenURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (struct _jobject *)_createFilePathArrayFrom:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (unsigned long long)application:(id)arg1 printFiles:(id)arg2 withSettings:(id)arg3 showPrintPanels:(BOOL)arg4;
- (void)_aboutMenuHandler;
- (void)_preferencesMenuHandler;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (id)defaultMenuBar;
@property(retain, nonatomic) CMenuBar *fDefaultMenuBar; // @synthesize fDefaultMenuBar;
@property(retain, nonatomic) NSMenu *fDockMenu; // @synthesize fDockMenu;
@property(retain, nonatomic) NSMenuItem *fAboutMenu; // @synthesize fAboutMenu;
@property(retain, nonatomic) NSMenuItem *fPreferencesMenu; // @synthesize fPreferencesMenu;

@end

