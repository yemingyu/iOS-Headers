/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, WDDocument, WDListDefinition;

@interface WDList : NSObject
{
    NSMutableArray *mLevelOverrides;
    WDDocument *mDocument;
    unsigned int mIndex;
    WDListDefinition *mListDefinition;
}

- (id)initWithDocument:(id)arg1 listDefinition:(id)arg2;
- (long)listId;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (id)levelOverrides;
- (id)addLevelOverride;
- (id)levelOverrideAt:(unsigned int)arg1;
- (unsigned int)levelOverrideCount;
- (id)listDefinition;
- (id)document;
- (void)dealloc;

@end

