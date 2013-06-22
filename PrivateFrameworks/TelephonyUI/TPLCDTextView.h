/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, TPLCDTextViewScrollingView, UIColor, UIFont, UIFrameAnimation;

@interface TPLCDTextView : UIView
{
    NSString *_text;
    UIFont *_font;
    UIColor *_shadowColor;
    UIColor *_textColor;
    TPLCDTextViewScrollingView *_scrollingView;
    float _fontSize;
    struct CGRect _textRect;
    UIFrameAnimation *_animation;
    id _delegate;
    float _minFontSize;
    unsigned int _textRectIsValid:1;
    unsigned int _centerText:1;
    unsigned int _animates:1;
    unsigned int _isAnimating:1;
    unsigned int _leftTruncates:1;
}

+ (float)defaultMinimumFontSize;
- (void)setDelegate:(id)arg1;
- (void)resetAnimation;
- (BOOL)animates;
- (void)stopAnimating;
- (void)_finishedScrolling;
- (void)startAnimating;
- (void)_startScrolling;
- (void)setAnimatesIfTruncated:(BOOL)arg1;
- (void)_setupForAnimationIfNecessary;
- (void)_scheduleStartScrolling;
- (void)_tearDownAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)_drawTextInRect:(struct CGRect)arg1 verticallyOffset:(BOOL)arg2;
- (struct CGSize)sizeToFit;
- (id)text;
- (void)setText:(id)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setLCDTextFont:(id)arg1;
- (void)setLeftTruncatesText:(BOOL)arg1;
- (void)setCenterText:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)textRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_automationID;

@end

