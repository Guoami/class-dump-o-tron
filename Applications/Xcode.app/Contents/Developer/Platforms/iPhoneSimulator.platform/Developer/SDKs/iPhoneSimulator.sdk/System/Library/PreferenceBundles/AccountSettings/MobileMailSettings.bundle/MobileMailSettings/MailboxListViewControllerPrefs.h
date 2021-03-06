//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileMailSettings/MailboxListViewControllerBase.h>

@interface MailboxListViewControllerPrefs : MailboxListViewControllerBase
{
    int _pickingForType;
}

+ (long long)tableViewStyle;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_loadMailboxes;
- (id)_ntsMailboxesForAccount:(id)arg1;
- (void)refreshDisplay;
- (void)_updateSelection;
- (id)indexPathForMailbox:(id)arg1;
- (id)mailboxForIndexPath:(id)arg1;
- (void)setViewingContext:(id)arg1;

@end

