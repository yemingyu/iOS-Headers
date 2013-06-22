/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseConnection, ML3MusicLibrary, NSString;

@interface ML3UbiquitousDatabase : NSObject
{
    BOOL _needsToPurgeOldEntries;
    ML3MusicLibrary *_musicLibrary;
    NSString *_databasePath;
    ML3DatabaseConnection *_databaseConnection;
}

+ (BOOL)supportsUbiquitousBookmarksInMusicLibrary:(id)arg1;
+ (id)allSchemaSQL;
+ (int)currentUserVersion;
@property(retain) ML3DatabaseConnection *databaseConnection; // @synthesize databaseConnection=_databaseConnection;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void).cxx_destruct;
- (BOOL)_userVersionMatchesSystemVersion;
- (BOOL)_migrateToCurrentUserVersion;
- (int)_fetchDatabaseUserVersion;
- (BOOL)_deleteAndRecreateDatabase;
- (BOOL)_buildDatabaseTablesUsingTransaction:(BOOL)arg1;
- (BOOL)_setupDatabaseConnection;
- (void)dumpUbiquitousMetadata;
- (BOOL)hasLocalChangesToPush;
- (BOOL)hasRemoteChangesToPull;
- (void)updateUbiquitousBookmarkMetadataValuesForChangedTrackWithPersistentID:(long long)arg1;
- (void)applyUbiqiutousBookmarkMetadataToImportedTrack:(id)arg1;
- (void)removeUbiquitousBookmarkMetadataForTrack:(id)arg1;
- (void)insertUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)arg1 propertyValues:(id)arg2 timestamp:(double)arg3;
- (void)purgeOldEntriesIfNecessary;
- (void)_updateUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)arg1 propertyValues:(id)arg2 timestamp:(double)arg3;
- (id)dateToSyncWithUbiquitousStore;
- (void)setDateToSyncWithUbiquitousStore:(id)arg1;
- (id)lastNotificationDomainVersion;
- (void)setLastNotificationDomainVersion:(id)arg1;
- (id)dateLastSynced;
- (void)setDateLastSynced:(id)arg1;
- (id)lastSyncedDomainVersion;
- (void)setLastSyncedDomainVersion:(id)arg1;
- (unsigned long long)lastSyncedEntityRevision;
- (void)setLastSyncedEntityRevision:(unsigned long long)arg1;
- (BOOL)_setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)_valueForDatabaseProperty:(id)arg1;
- (void)performDatabaseWriteTransactionWithBlock:(id)arg1;
- (BOOL)coerceValidDatabase;
- (int)userVersion;
- (BOOL)requiresSchemaOnlyUpdates;
- (BOOL)migrateFromVersion:(int)arg1 outUserVersion:(int *)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 path:(id)arg2 enableWrites:(BOOL)arg3;
- (id)initWithMusicLibrary:(id)arg1;

@end
