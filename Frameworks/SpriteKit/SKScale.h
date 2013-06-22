/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKAction.h>

@interface SKScale : SKAction
{
    struct SKCScale *_mycaction;
}

+ (id)scaleYTo:(float)arg1 duration:(double)arg2;
+ (id)scaleByY:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXBy:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXBy:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleBy:(float)arg1 duration:(double)arg2;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

