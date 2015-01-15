//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUI/TPLegacyBottomBar.h>

@class NSArray, NSTimer, TPLegacyLockKnobView, TPLegacyLockTextView, TPLegacyWell, UIImageView, UIView;

@interface TPLegacyBottomLockBar : TPLegacyBottomBar
{
    NSArray *_labels;
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLegacyLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLegacyLockTextView *_labelView;
    TPLegacyWell *_well;
    double _knobTrackInsetLeft;
    double _fontSize;
    double _deltaFromDefaultLabelWidth;
    UIImageView *_backgroundView;
}

+ (double)defaultLabelFontSize;
+ (struct CGSize)defaultSize;
- (void)setWellAlpha:(double)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setSuppressDrawingBackground:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canDrawContent;
- (id)labelView;
- (void)setKnobWellWidthToDefault;
- (void)setKnobWellWidth:(double)arg1;
- (id)well;
- (double)knobTrackInsetRight;
- (double)knobTrackInsetLeft;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unlock;
- (void)freezeKnobInUnlockedPosition;
- (void)relock;
- (void)slideBack:(_Bool)arg1;
- (void)knobDragged:(double)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)finishedCyclingLabelOut;
- (int)currentLabelIndex;
- (void)cycleToNextLabel;
- (void)stopCyclingLabels;
- (void)startCyclingLabels;
- (void)_setLabel:(id)arg1;
- (void)_adjustLabelOrigin;
- (void)_adjustKnobOrigin;
- (double)_calcKnobYOffset;
- (void)setLabel:(id)arg1;
- (void)upInKnob;
- (void)downInKnob;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (id)knob;
- (void)dealloc;
- (id)initForIncomingCallWithFrame:(struct CGRect)arg1;
- (void)setKnobImage:(id)arg1;
- (void)setKnobColor:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 knobColor:(int)arg2;
- (id)_knobImageForColor:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 knobImage:(id)arg2;
- (_Bool)_shouldStopLabelAnimationForGrab;
- (_Bool)usesBackgroundImage;
- (_Bool)allowsTouchTrackingBeyondVerticalThreshold;
- (id)wellImageName;
- (double)defaultWellWidth;
- (void)drawRect:(struct CGRect)arg1;

@end
