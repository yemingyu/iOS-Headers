/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol QLPreviewContentDataSource <NSObject>
- (void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(id)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (int)currentSourceUUIDForPreviewContentController:(id)arg1;
@end

