//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDelegate.h"

@class IBDocument, NSArray, NSArrayController, NSCell, NSError, NSPanel, NSString, NSTableColumn, NSTableView;

@interface IBDocumentCompatibilityController : NSObject <NSTableViewDelegate>
{
    NSArrayController *errorController;
    NSTableColumn *iconAndNameColumn;
    NSTableColumn *reasonColumn;
    NSTableView *errorTableView;
    NSPanel *compatibilityPanel;
    NSArray *allUnderlyingErrors;
    NSCell *measurementCell;
    IBDocument *document;
    NSError *rootError;
}

- (void)tableViewColumnDidResize:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)editSelectedRow:(id)arg1;
- (void)setRootError:(id)arg1;
- (id)rootError;
- (id)allUnderlyingErrors;
- (void)setAllUnderlyingErrors:(id)arg1;
- (id)document;
- (void)showCompatibilityPanel:(id)arg1;
- (void)ensureUIIsLoaded;
- (void)awakeFromNib;
- (void)willClose;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
