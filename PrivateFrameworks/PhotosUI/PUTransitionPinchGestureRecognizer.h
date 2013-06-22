/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPinchGestureRecognizer.h"

@interface PUTransitionPinchGestureRecognizer : UIPinchGestureRecognizer
{
    struct CGPoint _touch0InitialLocation;
    struct CGPoint _touch1InitialLocation;
    float _lastTransitionProgress;
    unsigned int _transitionDirection;
}

@property(readonly, nonatomic) unsigned int transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property(readonly, nonatomic) BOOL transitionShouldFinish;
@property(readonly, nonatomic) struct CGSize centerOffset;
@property(readonly, nonatomic) float transitionProgress;
- (void)setState:(int)arg1;
- (void)reset;
- (void)_resetTransitionState;

@end

