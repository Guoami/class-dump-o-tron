//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class HKBiologicalSexObject, HKBloodTypeObject, HKHealthStore, NSDate, NSString, UIBarButtonItem, UIDatePicker, UIPickerView, WDMeDataTableViewCell;

@interface WDMeDataTableViewController : UITableViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    HKHealthStore *_healthStore;
    HKBloodTypeObject *_bloodTypeObject;
    long long _bloodTypeDisplayValue;
    HKBiologicalSexObject *_biologicalSexObject;
    long long _biologicalSexDisplayValue;
    NSDate *_birthdate;
    NSDate *_birthdateDisplayValue;
    UIDatePicker *_birthdatePicker;
    UIPickerView *_bloodTypePicker;
    UIPickerView *_biologicalSexPicker;
    UIBarButtonItem *_cancelButtonItem;
    WDMeDataTableViewCell *_birthdateCell;
    WDMeDataTableViewCell *_biologicalSexCell;
    WDMeDataTableViewCell *_bloodTypeCell;
    WDMeDataTableViewCell *_selectedCell;
    _Bool _isCancelling;
}

- (void).cxx_destruct;
- (id)_displayStringForBloodType:(long long)arg1;
- (id)_displayStringForBiologicalSex:(long long)arg1;
- (id)_dateAsAge:(id)arg1;
- (id)_displayStringForBirthDate:(id)arg1;
- (void)_resetSelectedCell;
- (void)_updatePickersWithDisplayValues;
- (void)cancelButtonTapped:(id)arg1;
- (void)_updateBirthdateCellDisplayValue;
- (void)birthdateChanged:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
