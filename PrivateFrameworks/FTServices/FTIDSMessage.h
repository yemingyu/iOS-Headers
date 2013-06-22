/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDSBaseMessage.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface FTIDSMessage : IDSBaseMessage <NSCopying>
{
    NSData *_pushCert;
    struct __SecKey *_identityKey;
    NSData *_identityCert;
    struct __SecKey *_identityPublicKey;
    struct __SecKey *_pushKey;
    struct __SecKey *_pushPublicKey;
    NSData *_pushToken;
    NSString *_selfURI;
    NSMutableArray *_certDataArray;
    NSMutableArray *_publicKeyArray;
    NSMutableArray *_privateKeyArray;
    NSMutableArray *_userIDArray;
}

@property(copy, nonatomic) NSMutableArray *userIDArray; // @synthesize userIDArray=_userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray; // @synthesize privateKeyArray=_privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray; // @synthesize publicKeyArray=_publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray; // @synthesize certDataArray=_certDataArray;
@property(copy, nonatomic) NSString *selfURI; // @synthesize selfURI=_selfURI;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(nonatomic) struct __SecKey *identityPublicKey; // @synthesize identityPublicKey=_identityPublicKey;
@property(copy, nonatomic) NSData *IDCertificate; // @synthesize IDCertificate=_identityCert;
@property(nonatomic) struct __SecKey *identityPrivateKey; // @synthesize identityPrivateKey=_identityKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (int)command;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBagKey;
- (void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(struct __SecKey *)arg3 publicKey:(struct __SecKey *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

