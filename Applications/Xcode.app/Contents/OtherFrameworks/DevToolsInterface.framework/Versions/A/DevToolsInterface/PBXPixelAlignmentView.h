//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface PBXPixelAlignmentView : NSView
{
    long long _xAdjustment;
    long long _yAdjustment;
    long long _vAdjustment;
    long long _hAdjustment;
}

- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (BOOL)autoresizesSubviews;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)setVAdjustment:(long long)arg1 setHAdjustment:(long long)arg2;
- (void)setXAdjustment:(long long)arg1 setYAdjustment:(long long)arg2;
- (id)init;

@end

