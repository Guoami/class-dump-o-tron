//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RoutePickingBar.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, RoutePickingLoadingLabel, UIBarButtonItem, UIToolbar;

__attribute__((visibility("hidden")))
@interface RoutePickingBarCompact : RoutePickingBar <UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_middleSelectorContainerItem;
    RoutePickingLoadingLabel *_loadingTitleView;
    UIBarButtonItem *_loadingTitleViewItem;
    UIToolbar *_toolbar;
    double _cachedContentHeight;
    _Bool _dimmed;
}

- (void).cxx_destruct;
- (void)setBackdropLightness:(long long)arg1 animation:(id)arg2;
- (void)updateContentHeight;
- (void)topBarSizeDidChange:(struct CGSize)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)directionsSearchPresentationSource;
- (id)sharePresentationSource;
- (void)_setCachedContentHeight:(double)arg1;
- (double)toolbarContentHeight;
- (id)toolbarItemsForToolbar:(id)arg1;
- (_Bool)needsUpdatingDuringBoundsChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

