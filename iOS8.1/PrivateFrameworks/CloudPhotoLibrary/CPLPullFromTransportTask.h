//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSData, NSObject<OS_dispatch_queue>, NSString;

@interface CPLPullFromTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_initialSyncAnchor;
    id <CPLEngineTransportDownloadBatchTask> _downloadTask;
    NSString *_clientCacheIdentifier;
    BOOL _didBeginTransientRepository;
    BOOL _resetSyncAnchor;
    BOOL _didGetSomeChanges;
}

@property(readonly, nonatomic) BOOL didGetSomeChanges; // @synthesize didGetSomeChanges=_didGetSomeChanges;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)launch;
- (void)_launch;
- (void)_handleNewBatch:(id)arg1 newSyncAnchor:(id)arg2;
- (void)_finishTaskWithErrorAndCleanupIfNecessary:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(retain) id <CPLPullFromTransportTaskDelegate> delegate;

@end
