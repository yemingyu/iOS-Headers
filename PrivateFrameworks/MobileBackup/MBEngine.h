/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MBAppManager, MBDebugContext, MBDomainManager, MBProperties, MBSettingsContext, NSString;

@interface MBEngine : NSObject
{
    MBSettingsContext *_settingsContext;
    MBDebugContext *_debugContext;
    MBProperties *_properties;
    MBDomainManager *_domainManager;
    MBAppManager *_appManager;
}

+ (id)stringForRestoreType:(int)arg1;
+ (id)stringForEngineMode:(int)arg1;
+ (id)stringForEngineType:(int)arg1;
@property(readonly, nonatomic) MBAppManager *appManager; // @synthesize appManager=_appManager;
@property(readonly, nonatomic) MBDomainManager *domainManager; // @synthesize domainManager=_domainManager;
@property(readonly, nonatomic) MBProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) MBDebugContext *debugContext; // @synthesize debugContext=_debugContext;
@property(readonly, nonatomic) MBSettingsContext *settingsContext; // @synthesize settingsContext=_settingsContext;
- (void)pushAggregateDictionaryTotalFileCount:(long long)arg1 totalFileSize:(long long)arg2 duration:(double)arg3;
- (id)aggregateDictionaryKey:(id)arg1;
- (id)validateRestorePath:(id)arg1;
- (id)validateFile:(id)arg1;
@property(readonly, nonatomic, getter=shouldCommitIfPossible) BOOL commitIfPossible;
@property(readonly, nonatomic, getter=isMigrate) BOOL migrate;
@property(readonly, nonatomic, getter=isBackgroundRestore) BOOL backgroundRestore;
@property(readonly, nonatomic, getter=isForegroundRestore) BOOL foregroundRestore;
@property(readonly, nonatomic) NSString *restoreTypeString;
@property(readonly, nonatomic) int restoreType;
@property(readonly, nonatomic, getter=isRestoreEngine) BOOL restoreEngine;
@property(readonly, nonatomic, getter=isBackupEngine) BOOL backupEngine;
@property(readonly, nonatomic) NSString *engineModeString;
@property(readonly, nonatomic) int engineMode;
@property(readonly, nonatomic, getter=isServiceEngine) BOOL serviceEngine;
@property(readonly, nonatomic, getter=isDriveEngine) BOOL driveEngine;
@property(readonly, nonatomic) NSString *engineTypeString;
@property(readonly, nonatomic) int engineType;
- (void)dealloc;
- (id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3;

@end

