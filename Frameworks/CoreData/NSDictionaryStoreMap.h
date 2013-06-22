/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPersistentStoreMap.h>

@class NSMutableDictionary;

@interface NSDictionaryStoreMap : NSPersistentStoreMap
{
    NSMutableDictionary *_theMap;
}

+ (void)initialize;
- (id)_archivedData;
- (id)handleFetchRequest:(id)arg1;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)_nodeFromObject:(id)arg1 objectIDMap:(id)arg2;
- (void)dealloc;
- (void)saveToPath:(id)arg1;
- (id)_theDictionary;
- (id)initWithStore:(id)arg1 fromArchivedData:(id)arg2;
- (id)initWithStore:(id)arg1 fromPath:(id)arg2;
- (id)initWithStore:(id)arg1;

@end

