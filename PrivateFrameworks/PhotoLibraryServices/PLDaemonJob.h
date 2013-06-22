/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSObject<OS_xpc_object>, PLXPCTransaction;

@interface PLDaemonJob : NSObject
{
    NSObject<OS_xpc_object> *_xpcReply;
    PLXPCTransaction *_transaction;
}

+ (void)runDaemonSideWithXPCEvent:(id)arg1;
@property(nonatomic) NSObject<OS_xpc_object> *xpcReply;
- (void)run;
- (BOOL)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1;
@property(readonly, nonatomic) NSError *replyError;
@property(readonly, nonatomic) BOOL replyIsError;
@property(readonly, nonatomic) BOOL clientWantsReply;
- (void)runDaemonSide;
- (void)handleReply;
- (void)sendToAssetsdWithReply;
- (void)sendToAssetsd;
- (long long)daemonOperation;
- (void)dealloc;

@end

