/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ABPersonEditDelegate <NSObject>

@optional
- (void)person:(void *)arg1 propertyDidChange:(int)arg2;
- (void)notesFieldWillBecomeFirstResponderForPerson:(void *)arg1;
- (void)notesFieldDidResignFirstResponderForPerson:(void *)arg1;
- (void)personHeaderViewHeightDidChange:(void *)arg1;
- (void)personScrollViewWillBeginDragging:(void *)arg1;
- (void)person:(void *)arg1 tableViewTouchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)personWasDeleted;
- (void)nameUpdatedForPerson:(void *)arg1;
- (void)linksUpdatedForPerson:(void *)arg1;
- (void)imageUpdatedForPerson:(void *)arg1;
- (void)willShowDeleteButtonAtIndexPath:(id)arg1;
- (void)didRemoveDeleteButtonAtIndexPath:(id)arg1;
- (void)preferredPersonDidChangeToPerson:(void *)arg1;
- (void)insertProperty:(int *)arg1 insertValue:(id *)arg2 insertLabel:(id *)arg3;
- (BOOL)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(BOOL)arg2 forPerson:(void *)arg3;
- (struct CGSize)adjustedPopoverContentSizeForPersonView:(id)arg1 suggestedSize:(struct CGSize)arg2;
- (BOOL)shouldBeRemovedFromNavigationStack;
@end
