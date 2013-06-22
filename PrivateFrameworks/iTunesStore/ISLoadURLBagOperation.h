/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class ISURLBag, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSURLBagContext *_context;
    ISURLBag *_outputBag;
}

@property(readonly) SSURLBagContext *context; // @synthesize context=_context;
- (BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (void)_setOutputURLBag:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (id)uniqueKey;
- (void)run;
@property(readonly) ISURLBag *URLBag;
- (void)dealloc;
- (id)initWithBagContext:(id)arg1;
- (id)init;

@end

