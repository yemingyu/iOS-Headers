/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface SSDistributedNotificationCenterObserver : NSObject
{
    id _block;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) id block; // @synthesize block=_block;
- (void)dealloc;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id)arg3;

@end

