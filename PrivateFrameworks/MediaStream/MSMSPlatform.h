/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MSPlatform-Protocol.h"

@class NSData;

@interface MSMSPlatform : NSObject <MSPlatform>
{
    BOOL _isPerfLoggingEnabled;
    NSData *_developmentPushToken;
    NSData *_productionPushToken;
}

+ (id)thePlatform;
@property(nonatomic) BOOL isPerfLoggingEnabled; // @synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled;
@property(readonly, nonatomic) NSData *productionPushToken; // @synthesize productionPushToken=_productionPushToken;
@property(readonly, nonatomic) NSData *developmentPushToken; // @synthesize developmentPushToken=_developmentPushToken;
- (void).cxx_destruct;
- (id)theDaemon;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (BOOL)shouldEnableNewFeatures;
- (id)pushTokenForPersonID:(id)arg1;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)authTokenForPersonID:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (void)didDetectUnrecoverableCondition;
- (id)socketOptions;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (BOOL)_mayPerformFileTransfer;
- (id)appBundleInfoString;
- (id)OSString;
- (id)hardwareString;
- (id)OSVersion;
- (id)UDID;
- (void)setPushToken:(id)arg1 production:(BOOL)arg2;
- (Class)deletePluginClass;
- (Class)sharingPluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (id)pathMediaStreamDir;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(void *)arg7;
- (void)_rereadDefaults;
- (BOOL)isPerformanceLoggingEnabled;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(void *)arg4;
- (struct __CFString *)_facilityStringForFacility:(int)arg1;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (id)init;

@end

