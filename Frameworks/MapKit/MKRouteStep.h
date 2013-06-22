/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOStep, MKPolyline, MKRouteStepPolyline, NSString;

@interface MKRouteStep : NSObject
{
    GEOStep *_geoStep;
    NSString *_instructions;
    unsigned int _transportType;
    MKRouteStepPolyline *_polyline;
}

@property(readonly, nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) MKPolyline *polyline; // @synthesize polyline=_polyline;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSString *notice;
- (id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned int)arg3 polyline:(id)arg4;
- (void)dealloc;

@end

