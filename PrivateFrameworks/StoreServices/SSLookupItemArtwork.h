/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject
{
    NSDictionary *_dictionary;
}

@property(readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_dictionary;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) int height;
- (void)dealloc;
- (id)initWithLookupDictionary:(id)arg1;

@end

