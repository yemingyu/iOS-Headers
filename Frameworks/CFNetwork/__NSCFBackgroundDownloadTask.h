/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask
{
    BOOL _finished;
}

@property BOOL finished; // @synthesize finished=_finished;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (BOOL)isKindOfClass:(Class)arg1;

@end

