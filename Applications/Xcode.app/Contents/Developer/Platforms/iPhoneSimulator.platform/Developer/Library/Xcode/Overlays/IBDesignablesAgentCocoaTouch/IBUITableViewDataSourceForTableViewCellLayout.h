//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface IBUITableViewDataSourceForTableViewCellLayout : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_cells;
    double _defaultHeight;
    long long _positionInSection;
    long long _count;
}

- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(readonly, nonatomic) NSIndexPath *cellIndexPath;
- (id)initWithTableViewCell:(id)arg1 defaultHeight:(double)arg2 positionInSection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
