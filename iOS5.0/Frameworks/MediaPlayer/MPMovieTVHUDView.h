/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface MPMovieTVHUDView : UIView
{
    unsigned int _currentState;
    UIImageView *_playbackMode;
}

- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)_fadeOut;
- (void)_changeState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
