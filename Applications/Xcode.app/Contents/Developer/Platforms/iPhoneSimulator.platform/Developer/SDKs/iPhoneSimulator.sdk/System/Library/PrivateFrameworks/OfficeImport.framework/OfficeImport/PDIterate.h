//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PDIterate : NSObject
{
    int mType;
    _Bool mIsBackwards;
    _Bool mIsPercentage;
    double mValue;
}

- (_Bool)isEqual:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)setIsValuePercentage:(_Bool)arg1;
- (_Bool)isValuePercentage;
- (void)setIsBackwards:(_Bool)arg1;
- (_Bool)isBackwards;
- (void)setType:(int)arg1;
- (int)type;

@end

