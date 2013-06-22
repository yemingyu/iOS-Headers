/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VKAnchorContext : NSObject
{
    shared_ptr_4d0abf3b _anchorContext;
    shared_ptr_00dc923b _anchorFactory;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)newAnchorAtCoordinate:(CDStruct_c3b9c2ee)arg1 followsTerrain:(BOOL)arg2;
- (void)setMercatorTerrainHeightCache:(id)arg1;
- (BOOL)isMercator;
- (id)initGeocentricWithCache:(id)arg1;
- (id)initMercator;
- (id)initWithAnchorContext:(struct AnchorContext *)arg1;
- (shared_ptr_00dc923b)anchorFactory;
- (shared_ptr_4d0abf3b)anchorContext;
- (id)init;

@end

