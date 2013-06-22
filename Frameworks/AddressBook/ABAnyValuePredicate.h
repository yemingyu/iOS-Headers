/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBook/ABPredicate.h>

@interface ABAnyValuePredicate : ABPredicate
{
    int _property;
}

@property(nonatomic) int property; // @synthesize property=_property;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (BOOL)isValid;
- (id)init;

@end

