//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSHTTPURLResponse, NSMutableData, NSURLConnection, NSURLRequest;

@interface WDSecureConnectionManager : NSObject <NSURLConnectionDataDelegate>
{
    NSURLConnection *_connection;
    NSMutableData *_data;
    NSHTTPURLResponse *_response;
    BOOL _started;
    BOOL _canceled;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSURLRequest *_request;
}

@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_reallySendFailure:(id)arg1;
- (void)_reallySendSuccess;
- (void)_sendFailure:(id)arg1;
- (void)_sendSuccess;
- (void)cancel;
- (void)start;
- (void)dealloc;

@end

