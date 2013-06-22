/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSOperationQueue, NSURLConnection, NSURLResponse;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate>
{
    NSOperationQueue *_queue;
    id _handler;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_data;
}

- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)sendRequest;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;

@end

