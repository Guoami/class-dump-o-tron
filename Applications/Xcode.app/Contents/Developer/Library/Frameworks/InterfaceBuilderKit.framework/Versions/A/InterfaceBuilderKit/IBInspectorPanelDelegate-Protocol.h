//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowDelegate.h"

@class IBInspectorPanel, NSView;

@protocol IBInspectorPanelDelegate <NSWindowDelegate>
- (void)inspectorPanel:(IBInspectorPanel *)arg1 willSelectKeyViewPrecedingView:(NSView *)arg2;
- (void)inspectorPanel:(IBInspectorPanel *)arg1 willSelectKeyViewFollowingView:(NSView *)arg2;
@end

