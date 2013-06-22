/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying>
{
    AVAsynchronousVideoCompositionRequestInternal *_internal;
}

- (void)finishCancelledRequest;
- (void)finishWithError:(id)arg1;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)sourceFrameByTrackID:(int)arg1;
@property(readonly, nonatomic) id <AVVideoCompositionInstruction> videoCompositionInstruction;
@property(readonly, nonatomic) NSArray *sourceTrackIDs;
@property(readonly, nonatomic) CDStruct_1b6d18a9 compositionTime;
@property(readonly, nonatomic) AVVideoCompositionRenderContext *renderContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_willDeallocOrFinalize;
- (struct OpaqueFigVideoCompositorFrame *)compositionFrame;
- (id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg3 atTime:(CDStruct_1b6d18a9)arg4 usingSources:(id)arg5 instruction:(id)arg6;

@end

