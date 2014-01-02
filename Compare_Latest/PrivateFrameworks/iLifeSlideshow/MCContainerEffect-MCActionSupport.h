/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCContainerEffect.h>

#import "MCActionSupport-Protocol.h"

@class NSDictionary;

@interface MCContainerEffect (MCActionSupport) <MCActionSupport>
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (void)setAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long countOfActions;
@property(readonly) NSDictionary *actions;
- (id)imprintsForActions;
- (void)demolishActions;
- (void)initActionsWithImprints:(id)arg1;
@end
