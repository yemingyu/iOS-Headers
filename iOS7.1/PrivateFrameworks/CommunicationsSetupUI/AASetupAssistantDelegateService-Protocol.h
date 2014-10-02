//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol AASetupAssistantDelegateService
- (void)completeSetupWithResponseParameters:(NSDictionary *)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (NSDictionary *)accountSetupRequestParameters;
- (NSString *)delegateServiceIdentifier;

@optional
- (void)completeEnablingCloudServicesWithHandler:(void (^)(BOOL, NSError *))arg1;
- (void)setBackupEnabled:(BOOL)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (void)setDeviceLocatorEnabled:(BOOL)arg1;
- (void)setCloudServicesEnabled:(BOOL)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (void)verifyAccountWithAppleID:(NSString *)arg1 handler:(void (^)(BOOL, NSError *))arg2;
- (void)setupMailAccount:(NSString *)arg1 password:(NSString *)arg2 handler:(void (^)(BOOL, NSError *))arg3;
- (BOOL)needSetupForMailAccount:(NSString *)arg1;
- (BOOL)canAutoSetupMailAccount:(NSString *)arg1;
- (void)setupOperationFailed;
@end
