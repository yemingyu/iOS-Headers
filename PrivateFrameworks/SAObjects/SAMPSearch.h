/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, NSURL;

@interface SAMPSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL strict;
@property(copy, nonatomic) NSString *searchValue;
@property(copy, nonatomic) NSArray *searchTypes;
@property(copy, nonatomic) NSArray *searchProperties;
@property(nonatomic) int maxResults;
@property(copy, nonatomic) NSArray *constraints;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

