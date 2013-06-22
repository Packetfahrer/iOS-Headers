/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEditItemViewController.h>

#import "EKCellShortener-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EKPickerTableView, PreferencesValueCell;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener>
{
    EKPickerTableView *_container;
    PreferencesValueCell *_dateCell;
    CDStruct_b0fa4487 _repeatEndGr;
    CDStruct_b0fa4487 _preNeverEndDate;
    CDStruct_b0fa4487 _minimumEndDate;
    int _shorteningStatus;
    unsigned int _updatingPicker:1;
}

- (void)shortenCell:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (BOOL)_showsNeverButton;
- (void)datePickerChanged:(id)arg1;
- (void)setMinimumEndDate:(CDStruct_b0fa4487)arg1;
- (void)applyMinimumEndDateToPicker;
@property CDStruct_b0fa4487 repeatEndDate;
- (void)updatePicker;
- (id)_stringForEndDate;
- (void)_localeChanged;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end
