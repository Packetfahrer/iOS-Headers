/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CALayer, UIColor, UIImage, UIView;

// Not exported
@interface _UISwitchInfo : NSObject
{
    int imageState;
    UIImage *images[8];
    UIView *rightEdgeView;
    UIView *leftEdgeView;
    double position;
    UIColor *onButtonColor;
    CALayer *maskLayer;
    struct {
        unsigned int on:1;
        unsigned int pressed:1;
        unsigned int useAlternateColors:1;
        unsigned int skipValueChangedAction:1;
    } _switchFlags;
}

- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)dealloc;

@end

