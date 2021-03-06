/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

@class CALayer, MKUserLocationView, NSArray;

@interface MKScrollView : UIScrollView
{
    id _mk_delegate;
    unsigned int _gestureCount;
    double _lastGestureEndedInterval;
    BOOL _adjustContentOffsetDisabled;
    BOOL _enableBoundsHitDetection;
    BOOL _displayingHitDetectionLayer;
    NSArray *_boundsHitDetectionLayers;
    MKUserLocationView *_userLocationView;
    CALayer *_boundedLayer;
    struct {
        unsigned int shouldHandleTouchesMoved:1;
        unsigned int touchesBegan:1;
        unsigned int touchesCancelled:1;
        unsigned int touchesEnded:1;
    } _delegateImplements;
}

@property(retain, nonatomic) MKUserLocationView *userLocationView; // @synthesize userLocationView=_userLocationView;
@property(readonly, nonatomic) double lastGestureEndedInterval; // @synthesize lastGestureEndedInterval=_lastGestureEndedInterval;
@property(readonly, nonatomic) unsigned int gestureCount; // @synthesize gestureCount=_gestureCount;
@property(nonatomic) BOOL enableBoundsHitDetection; // @synthesize enableBoundsHitDetection=_enableBoundsHitDetection;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)boundsHitDetectionLayers;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_hitTestForContentView:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateBoundsHitDetection;
- (void)stopSmoothScroll;
- (void)hideBoundsHitDetectionLayers;
- (void)setDelegate:(id)arg1;
- (void)setContentSize:(struct CGSize)arg1 adjustOffset:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

