/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPredicate.h"

@interface NSPredicate (ABPredicateQueryCreation)
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void *)arg2 propertyIndices:(const struct __CFDictionary **)arg3;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (BOOL)ab_hasCallback;
- (void)ab_addCallbackContextToArray:(struct __CFArray *)arg1;
@end

