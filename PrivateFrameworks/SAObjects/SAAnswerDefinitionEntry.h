/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSArray, NSString;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>
{
}

+ (id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)definitionEntry;
@property(copy, nonatomic) NSArray *variations;
@property(copy, nonatomic) NSArray *examples;
@property(copy, nonatomic) NSString *definition;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

