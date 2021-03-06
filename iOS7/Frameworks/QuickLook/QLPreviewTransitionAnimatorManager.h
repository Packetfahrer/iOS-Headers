/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@interface QLPreviewTransitionAnimatorManager : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
}

+ (id)sharedManager;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animatorForShowing:(_Bool)arg1 previewController:(id)arg2;

@end

