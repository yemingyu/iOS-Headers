/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GEOTileServerProxy : NSObject
{
    id <GEOTileServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQ;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *delegateQ; // @synthesize delegateQ=_delegateQ;
@property(nonatomic) id <GEOTileServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)flushPendingWrites;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)cancel:(const struct _GEOTileKey *)arg1;
- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned int)arg3 client:(id)arg4;
- (void)close;
- (void)open;

@end

