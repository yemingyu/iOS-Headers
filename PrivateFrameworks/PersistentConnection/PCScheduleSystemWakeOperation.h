/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation
{
    BOOL _scheduleOrCancel;
    NSDate *_wakeDate;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}

- (void)dealloc;
- (void)main;
- (id)initForScheduledWake:(BOOL)arg1 wakeDate:(id)arg2 serviceIdentifier:(id)arg3 uniqueIdentifier:(void *)arg4;

@end

