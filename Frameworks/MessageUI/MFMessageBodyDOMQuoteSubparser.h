/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFMessageBodySubparser.h>

@class DOMRange, NSMutableArray;

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser
{
    id _foundDedentedAttributionRangeBlock;
    id _foundTrailingEmptyQuoteRangeBlock;
    id <MFMessageBodyElement_Private> _lastUnindentedElement;
    id <MFMessageBodyElement_Private> _lastUnindentedAttributionHint;
    NSMutableArray *_unindentedSiblingNodes;
    unsigned int _unindentedSiblingGap;
    DOMRange *_trailingEmptyQuoteRange;
    unsigned int _trailingEmptyQuoteLevel;
}

- (BOOL)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(id)arg2;
- (void)setFoundTrailingEmptyQuoteRangeBlock:(id)arg1;
- (void)setFoundDedentedAttributionRangeBlock:(id)arg1;
- (void)copyBlocks;
- (void)dealloc;

@end

