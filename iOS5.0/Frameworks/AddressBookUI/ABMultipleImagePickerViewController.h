/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

@class NSMutableArray;

@interface ABMultipleImagePickerViewController : UITableViewController
{
    NSMutableArray *_imageCellData;
    unsigned int _selectedImageIndex;
    id <ABMultipleSourceImagePickerDelegate> _delegate;
}

- (id)initWithStyle:(int)arg1;
- (void)viewDidLoad;
- (void)addImageData:(id)arg1 title:(id)arg2 isSelectedImage:(BOOL)arg3 person:(void *)arg4;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(nonatomic) id <ABMultipleSourceImagePickerDelegate> delegate; // @synthesize delegate=_delegate;

@end
