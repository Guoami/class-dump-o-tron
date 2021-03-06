//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "XRProcessTargetedObject.h"

@class NSButton, NSImageView, NSPopUpButton, NSString, NSTextField, PFTProcess, XRInstrument;

@interface PFTPidPickerController : NSViewController <XRProcessTargetedObject>
{
    NSPopUpButton *_pidPicker;
    NSButton *_applyToAllButton;
    NSImageView *_imageView;
    NSTextField *_label;
    PFTProcess *_process;
    XRInstrument *_instrument;
}

- (void).cxx_destruct;
- (id)currentTargetDevice;
@property(readonly) PFTProcess *currentTargetProcess;
- (BOOL)supportsTargetType:(int)arg1;
- (id)defaultProcess;
- (int)defaultTargetTypeForChooser;
- (void)setTargetsDevice:(id)arg1;
- (void)setTargetsLaunchedProcess:(id)arg1;
- (void)setTargetsExistingProcess:(id)arg1;
- (void)setTargetsAllProcesses;
@property(readonly) BOOL applyToAll;
- (void)_cancelClicked:(id)arg1;
- (void)_okClicked:(id)arg1;
- (id)initWithInstrument:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

