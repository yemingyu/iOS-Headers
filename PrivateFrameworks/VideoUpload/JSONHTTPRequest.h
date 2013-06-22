/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSData, NSDictionary, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, OAURLRequestSigner;

@interface JSONHTTPRequest : NSObject <NSURLConnectionDelegate>
{
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    NSData *_overridePostBody;
    id <JSONHTTPRequestDelegate> _delegate;
    BOOL _receivedValidResponse;
    OAURLRequestSigner *_signer;
    NSString *_HTTPRequestBoundary;
    BOOL _signsMultipartPOSTData;
    BOOL _allowsCellularAccess;
    NSDictionary *_getParams;
    NSDictionary *_postParams;
    NSDictionary *_unsignedPostParams;
    NSHTTPURLResponse *_response;
    int _HTTPMethod;
    int _responseType;
}

+ (id)encodedStringForParameterDictionary:(id)arg1;
@property(nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) int HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(nonatomic) BOOL signsMultipartPOSTData; // @synthesize signsMultipartPOSTData=_signsMultipartPOSTData;
@property(retain, nonatomic) NSDictionary *unsignedPostParams; // @synthesize unsignedPostParams=_unsignedPostParams;
@property(retain, nonatomic) NSDictionary *postParams; // @synthesize postParams=_postParams;
@property(retain, nonatomic) NSDictionary *getParams; // @synthesize getParams=_getParams;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)start;
- (void)setOverridePostBody:(id)arg1;
- (id)_multipartParamData:(id)arg1;
- (void)setHTTPHeader:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)HTTPRequestBoundary;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 signer:(id)arg3;

@end

