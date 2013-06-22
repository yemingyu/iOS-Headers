/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem
{
    AVChapterMetadataItemInternal *_privChapter;
}

- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)_ensureValueLoadedSync;
- (void)_setValueStatus:(int)arg1 figErrorCode:(long)arg2;
- (int)_valueStatus;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (long)_chapterIndex;
- (long)_chapterGroupIndex;
- (id)extraAttributes;
- (void)_takeValueFrom:(id)arg1;
- (id)value;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)time;
- (id)locale;
- (id)keySpace;
- (id)commonKey;
- (id)key;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long)arg2 chapterIndex:(long)arg3 chapterType:(id)arg4 locale:(id)arg5 time:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7;
- (id)init;

@end

