/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSURLConnection, NSURLRequest;

@interface RUIHTTPRequest : NSObject <NSURLConnectionDataDelegate>
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    BOOL _invalidResponse;
    id _delegate;
}

+ (id)safeBaseURL;
+ (BOOL)anyRequestLoading;
+ (id)nonSecureConnectionNotAllowedError;
+ (id)invalidResponseError;
+ (id)serviceUnavailableError;
- (BOOL)receivedValidResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)didParseData;
- (void)willParseData;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)request;
- (void)loadStatusChanged;
- (BOOL)isLoading;
- (void)cancel;
- (void)loadRequest:(id)arg1;
- (BOOL)loggingEnabled;
- (void)_finishedLoading;
- (void)_startedLoading;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

