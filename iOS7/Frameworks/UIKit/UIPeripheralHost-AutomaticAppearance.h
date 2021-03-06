/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIPeripheralHost.h>

@interface UIPeripheralHost (AutomaticAppearance)
- (void)syncToExistingAnimations;
- (void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(_Bool)arg3 forShow:(_Bool)arg4;
- (struct CGRect)screenRectFromBounds:(struct CGRect)arg1 atCenter:(struct CGPoint)arg2 applyingSourceHeightDelta:(double)arg3;
- (_Bool)userInfoContainsActualGeometryChange:(id)arg1;
- (void)logGeometryDescriptionFromUserInfo:(id)arg1;
- (struct UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(long long)arg1 outDirection:(int)arg2 forTransition:(int)arg3;
- (struct CGSize)totalPeripheralSizeForOrientation:(long long)arg1;
- (void)setPeripheralFrameForHostBounds:(struct CGRect)arg1;
- (void)setPeripheralToolbarFrameForHostWidth:(double)arg1;
- (_Bool)isHostingActiveImpl;
- (_Bool)hasCustomInputView;
@end

