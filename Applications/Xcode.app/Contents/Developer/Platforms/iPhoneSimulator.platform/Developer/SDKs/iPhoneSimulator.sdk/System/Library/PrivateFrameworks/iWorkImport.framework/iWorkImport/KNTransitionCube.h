//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNFrameAnimator.h"
#import "KNTransitionAnimator.h"

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper, NSString;

__attribute__((visibility("hidden")))
@interface KNTransitionCube : KNAnimationEffect <KNTransitionAnimator, KNFrameAnimator, KNAnimationPluginArchiving>
{
    KNAnimParameterGroup *_parameterGroup;
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)localizedMenuString:(int)arg1;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (id)p_animationsForStartAngle:(double)arg1 endAngle:(double)arg2 bounds:(struct CGRect)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 hasBounce:(_Bool)arg6;
- (id)p_pullbackAnimationFromRotateAnimation:(id)arg1 startPullbackPercent:(double)arg2 endPullbackPercent:(double)arg3 cubeCenter:(double)arg4 pullbackAmount:(double)arg5 duration:(double)arg6;
- (double)p_pullbackPercentFromRotateAnimation:(id)arg1 atPercent:(double)arg2;
- (id)p_interpolatedAnimationsWithStartAngle:(double)arg1 endAngle:(double)arg2 bounds:(struct CGRect)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 beginTime:(double)arg6;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

