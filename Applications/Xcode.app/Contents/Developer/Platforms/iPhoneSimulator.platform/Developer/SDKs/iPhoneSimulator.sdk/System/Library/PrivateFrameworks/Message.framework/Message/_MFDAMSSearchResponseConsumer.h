//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/_MFDAMSBasicConsumer.h>

#import "DASearchQueryConsumer.h"

@class MFConditionLock, NSArray, NSDate, NSMutableArray;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer>
{
    NSDate *latestDateToAdd;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
    NSMutableArray *matchingRemoteIDs;
}

@property(readonly, retain, nonatomic) NSArray *matchingRemoteIDs; // @synthesize matchingRemoteIDs;
@property(retain, nonatomic) NSDate *latestDateToAdd; // @synthesize latestDateToAdd;
- (void)dealloc;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (_Bool)handleItems:(id)arg1;
- (void)resetDoneCondition;
- (void)waitUntilDone;
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end

