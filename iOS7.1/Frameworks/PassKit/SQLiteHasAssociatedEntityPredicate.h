//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying.h"

@interface SQLiteHasAssociatedEntityPredicate : SQLitePredicate <NSCopying>
{
    Class _associatedEntityClass;
    SQLitePredicate *_associatedPredicate;
}

+ (id)predicateWithAssociatedEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;

@end

