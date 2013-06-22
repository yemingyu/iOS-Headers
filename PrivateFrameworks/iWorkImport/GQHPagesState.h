/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQHState.h>

#import "GQWrapPointGenerator-Protocol.h"

@class GQDSStyle, GQDWPContainerHint, GQHStyle, GQWrapPointSet;

@interface GQHPagesState : GQHState <GQWrapPointGenerator>
{
    struct __CFDictionary *mFloatingDrawables;
    int mMode;
    struct __CFDictionary *mHeaders;
    struct __CFDictionary *mFooters;
    struct __CFArray *mSectionStyles;
    struct __CFDictionary *mPageWrapPointsMap;
    int mCurrentPageIndex;
    int mStartPageAt;
    int mStartPageAtValueChangedAtPageIndex;
    GQHStyle *mCurrentLayoutStyle;
    GQHStyle *mCurrentParagraphStyle;
    GQDSStyle *mCurrentBaseParagraphStyle;
    struct __CFString *mCurrentCachedParagraphClass;
    GQHStyle *mCurrentSpanStyle;
    GQDSStyle *mCurrentBaseSpanStyle;
    struct __CFString *mCurrentCachedSpanClass;
    GQWrapPointSet *mCurrentWrapPointSet;
    struct CGRect mLastFrame;
    BOOL mMappingFloatingDrawables;
    BOOL mStartedPage;
    BOOL mStartedSection;
    BOOL mDidInsertPageHeader;
    BOOL mDidFindContainerHint;
    GQDWPContainerHint *mLastInsertedContainerHint;
    struct __CFArray *mAttachmentPositions;
    long mAttachmentIdCounter;
    long mFirstAttachmentId;
    BOOL mSplitNextAttachment;
    GQDSStyle *mCurrentSectionStyle;
    BOOL mHasLayoutDrawables;
    int mCurrentHintPageIndex;
    int mCurrentHintColumnIndex;
    BOOL mIsMappingHeadersFooters;
    int mHeaderFooterPageNumber;
    struct __CFDictionary *mDrawablePagesOrderToCssZOrderClassMap;
    struct CGSize mPageSize;
    struct __CFArray *mTocHrefStack;
    BOOL mCurrentFrameHasSandbagFloats;
    int mProgressiveIndex;
}

- (id).cxx_construct;
- (BOOL)allowInlineWrap;
- (BOOL)needAbsolutelyPositionedTables;
- (void)endSection;
- (void)popTocHref;
- (void)pushTocHref:(struct __CFString *)arg1;
- (unsigned int)tocDepth;
- (void)setPageSize:(struct CGSize)arg1;
- (struct CGSize)pageSize;
- (struct __CFDictionary *)pagesOrderToCssZOrderClassMapDictionary;
- (struct __CFString *)cssZOrderClassForDrawablePagesOrder:(int)arg1;
- (struct __CFString *)cssZOrderClassForDrawable:(id)arg1;
- (void)addStyle:(struct __CFString *)arg1 className:(struct __CFString *)arg2 srcStyle:(id)arg3;
- (void)setOutlineStyleType:(int)arg1;
- (void)setOutlineLevel:(int)arg1;
- (BOOL)useOutline;
- (int)pageNumberForHeaderOrFooter;
- (BOOL)isMappingHeadersFooters;
- (void)setIsMappingHeadersFooters:(BOOL)arg1;
- (BOOL)hasLayoutDrawables;
- (void)setHasLayoutDrawables:(BOOL)arg1;
- (void)inContent;
- (void)clearWrapPoints;
- (vector_dadce35e *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const set_a2165b2d *)wrapPoints;
- (void)addWrapPoint:(id)arg1;
- (void)endWrapPointSet;
- (void)beginWrapPointSet;
- (void)resolveHeaderName:(const struct __CFString **)arg1 footerName:(const struct __CFString **)arg2;
- (void)handleContainerHint:(id)arg1;
- (void)insertAttachmentPlaceholder;
- (long)firstAttachmentId;
- (long)nextAttachmentId;
- (long)currentAttachmentId;
- (double)moveToNextAttachmentPosition;
- (double)currentAttachmentPosition;
- (void)addAttachmentPosition:(double)arg1;
- (void)finishedWithSplitAttachment;
- (_Bool)splitNextAttachment;
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned int)arg1;
- (void)setDidFindContainerHint:(BOOL)arg1;
- (void)setDidInsertPageHeader:(BOOL)arg1;
- (void)setCurrentSpanStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;
- (void)setCurrentParagraphStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;
- (void)setCurrentLayoutStyle:(id)arg1;
- (void)setCurrentPageIndex:(int)arg1;
- (int)currentPageIndex;
- (void)overrideSectionStyle:(id)arg1;
- (CDStruct_dff5684f)rangeForSectionStyleAtPageIndex:(int)arg1;
- (id)sectionStyleForPageIndex:(int)arg1;
- (void)addSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3;
- (void)setFooters:(struct __CFArray *)arg1;
- (id)footerForName:(struct __CFString *)arg1;
- (void)setHeaders:(struct __CFArray *)arg1;
- (id)headerForName:(struct __CFString *)arg1;
- (void)setMode:(int)arg1;
- (int)mode;
- (struct __CFArray *)pageDrawables:(int)arg1;
- (void)clearFloatingDrawables;
- (id)drawableAtIndex:(int)arg1;
- (void)addFloatingDrawable:(id)arg1;
- (int)floatingDrawablesCount;
- (void)dealloc;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize)arg2;
- (id)sectionStyleRunForRunBeforePageIndex:(int)arg1;
- (void)openStateLayoutElementsAndStyles;
- (void)closeStateLayoutElementsAndStyles;
- (void)startLayout;
- (void)startSection;
- (id)wrapPointSetForPage:(int)arg1;

@end

