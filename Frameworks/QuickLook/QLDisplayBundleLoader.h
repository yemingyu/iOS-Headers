/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject
{
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;
- (id)copyDisplayBundleWithPreviewItem:(id)arg1 displayBundleIdentifier:(id)arg2;
- (Class)displayBundleClassForDocumentType:(id)arg1;
- (Class)loadDisplayBundle:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_lookForDisplayBundles;

@end

