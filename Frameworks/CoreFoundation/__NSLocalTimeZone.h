/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
{
}

+ (BOOL)supportsSecureCoding;
- (id)replacementObjectForPortCoder:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (id)name;

@end

