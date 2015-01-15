//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSParsecSearchITunesResult.h"

#import "UniversalSearchDisplayableResult.h"

@class NSString;

@interface UniversalSearchITunesResult : WBSParsecSearchITunesResult <UniversalSearchDisplayableResult>
{
}

- (id)descriptionLeadInText;
- (id)footnote;
- (id)supportedStyleOverrides;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (void)configureCompletionTableHeaderView:(id)arg1 forCompletionList:(id)arg2;
- (id)completionTableHeaderView;
- (id)completionTableViewCell;
- (id)completionTableHeaderViewReuseIdentifier;
- (id)completionTableViewCellReuseIdentifier;
- (void)acceptCompletionWithActionHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
