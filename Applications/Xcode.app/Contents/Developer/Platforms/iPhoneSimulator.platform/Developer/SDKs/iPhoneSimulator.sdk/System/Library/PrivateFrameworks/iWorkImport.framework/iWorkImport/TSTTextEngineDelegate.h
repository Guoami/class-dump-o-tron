//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSWPTextDelegate.h"

@class TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding *mPadding;
    int mVerticalAlignment;
    double mMaxWidthForChildren;
}

@property(nonatomic) double maxWidthForChildren; // @synthesize maxWidthForChildren=mMaxWidthForChildren;
- (_Bool)forceWesternLineBreaking;
- (int)verticalAlignment;
- (id)padding;
- (void)dealloc;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 verticalAlignment:(int)arg2;

@end
