/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKPuckAnimatorLocationProjector;

@interface VKCameraContext : NSObject
{
    CDStruct_2c43369c _pointOfReference;
    double _heading;
    CDStruct_2c43369c _pointOfFocus;
    int _style;
    int _focusStyle;
    CDStruct_2c43369c _courseTargetLocation;
    int _courseSource;
    double _lastCameraFocusCourse;
    BOOL _animated;
    BOOL _applied;
    struct vector<GEOLocationCoordinate2D, vk_allocator<GEOLocationCoordinate2D>> _pois;
    VKPuckAnimatorLocationProjector *_locationProjector;
}

@property(nonatomic) BOOL applied; // @synthesize applied=_applied;
@property(readonly, nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) int courseSource; // @synthesize courseSource=_courseSource;
@property(nonatomic) CDStruct_c3b9c2ee courseTargetLocation; // @synthesize courseTargetLocation=_courseTargetLocation;
@property(nonatomic) int focusStyle; // @synthesize focusStyle=_focusStyle;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) CDStruct_c3b9c2ee pointOfFocus; // @synthesize pointOfFocus=_pointOfFocus;
@property(readonly, nonatomic) double heading; // @synthesize heading=_heading;
@property(readonly, nonatomic) CDStruct_c3b9c2ee pointOfReference; // @synthesize pointOfReference=_pointOfReference;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumeratePointsOfInterestUsingBlock:(id)arg1;
- (void)addPointOfInterest:(CDStruct_c3b9c2ee)arg1;
- (void)clearPointsOfInterest;
- (void)updateForLocation:(id)arg1 routeMatch:(id)arg2 isRouteMatch:(BOOL)arg3 speedMultiplier:(double)arg4 onRoute:(BOOL)arg5 animated:(BOOL)arg6;
- (void)_setPointOfReference:(CDStruct_c3b9c2ee)arg1 heading:(double)arg2 routeMatch:(id)arg3 onRoute:(BOOL)arg4;
- (id)description;
- (void)dealloc;
- (id)init;

@end

