/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFetchRequest, NSManagedObjectContext, NSPersistentStore, NSSQLEntity, NSSQLModel, NSSQLRowCache, NSSQLStatement;

@interface _PFFetchPlanHeader : NSObject
{
    NSFetchRequest *fetch_request;
    NSSQLStatement *cached_sql_statement;
    unsigned int requested_batch_size;
    NSPersistentStore *sql_core;
    NSSQLModel *sql_model;
    NSSQLEntity *statement_entity;
    NSManagedObjectContext *current_context;
    NSSQLRowCache *row_cache;
    void *entity_for_ek_funptr;
    struct {
        unsigned int principal_entity_has_subentities:1;
        unsigned int fetch_only_primary_keys:1;
        unsigned int fetch_results_style:3;
        unsigned int use_clean_memory:1;
        unsigned int _reserved:26;
    } flags;
}

@end

