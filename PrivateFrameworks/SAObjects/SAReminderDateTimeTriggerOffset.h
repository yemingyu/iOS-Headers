/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSNumber, NSString;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>
{
}

+ (id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dateTimeTriggerOffset;
@property(copy, nonatomic) NSNumber *offsetValue;
@property(copy, nonatomic) NSString *offsetTimeUnit;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

