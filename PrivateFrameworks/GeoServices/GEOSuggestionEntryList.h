/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

@interface GEOSuggestionEntryList : PBCodable
{
    NSMutableArray *_suggestionEntries;
}

@property(retain, nonatomic) NSMutableArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)suggestionEntriesAtIndex:(unsigned int)arg1;
- (unsigned int)suggestionEntriesCount;
- (void)addSuggestionEntries:(id)arg1;
- (void)clearSuggestionEntries;
- (void)dealloc;

@end

