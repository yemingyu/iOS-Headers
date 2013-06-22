/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBNotificationBehaviorUtilitiesClientProtocol-Protocol.h"
#import "BBXPCConnectionDelegate-Protocol.h"
#import "XPCProxyTarget-Protocol.h"

@class BBServerConnection;

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol, XPCProxyTarget, BBXPCConnectionDelegate>
{
    BBServerConnection *_connection;
    id _filteringStateChangeHandler;
    id _activeBehaviorOverridesChangeHandler;
}

- (void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg1;
- (void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(id)arg3;
- (void)setActiveBehaviorOverridesChangeHandler:(id)arg1;
- (void)setFilteringStateChangeHandler:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)notificationPresentationFilteringChangedToEnabled:(BOOL)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

