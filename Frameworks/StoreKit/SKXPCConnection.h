/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _disconnectBlock;
    id _messageBlock;
}

- (void)_reloadEventHandler;
@property(copy) id messageBlock;
@property(copy) id disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(id)arg2;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendMessage:(id)arg1;
- (id)createXPCEndpoint;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)init;
- (id)_initSKXPCConnection;

@end

