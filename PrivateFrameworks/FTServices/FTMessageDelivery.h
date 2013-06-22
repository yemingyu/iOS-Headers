/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "FTMessageQueueDelegate-Protocol.h"

@class FTMessageQueue, IDSBaseMessage, IMTimer, NSArray, NSNumber, NSString;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate>
{
    unsigned int _retries;
    NSNumber *_protocolVersion;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned int _maxConcurrentMessages;
    BOOL _retryInAirplaneMode;
    IMTimer *_timer;
}

+ (id)_errorForTDMessageDeliveryStatus:(int)arg1 userInfo:(id)arg2;
+ (id)alloc;
+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
@property BOOL retryInAirplaneMode; // @synthesize retryInAirplaneMode=_retryInAirplaneMode;
@property unsigned int maxConcurrentMessages; // @synthesize maxConcurrentMessages=_maxConcurrentMessages;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSNumber *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
@property(readonly) int maxMessageSize;
- (void)_setRetryTimer:(double)arg1;
- (void)_clearRetryTimer;
- (void)_retryTimerHit:(id)arg1;
- (BOOL)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)_queue;
@property(readonly) BOOL hasQueuedItems;
@property(readonly) BOOL busy;
@property(readonly) NSArray *allMessages;
@property(readonly) IDSBaseMessage *currentMessage;
@property(readonly) NSArray *queuedMessages;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(int)arg4;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

