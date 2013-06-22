/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCAction.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface MCAnimationTrigger : MCAction
{
    NSMutableDictionary *_animationAttributes;
    NSString *_animationKey;
}

+ (id)animationTriggerForTargetPlugObjectID:(id)arg1 withAnimationKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *animationAttributes; // @synthesize animationAttributes=_animationAttributes;
@property(copy) NSString *animationKey; // @synthesize animationKey=_animationKey;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

