//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TIRevisionHistoryToken : NSObject
{
    _Bool _accepted;
    unsigned int _tokenID;
    unsigned int _usageLearningMask;
    unsigned int _usageTrackingMask;
    NSString *_tokenString;
    unsigned long long _offset;
    NSString *_userTyping;
}

@property(nonatomic, getter=isAccepted) _Bool accepted; // @synthesize accepted=_accepted;
@property(nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=_usageTrackingMask;
@property(nonatomic) unsigned int usageLearningMask; // @synthesize usageLearningMask=_usageLearningMask;
@property(copy, nonatomic) NSString *userTyping; // @synthesize userTyping=_userTyping;
@property(nonatomic) unsigned int tokenID; // @synthesize tokenID=_tokenID;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
- (id)description;
- (void)dealloc;

@end

