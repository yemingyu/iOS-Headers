/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface CKMessageComposition : NSObject
{
}

+ (id)messageCompositionFromFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)_createMessagePartFromResourceDictionary:(id)arg1 identifier:(id)arg2 relativeToPath:(id)arg3 version:(int)arg4;
+ (void)deleteFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)newComposition;
+ (id)newCompositionForText:(id)arg1 subject:(id)arg2;
+ (id)newCompositionForText:(id)arg1;
- (void)writeToFileWithPrefix:(id)arg1 path:(id)arg2;
@property(readonly, nonatomic) NSArray *messageParts;
@property(readonly, nonatomic) BOOL isTextOnly;
@property(readonly, nonatomic) NSString *textString;
@property(readonly, nonatomic) BOOL hasContent;
@property(readonly, nonatomic) BOOL hasNonwhiteSpaceContent;
@property(copy, nonatomic) NSString *subject;
@property(retain, nonatomic) NSDictionary *resources;
@property(copy, nonatomic) NSString *markupString;

@end

