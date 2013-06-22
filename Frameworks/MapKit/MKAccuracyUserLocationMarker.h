/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKUserLocationMarker.h>

@class VKCircleAnnotationMarkerLayer;

@interface MKAccuracyUserLocationMarker : MKUserLocationMarker
{
    BOOL _allowsAccuracyRing;
    VKCircleAnnotationMarkerLayer *_accuracyLayer;
}

@property(nonatomic) BOOL allowsAccuracyRing; // @synthesize allowsAccuracyRing=_allowsAccuracyRing;
- (struct CGRect)maximumBoundingRectWithCanvasSize:(struct CGSize)arg1;
- (void)setOpacity:(float)arg1;
- (void)setTintColor:(id)arg1;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)_addOrRemoveAccuracyRingIfNecessary;
- (void)setStyleTransitionState:(CDStruct_1fbca27c)arg1;
- (struct CGColor *)_fillColor;
- (struct CGColor *)_strokeColor;
- (int)_currentStyle;
- (void)setLocationSource:(int)arg1;
- (void)setModel:(id)arg1;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

