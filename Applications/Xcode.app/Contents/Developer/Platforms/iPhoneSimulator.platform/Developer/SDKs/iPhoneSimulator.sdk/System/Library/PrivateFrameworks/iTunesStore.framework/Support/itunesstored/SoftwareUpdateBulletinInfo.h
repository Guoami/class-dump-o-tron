//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SoftwareUpdateBulletinInfo : NSObject
{
    NSMutableArray *_readTitles;
    NSMutableArray *_unreadTitles;
}

- (id)description;
- (id)newBulletin;
@property(readonly, nonatomic) _Bool hasUnreadTitles;
- (void)addUnreadTitle:(id)arg1;
- (void)addReadTitle:(id)arg1;
- (void)dealloc;

@end

