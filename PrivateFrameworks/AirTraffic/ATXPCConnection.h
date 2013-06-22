/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface ATXPCConnection : NSObject
{
    struct _xpc_connection_s *_conn;
    struct dispatch_queue_s *_eventQueue;
    id _lockdownHandler;
    id _messageHandler;
    id _disconnectHandler;
    NSMutableSet *_outstandingMessages;
    BOOL _assertionHeld;
    id _context;
}

@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) BOOL assertionHeld; // @synthesize assertionHeld=_assertionHeld;
@property(copy, nonatomic) id disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(copy, nonatomic) id messageHandler; // @synthesize messageHandler=_messageHandler;
@property(copy, nonatomic) id lockdownHandler; // @synthesize lockdownHandler=_lockdownHandler;
- (unsigned int)_outstandingMessages;
- (void)_removeMessage:(id)arg1;
- (void)_registerMessage:(id)arg1;
- (void)_setEventHandlerOnConnection:(struct _xpc_connection_s *)arg1;
- (void)_handleLockdownMessage:(void *)arg1;
- (void)_handleXPCMessage:(void *)arg1;
- (void)shutdown;
- (void)_handleXPCError:(void *)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (struct dispatch_queue_s *)eventQueue;
@property(readonly) NSString *serviceName;
- (void)dealloc;
- (id)initWithXPCConnection:(struct _xpc_connection_s *)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(struct dispatch_queue_s *)arg2;

@end

