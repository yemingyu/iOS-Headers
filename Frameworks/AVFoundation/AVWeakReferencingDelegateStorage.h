/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVDelegateStorage-Protocol.h"

@class AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage>
{
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (void)initialize;
- (void)invokeDelegateCallbackWithBlock:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)getRetainedDelegate:(id *)arg1 retainedDelegateQueue:(id *)arg2;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) id delegate;
- (void)finalize;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)init;

@end

