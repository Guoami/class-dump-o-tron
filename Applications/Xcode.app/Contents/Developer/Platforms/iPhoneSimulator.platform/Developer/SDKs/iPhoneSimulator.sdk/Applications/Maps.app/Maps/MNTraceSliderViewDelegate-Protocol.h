//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNTraceSliderView;

@protocol MNTraceSliderViewDelegate <NSObject>
- (void)traceSliderViewCancelledEditing:(MNTraceSliderView *)arg1;
- (void)traceSliderView:(MNTraceSliderView *)arg1 editingEndedAtTime:(double)arg2;
- (void)traceSliderViewEditingDidBegin:(MNTraceSliderView *)arg1;
@end
