/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADFill, OADStroke, OADTableCell3DProperties;

@interface OADTableCellProperties : NSObject
{
    OADStroke *mLeftStroke;
    BOOL mIsLeftStrokeOverridden;
    OADStroke *mRightStroke;
    BOOL mIsRightStrokeOverridden;
    OADStroke *mTopStroke;
    BOOL mIsTopStrokeOverridden;
    OADStroke *mBottomStroke;
    BOOL mIsBottomStrokeOverridden;
    OADStroke *mTopLeftToBottomRightStroke;
    BOOL mIsTopLeftToBottomRightStrokeOverridden;
    OADStroke *mBottomLeftToTopRightStroke;
    BOOL mIsBottomLeftToTopRightStrokeOverridden;
    OADTableCell3DProperties *mThreeDProperties;
    BOOL mIsThreeDPropertiesOverridden;
    OADFill *mFill;
    BOOL mIsFillOverridden;
    float mLeftMargin;
    BOOL mIsLeftMarginOverridden;
    float mRightMargin;
    BOOL mIsRightMarginOverridden;
    float mTopMargin;
    BOOL mIsTopMarginOverridden;
    float mBottomMargin;
    BOOL mIsBottomMarginOverridden;
    int mTextFlow;
    BOOL mIsTextFlowOverridden;
    int mTextAnchor;
    BOOL mIsTextAnchorOverridden;
    BOOL mTextAnchorCenter;
    BOOL mIsTextAnchorCenterOverridden;
    int mTextHorizontalOverflow;
    BOOL mIsTextHorizontalOverflowOverridden;
}

- (BOOL)isTextHorizontalOverflowOverridden;
- (void)setTextHorizontalOverflow:(int)arg1;
- (int)textHorizontalOverflow;
- (BOOL)isTextAnchorCenterOverridden;
- (void)setTextAnchorCenter:(BOOL)arg1;
- (BOOL)textAnchorCenter;
- (BOOL)isTextAnchorOverridden;
- (void)setTextAnchor:(int)arg1;
- (int)textAnchor;
- (BOOL)isTextFlowOverridden;
- (void)setTextFlow:(int)arg1;
- (int)textFlow;
- (BOOL)isBottomMarginOverridden;
- (void)setBottomMargin:(float)arg1;
- (float)bottomMargin;
- (BOOL)isTopMarginOverridden;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;
- (BOOL)isRightMarginOverridden;
- (void)setRightMargin:(float)arg1;
- (float)rightMargin;
- (BOOL)isLeftMarginOverridden;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (BOOL)isFillOverridden;
- (void)setFill:(id)arg1;
- (id)fill;
- (BOOL)isThreeDPropertiesOverridden;
- (void)setThreeDProperties:(id)arg1;
- (id)threeDProperties;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (BOOL)isBottomLeftToTopRightStrokeOverridden;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (id)bottomLeftToTopRightStroke;
- (BOOL)isTopLeftToBottomRightStrokeOverridden;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (id)topLeftToBottomRightStroke;
- (BOOL)isBottomStrokeOverridden;
- (void)setBottomStroke:(id)arg1;
- (id)bottomStroke;
- (BOOL)isTopStrokeOverridden;
- (void)setTopStroke:(id)arg1;
- (id)topStroke;
- (BOOL)isRightStrokeOverridden;
- (void)setRightStroke:(id)arg1;
- (id)rightStroke;
- (BOOL)isLeftStrokeOverridden;
- (void)setLeftStroke:(id)arg1;
- (id)leftStroke;
- (id)stroke:(int)arg1;
- (void)dealloc;

@end

