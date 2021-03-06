//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCompanionAdvertiserDelegate.h"

@class LSUserActivityManager, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL, NSUUID, SFCompanionAdvertiser;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate>
{
    LSUserActivityManager *_manager;
    NSMutableDictionary *_userInfo;
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    id <LSUserActivityDelegate> _delegate;
    SFCompanionAdvertiser *_advertiser;
    SFCompanionAdvertiser *_resumerAdvertiser;
    double _lastSaveTime;
    BOOL _saveScheduled;
    BOOL _createsNewUUIDIfSaved;
    NSError *_decodeUserInfoError;
    BOOL _needsSave;
    BOOL _dirty;
    BOOL _sendToServerPending;
    BOOL _inWillSaveCallback;
    BOOL _supportsContinuationStreams;
    BOOL _forceImmediateSendToServer;
    BOOL _canCreateStreams;
    NSString *_typeIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned int _suggestedActionType;
    NSDate *_lastActivityDate;
    NSDictionary *_options;
    NSData *_streamsData;
}

+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)userActivityFromUUID:(id)arg1 withError:(id *)arg2;
+ (id)userActivity;
+ (BOOL)userActivityContinuationSupported;
+ (id)suggestedActionOfType:(unsigned int)arg1;
+ (BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned int)arg2 throwIfFailed:(BOOL)arg3;
+ (id)allowedWebpageURLSchemes;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned int)arg1 withOptions:(id)arg2 block:(CDUnknownBlockType)arg3;
@property BOOL canCreateStreams; // @synthesize canCreateStreams=_canCreateStreams;
@property(copy) NSData *streamsData; // @synthesize streamsData=_streamsData;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSDate *lastActivityDate; // @synthesize lastActivityDate=_lastActivityDate;
@property(readonly) unsigned int suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property(copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(retain) NSError *decodeUserInfoError; // @synthesize decodeUserInfoError=_decodeUserInfoError;
@property BOOL createsNewUUIDIfSaved; // @synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved;
@property BOOL forceImmediateSendToServer; // @synthesize forceImmediateSendToServer=_forceImmediateSendToServer;
@property BOOL sendToServerPending; // @synthesize sendToServerPending=_sendToServerPending;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) LSUserActivityManager *manager; // @dynamic manager;
- (id)decodeUserInfo:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)encodeUserInfo:(id)arg1;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (void)invalidate;
- (void)becomeCurrent;
- (void)getContinuationStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property id <LSUserActivityDelegate> delegate; // @dynamic delegate;
@property BOOL supportsContinuationStreams; // @dynamic supportsContinuationStreams;
@property BOOL needsSave; // @dynamic needsSave;
@property BOOL dirty; // @dynamic dirty;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
@property(copy) NSURL *webpageURL; // @dynamic webpageURL;
@property(copy) NSDictionary *userInfo; // @dynamic userInfo;
@property(copy) NSString *title; // @dynamic title;
- (void)dealloc;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)init;
- (id)resourceURLForKey:(id)arg1;
- (void)removeResourceURL:(id)arg1;
- (id)addResourceURL:(id)arg1;
- (void)setResourceURLs:(id)arg1;
- (id)resourceURLs;
- (void)remove;
- (void)save;
@property(getter=isActive) BOOL active;
@property(copy, getter=activityPayload, setter=setActivityPayload:) NSDictionary *activityPayloadDictionary;
- (void)removeActivityPayloadForKey:(id)arg1;
- (void)updateActivityPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)removeFrameworkPayloadForKey:(id)arg1;
- (void)removeFrameworkPayloadValueForKey:(id)arg1;
- (void)updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
@property(copy) NSDictionary *frameworkPayload;
- (void)removeUserInfoValueForKey:(id)arg1;
- (void)updateUserInfoValue:(id)arg1 forKey:(id)arg2;
@property(copy) NSString *owningBundleIdentifier; // @dynamic owningBundleIdentifier;
- (id)initWithSuggestedActionType:(unsigned int)arg1 options:(id)arg2;
- (id)initWithUUID:(id)arg1;
@property(copy) NSURL *webPageURL; // @dynamic webPageURL;
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)sendUserActivityInfoToLSUserActivityd:(BOOL)arg1 onAsyncQueue:(BOOL)arg2;
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg1 clearDirty:(BOOL)arg2;
- (id)userActivityInfoForSelf;
- (void)scheduleSendUserActivityInfoToLSUserActivityd;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeUserActivity;
- (void)willSynchronizeUserActivityWithHandler:(CDUnknownBlockType)arg1;
- (void)tellDaemonAboutNewLSUserActivity;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;

// Remaining properties
@property(copy) NSDictionary *activityPayload;
@property(copy, getter=frameworkPayload, setter=setFrameworkPayload:) NSDictionary *frameworkPayloadDictionary;
@property(readonly) Class superclass;

@end

