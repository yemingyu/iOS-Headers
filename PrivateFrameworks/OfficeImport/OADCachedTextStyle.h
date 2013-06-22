/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface OADCachedTextStyle : NSObject
{
    struct OADCachedTextStyleData mData;
    unsigned int mHash;
}

- (id).cxx_construct;
- (void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2;
- (void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2;
- (id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

