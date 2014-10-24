//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GQUProgressiveHelper : NSObject
{
    const void *mClient;
    CDStruct_ba543347 *mCallBacks;
    unsigned char started;
    struct __CFString *mNumbersSheetUri;
    float mPreviewHeight;
    float mPreviewWidth;
    BOOL mStartedMainHTML;
}

- (BOOL)previewHasStreamedMainHTML;
- (void)displayGenericError:(struct __CFError *)arg1;
- (float)getPreviewHeight;
- (float)getPreviewWidth;
- (void)setPreviewHeight:(float)arg1 andWidth:(float)arg2;
- (struct __CFString *)getNumbersSheetUri;
- (void)setNumbersSheetUri:(struct __CFString *)arg1;
- (void)closeAttachment:(struct __CFURL *)arg1;
- (void)appendDataToAttachment:(struct __CFURL *)arg1 chunk:(struct __CFData *)arg2;
- (struct __CFURL *)createAttachment:(struct __CFString *)arg1 options:(struct __CFDictionary *)arg2;
- (BOOL)progressiveStreamStarted;
- (void)startDataWithOptions:(struct __CFDictionary *)arg1;
- (void)dealloc;
- (id)initWithClient:(const void *)arg1 andCallbacks:(CDStruct_ba543347 *)arg2;

@end
