/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreMotion/CLNotifierServiceAdapter.h>

#import "CLCompassDatabaseProtocol-Protocol.h"

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>
{
}

+ (id)getSilo;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;
- (void)heartAttack;

@end

