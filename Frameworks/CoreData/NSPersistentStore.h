/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface NSPersistentStore : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_configurationName;
    NSURL *_url;
    NSDictionary *_options;
    id *_oidFactories;
    id _defaultFaultHandler;
    struct _objectStoreFlags {
        unsigned int isReadOnly:1;
        unsigned int cleanOnRemove:1;
        unsigned int isMDDirty:1;
        unsigned int _RESERVED:29;
    } _flags;
    void *_temporaryIDClass;
    id _externalRecordsMonitor;
    void *_reserved3;
}

+ (Class)migrationManagerClass;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (BOOL)doURLStuff:(id)arg1 createdStubFile:(char *)arg2 readOnly:(char *)arg3 error:(id *)arg4 options:(id)arg5;
+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;
- (BOOL)loadMetadata:(id *)arg1;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (id)options;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (id)type;
- (void)setMetadata:(id)arg1;
- (id)_rawMetadata__;
- (id)metadata;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)persistentStoreCoordinator;
- (id)configurationName;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)isReadOnly;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (void)_didLoadMetadata;
- (void)_setMetadataDirty:(BOOL)arg1;
- (BOOL)_isMetadataDirty;
- (void)_updateMetadata;
- (id)_defaultMetadata;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id *)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (void)doFilesystemCleanupOnRemove:(BOOL)arg1;
- (void)_preflightCrossCheck;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (BOOL)_unload:(id *)arg1;
- (BOOL)load:(id *)arg1;
- (Class)objectIDClassForEntity:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (Class)faultHandlerClass;
- (id)faultHandler;
- (Class)_objectIDClass;

@end

