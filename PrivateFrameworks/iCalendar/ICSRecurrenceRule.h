/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICSWriting-Protocol.h"
#import "NSCoding-Protocol.h"

@class ICSDateValue, NSArray, NSMutableDictionary, NSNumber;

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting>
{
    int _freq;
    NSMutableDictionary *_parameters;
}

+ (id)recurrenceRuleFromICSString:(id)arg1;
+ (id)recurrenceRuleFromICSCString:(const char *)arg1 withTokenizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned int)arg1;
@property NSNumber *wkst;
@property(retain) NSArray *bysetpos;
@property(retain) NSArray *bymonth;
@property(retain) NSArray *byweekno;
@property(retain) NSArray *byyearday;
@property(retain) NSArray *bymonthday;
@property(retain) NSArray *byday;
@property(retain) NSArray *byhour;
@property(retain) NSArray *byminute;
@property(retain) NSArray *bysecond;
@property NSNumber *interval;
@property NSNumber *count;
@property(retain) ICSDateValue *until;
@property int freq;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (id)parameterValueForName:(id)arg1;
- (void)dealloc;
- (id)initWithFrequency:(int)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)cleanUpForStartDate:(id)arg1;
- (id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4;

@end

