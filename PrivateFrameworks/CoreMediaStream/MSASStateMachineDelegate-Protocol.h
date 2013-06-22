/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class MSASStateMachine;

@protocol MSASStateMachineDelegate
@property(nonatomic) MSASStateMachine *MSASCounterpartInstance;
- (void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(id)arg1;
- (void)MSASStateMachine:(id)arg1 didFireScheduledEvent:(id)arg2 forAssetCollectionGUID:(id)arg3 albumGUID:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishAddingComment:(id)arg2 toAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishRemovingSharingRelationship:(id)arg2 fromOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishAddingSharingRelationships:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishAddingAssetCollection:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didRequestAssetsForAddingAssetCollections:(id)arg2 inAlbum:(id)arg3 specifications:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishUpdatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishCreatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingComment:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;
- (BOOL)MSASStateMachine:(id)arg1 didQueryIsAssetCollectionWithGUIDInModel:(id)arg2;
- (id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (id)MSASStateMachineDidRequestAlbumWithGUID:(id)arg1;
- (id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAssetCollection:(id)arg2 inAlbum:(id)arg3 assetStateCtag:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFindAlbumSyncedState:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindAssetCollectionSyncedState:(id)arg2 forAssetCollectionGUID:(id)arg3 inAlbum:(id)arg4 assetCollectionStateCtag:(id)arg5 info:(id)arg6;
- (void)MSASStateMachine:(id)arg1 willCheckForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForCommentChangesInAssetCollection:(id)arg2 inAlbum:(id)arg3 largestCommentID:(int)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFindCommentChanges:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 willCheckForCommentChangesInAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishUnsubscribingFromAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishSubscribingToAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishUpdatingAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 willUpdateAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishGettingAccessControls:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFindNewURLString:(id)arg2 forAlbumWithGUID:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbums:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindSharingRelationshipChanges:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindAssetCollectionChanges:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindResetSyncForAlbum:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 willCheckForUpdatesInAlbum:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindAccessControlChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindAlbumChanges:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 albumChanges:(id)arg3 accessControlChangesForAlbumGUIDS:(id)arg4 info:(id)arg5;
- (void)MSASStateMachineDidFindGlobalResetSync:(id)arg1 info:(id)arg2;
- (void)MSASStateMachineDidStart:(id)arg1;
@end

