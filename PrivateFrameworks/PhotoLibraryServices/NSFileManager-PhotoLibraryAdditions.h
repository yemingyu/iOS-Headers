/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFileManager.h"

@interface NSFileManager (PhotoLibraryAdditions)
- (BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (BOOL)removeItemsAtPaths:(id)arg1;
- (id)pathsAtDirectory:(id)arg1 withNameFamily:(id)arg2;
- (BOOL)directoryExistsAtPath:(id)arg1;
- (id)tmpFileForVideoTranscodeWithExtension:(id)arg1;
- (id)makeUniqueDirectoryWithPath:(id)arg1;
@end

