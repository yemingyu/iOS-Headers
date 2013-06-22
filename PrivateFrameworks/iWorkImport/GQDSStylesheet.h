/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GQDRoot;

@interface GQDSStylesheet : NSObject
{
    GQDRoot *mRoot;
    GQDSStylesheet *mParent;
    struct __CFDictionary *mIdentifiedStyles;
    struct __CFArray *mStylesNeedingParentResolutionInParent;
    struct __CFArray *mStylesNeedingParentResolution;
}

- (struct __CFArray *)retainedArrayOfIdentifiedStyles;
- (void)resolveStyleParents;
- (void)addStyle:(id)arg1 needingParentResolution:(const char *)arg2 resolveInParent:(BOOL)arg3;
- (id)styleWithXmlUid:(const char *)arg1;
- (id)styleWithIdentifier:(const char *)arg1;
- (BOOL)addStyle:(id)arg1 withOwnedXmlUid:(char *)arg2;
- (void)addStyle:(id)arg1 withOwnedIdentifier:(char *)arg2;
- (id)parent;
- (void)dealloc;
- (id)initWithRoot:(id)arg1;

@end

