//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UIView;

__attribute__((visibility("hidden")))
@interface UIViewAnimation : NSObject
{
    UIView *_view;
    NSIndexPath *_indexPath;
    struct CGRect _endRect;
    double _endAlpha;
    double _startFraction;
    double _endFraction;
    int _curve;
    _Bool _animateFromCurrentPosition;
    _Bool _shouldDeleteAfterAnimation;
    _Bool _editing;
    _Bool _shouldAnimateShadow;
    _Bool _shouldResetGroupOpacityAfterAnimation;
    _Bool _shouldAllowGroupOpacityAfterAnimation;
    _Bool _shouldClipToBoundsAfterAnimation;
}

@property(nonatomic) _Bool shouldClipToBoundsAfterAnimation; // @synthesize shouldClipToBoundsAfterAnimation=_shouldClipToBoundsAfterAnimation;
@property(nonatomic) _Bool shouldAllowGroupOpacityAfterAnimation; // @synthesize shouldAllowGroupOpacityAfterAnimation=_shouldAllowGroupOpacityAfterAnimation;
@property(nonatomic) _Bool shouldResetGroupOpacityAfterAnimation; // @synthesize shouldResetGroupOpacityAfterAnimation=_shouldResetGroupOpacityAfterAnimation;
@property(nonatomic) _Bool shouldAnimateShadow; // @synthesize shouldAnimateShadow=_shouldAnimateShadow;
@property(readonly, nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) _Bool shouldDeleteAfterAnimation; // @synthesize shouldDeleteAfterAnimation=_shouldDeleteAfterAnimation;
@property(readonly, nonatomic) _Bool animateFromCurrentPosition; // @synthesize animateFromCurrentPosition=_animateFromCurrentPosition;
@property(readonly, nonatomic) int curve; // @synthesize curve=_curve;
@property(readonly, nonatomic) double endFraction; // @synthesize endFraction=_endFraction;
@property(readonly, nonatomic) double startFraction; // @synthesize startFraction=_startFraction;
@property(readonly, nonatomic) double endAlpha; // @synthesize endAlpha=_endAlpha;
@property(readonly, nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)description;
- (void)dealloc;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 endRect:(struct CGRect)arg3 endAlpha:(double)arg4 startFraction:(double)arg5 endFraction:(double)arg6 curve:(int)arg7 animateFromCurrentPosition:(_Bool)arg8 shouldDeleteAfterAnimation:(_Bool)arg9 editing:(_Bool)arg10;

@end

