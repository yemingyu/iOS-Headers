/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject
{
    id _defaultHandler;
    struct __CFRunLoopSource *_serverRunLoopSource;
    struct __CFRunLoopSource *_clientInvalidationSource;
    unsigned int _serverPort;
    unsigned int _clientInvalidationPort;
    NSMutableDictionary *_validSecurityTokens;
    NSMutableSet *_connectedClients;
    id _clientInvalidationHandler;
    NSMutableDictionary *_entitlements;
    unsigned int _assignedServerPort;
    BOOL _running;
    NSString *_serviceName;
    NSMutableDictionary *_handlers;
}

@property(readonly, nonatomic) unsigned int machPort; // @synthesize machPort=_serverPort;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
- (BOOL)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (id)_handleIncomingMessage:(id)arg1 securityToken:(CDStruct_52eb0d21)arg2 auditToken:(CDStruct_6ad76789)arg3 clientPort:(unsigned int)arg4;
- (void)_handleClientRegistration:(id)arg1;
- (void)_startServerThread;
- (void)_handleClientInvalidation:(unsigned int)arg1;
- (BOOL)_clientWithPort:(unsigned int)arg1 auditToken:(CDStruct_6ad76789)arg2 hasAnyEntitlementRequiredForMessageWithKey:(int)arg3;
- (void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)removeAllHandlersForTarget:(id)arg1;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3;
- (void)removeHandlerForKey:(int)arg1;
- (void)setHandler:(id)arg1 forKey:(void)arg2;
- (BOOL)stopServerWithError:(id *)arg1;
- (BOOL)startServerWithError:(id *)arg1;
@property(copy, nonatomic) id clientInvalidationCallback;
@property(copy, nonatomic) id defaultHandler;
- (void)setServiceRunLoopSource:(struct __CFRunLoopSource *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 serviceRunLoopSource:(struct __CFRunLoopSource *)arg2;
- (id)initWithServiceName:(id)arg1;

@end

