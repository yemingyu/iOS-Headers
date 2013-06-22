/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand-Protocol.h"

@class NSString;

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)updateReadingStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)updateReadingState;
@property(nonatomic) int updatedItemIndex;
@property(nonatomic) int updatedGroupIndex;
@property(copy, nonatomic) NSString *readingStateId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

