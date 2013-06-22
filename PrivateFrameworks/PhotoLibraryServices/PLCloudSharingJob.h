/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob
{
    PLPhotoLibrary *_photoLibrary;
    NSString *_archiveFilename;
}

+ (void)deleteAllRecoveryEvents;
+ (id)recoveredEventsIgnoringEvent:(id)arg1;
+ (id)archiveDirectory;
- (void)dealloc;
- (void)runAndWaitForMessageToBeSent;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;
- (BOOL)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *transientPhotoLibrary;
- (id)serialJobQueue;

@end

