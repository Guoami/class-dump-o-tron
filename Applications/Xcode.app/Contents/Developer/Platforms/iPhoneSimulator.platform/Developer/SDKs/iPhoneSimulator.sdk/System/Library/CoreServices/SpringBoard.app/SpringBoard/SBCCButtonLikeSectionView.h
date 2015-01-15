//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SBUIControlCenterButtonDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBUIControlCenterButton, SBUIControlCenterLabel, UIFont, UIView, UIVisualEffect, UIVisualEffectView;

@interface SBCCButtonLikeSectionView : UIControl <SBUIControlCenterButtonDelegate, _UISettingsKeyObserver>
{
    UIVisualEffect *_normalStateEffect;
    UIVisualEffect *_highlightedStateEffect;
    UIVisualEffectView *_vibrantDarkenLayer;
    UIView *_tintingDarkenLayer;
    SBUIControlCenterButton *_button;
    SBUIControlCenterLabel *_label;
    _Bool _showingMenu;
    unsigned long long _roundCorners;
}

@property(nonatomic, getter=isShowingMenu) _Bool showingMenu; // @synthesize showingMenu=_showingMenu;
@property(nonatomic) unsigned long long roundCorners; // @synthesize roundCorners=_roundCorners;
- (void)_updateBackgroundForStateChange;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)button:(id)arg1 didChangeState:(long long)arg2;
- (void)buttonTapped:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
@property(retain, nonatomic) UIFont *font;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateEffects;
- (id)_backgroundImageWithRoundCorners:(unsigned long long)arg1;
- (_Bool)_shouldUseButtonAppearance;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
