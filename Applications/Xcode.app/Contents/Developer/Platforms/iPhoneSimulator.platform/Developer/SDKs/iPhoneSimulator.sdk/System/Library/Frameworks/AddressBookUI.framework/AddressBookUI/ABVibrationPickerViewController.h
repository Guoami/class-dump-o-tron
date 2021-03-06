//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPickerViewController.h>

@class TKVibrationPickerViewController, UIBarButtonItem;

@interface ABVibrationPickerViewController : ABPickerViewController
{
    TKVibrationPickerViewController *_vibrationPickerViewController;
    _Bool _canEnterEditingMode;
    UIBarButtonItem *_saveButton;
}

@property(retain, nonatomic, setter=_setSaveButton:) UIBarButtonItem *_saveButton; // @synthesize _saveButton;
- (void)_vibrationSaveButtonClicked:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)loadView;
- (void)setStyleProvider:(id)arg1;
@property(readonly, retain, nonatomic) TKVibrationPickerViewController *vibrationPickerViewController;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1;

@end

