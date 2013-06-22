/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CMActivityAlarm : NSObject
{
    BOOL fIsValid;
    struct __CFRunLoop *fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;
    id fHandler;
    unsigned int _trigger;
    double _duration;
}

+ (id)activityAlarmInfo;
+ (BOOL)activityAlarmAvailable;
@property(nonatomic) unsigned int trigger; // @synthesize trigger=_trigger;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)fire;
- (BOOL)isValid;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop *)arg3 withHandler:(id)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(id)arg4;

@end

