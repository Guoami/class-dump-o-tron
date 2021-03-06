//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CalloutViewControllerProtocol.h"

@class MKCalloutBackgroundView, NSMutableArray, NSString, UILabel, UIView<_MKCalloutAccessoryView>, _MKSmallCalloutPassthroughButton;

__attribute__((visibility("hidden")))
@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView<_MKCalloutAccessoryView> *_leftView;
    UIView<_MKCalloutAccessoryView> *_rightView;
    UIView<_MKCalloutAccessoryView> *_externalLeftView;
    UIView<_MKCalloutAccessoryView> *_externalRightView;
    UIView<_MKCalloutAccessoryView> *_detailView;
    struct CGSize _preferredContentSize;
    double _maxWidth;
    _Bool _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    UIView *_unmaskedContainerView;
    MKCalloutBackgroundView *_calloutBackgroundView;
    unsigned long long _mapDisplayStyle;
    UIView *_leftSpacerView;
    UIView *_rightSpacerView;
    NSMutableArray *_lastConstraints;
    _Bool _initialDetailViewPositioning;
    _Bool _initialLeftViewPositioning;
    _Bool _initialRightViewPositioning;
}

@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maxWidth;
@property(nonatomic) unsigned long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(retain, nonatomic) MKCalloutBackgroundView *calloutBackgroundView; // @synthesize calloutBackgroundView=_calloutBackgroundView;
@property(readonly, nonatomic) struct CGSize _preferredContentSize; // @synthesize _preferredContentSize;
- (void).cxx_destruct;
- (void)_updateAccessoryViewStyles;
- (_Bool)canDisplayCompleteTitleWhenExpanded;
- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *detailView;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *rightView;
@property(retain, nonatomic) UIView *leftView;
@property(copy, nonatomic) NSString *calloutSubtitle;
- (void)setCalloutSubtitle:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *calloutTitle;
- (void)updateConstraints;
- (void)_updatePreferredContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)beginMapsTransitionMovingSideways;
- (void)reset;
- (void)dealloc;
- (id)_subtitleLabel;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

