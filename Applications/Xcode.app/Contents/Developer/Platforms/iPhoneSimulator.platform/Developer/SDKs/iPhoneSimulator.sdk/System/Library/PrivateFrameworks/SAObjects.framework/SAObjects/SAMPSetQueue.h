//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand
{
}

+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setQueue;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *sort;
@property(nonatomic) _Bool shouldShuffle;
@property(retain, nonatomic) SAMPCollection *mediaItems;
@property(copy, nonatomic) NSArray *filters;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
