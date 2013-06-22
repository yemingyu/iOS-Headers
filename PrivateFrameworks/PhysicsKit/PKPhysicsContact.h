/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject
{
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    struct CGPoint _contactPoint;
    float _impulse;
    BOOL _didBegin;
    BOOL _didEnd;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float collisionImpulse;
@property(readonly, nonatomic) struct CGPoint contactPoint;
@property(readonly, nonatomic) PKPhysicsBody *bodyB;
@property(readonly, nonatomic) PKPhysicsBody *bodyA;
- (void)setCollisionImpulse:(float)arg1;
- (void)setBodyB:(id)arg1;
- (void)setBodyA:(id)arg1;
- (void)setContactPoint:(struct CGPoint)arg1;
@property BOOL didEnd;
@property BOOL didBegin;
- (id)init;

@end

