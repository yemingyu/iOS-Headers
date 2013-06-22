/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CoreDAVAccountInfoProvider-Protocol.h"

@class NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider>
{
    NSString *_scheme;
    NSString *_host;
    NSString *_serverRoot;
    int _port;
    NSString *_user;
    NSString *_password;
    NSData *_identityPersist;
    NSURL *_principalURL;
    NSString *_accountID;
    NSDictionary *_serverHeaders;
    NSSet *_serverComplianceClasses;
    NSString *_userAgentHeader;
    BOOL _shouldFailAllTasks;
    BOOL _started;
    BOOL _success;
    NSError *_error;
    id <CoreDAVAccountInfoProvider> _backingAccountInfoProvider;
}

@property(retain) NSString *userAgentHeader; // @synthesize userAgentHeader=_userAgentHeader;
@property(retain) NSSet *serverComplianceClasses; // @synthesize serverComplianceClasses=_serverComplianceClasses;
@property(retain) NSDictionary *serverHeaders; // @synthesize serverHeaders=_serverHeaders;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL success; // @synthesize success=_success;
@property BOOL started; // @synthesize started=_started;
@property(retain) id <CoreDAVAccountInfoProvider> backingAccountInfoProvider; // @synthesize backingAccountInfoProvider=_backingAccountInfoProvider;
@property BOOL shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
@property(retain) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(retain) NSData *identityPersist; // @synthesize identityPersist=_identityPersist;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *user; // @synthesize user=_user;
@property(retain) NSString *serverRoot; // @synthesize serverRoot=_serverRoot;
@property int port; // @synthesize port=_port;
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain) NSString *scheme; // @synthesize scheme=_scheme;
- (BOOL)shouldUseOpportunisticSockets;
- (struct __CFURLStorageSession *)copyStorageSession;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)handleCertificateError:(id)arg1;
- (BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleTrustChallenge:(id)arg1;
- (id)oauthToken;
- (id)additionalHeaderValues;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg1;
- (id)url;
- (id)description;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1;

@end

