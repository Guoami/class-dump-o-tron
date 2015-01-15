//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTNibView.h"

#import "NSComboBoxDataSource.h"

@class NSArray, NSComboBox, NSProgressIndicator, NSString, NSTextField, PFTProcess;

@interface XRSymbolLookupView : PFTNibView <NSComboBoxDataSource>
{
    NSTextField *_title;
    NSComboBox *_comboBox;
    NSProgressIndicator *_progressBar;
    NSTextField *_progressTitle;
    NSArray *_symbols;
    unsigned long long _lengthToCancel;
    unsigned long long _lastIndex;
    BOOL _isSorted;
    PFTProcess *_target;
}

- (void)_loadUpdatedSymbolsPartTwo:(id)arg1;
- (void)_loadUpdatedSymbols:(id)arg1;
- (void)_updateCompleteUI;
- (void)_updateSymbols:(id)arg1;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)cancelDialog:(id)arg1;
- (void)cancel:(id)arg1;
- (void)symbolChosen:(id)arg1;
- (void)endWithCode:(int)arg1;
- (id)comboBox;
- (id)titleField;
- (void)_textFieldChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithInstruments:(id)arg1 target:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
