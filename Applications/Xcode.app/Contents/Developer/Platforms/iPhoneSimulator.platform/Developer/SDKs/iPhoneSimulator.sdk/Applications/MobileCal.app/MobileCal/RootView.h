//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DebugGridOverlayView;

@interface RootView : UIView
{
    DebugGridOverlayView *_debugGridOverlayView;
    _Bool _showDebugGridOverlay;
    UIView *_mainView;
}

@property(nonatomic) _Bool showDebugGridOverlay; // @synthesize showDebugGridOverlay=_showDebugGridOverlay;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
