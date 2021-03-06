//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSMenu, NSMenuItem, PFTSwitchBoard;

@protocol PFTSwitchBoardMenuDelegate <NSObject>
- (BOOL)switchBoard:(PFTSwitchBoard *)arg1 menuHasKeyEquivalent:(NSMenu *)arg2 forEvent:(NSEvent *)arg3 target:(id *)arg4 action:(SEL *)arg5;
- (int)switchBoard:(PFTSwitchBoard *)arg1 numberOfItemsInMenu:(NSMenu *)arg2;
- (void)switchBoard:(PFTSwitchBoard *)arg1 menuNeedsUpdate:(NSMenu *)arg2;
- (BOOL)switchBoard:(PFTSwitchBoard *)arg1 menu:(NSMenu *)arg2 updateItem:(NSMenuItem *)arg3 atIndex:(long long)arg4 shouldCancel:(BOOL)arg5;
@end

