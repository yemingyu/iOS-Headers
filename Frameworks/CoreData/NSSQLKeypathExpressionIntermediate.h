/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate
{
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateCountClauseForToManyKeyPathExpression:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5;

@end

