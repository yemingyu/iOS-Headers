/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSExpression, NSMutableArray, NSMutableString, NSSQLColumn, NSSQLEntity, NSSQLFetchIntermediate, NSString;

// Not exported
@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate
{
    NSExpression *_trailingKeypath;
    NSExpression *_variableExpression;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_selectFromEntity;
    NSMutableString *_selectFromCorrelationTarget;
    NSString *_selectEntityAlias;
    NSSQLEntity *_governingEntityForVariable;
    NSSQLColumn *_variableColumn;
    NSString *_variableAlias;
    NSSQLColumn *_targetColumn;
    NSString *_targetAlias;
    NSMutableArray *_keypathsToPromote;
    _Bool _useDistinct;
    _Bool _isCount;
    _Bool _hasTrailingFunction;
    _Bool _onlyTrailIsCount;
    _Bool _subqueryHasTruePredicate;
}

- (id)generateSQLStringInContext:(id)arg1;
- (void)_createCollectionJoinsForFetchInContext:(id)arg1;
- (void)_setVariableColumn:(id)arg1;
- (void)_createSelectClauseInFetchWithContext:(id)arg1;
- (void)selectDistinct;
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (_Bool)_isKeypathScopedToSubquery:(id)arg1;
- (void)dealloc;
- (id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3;

@end

