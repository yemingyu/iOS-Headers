/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSURL.h"

@interface NSURL (ISAdditions)
+ (id)unescapedStringForString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(BOOL)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(BOOL)arg2;
- (void)enumerateQueryWithBlock:(id)arg1;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)schemeSwizzledURL;
- (BOOL)isSafeExternalURL;
- (id)urlBySettingQueryStringDictionary:(id)arg1;
- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)arg1;
@end

