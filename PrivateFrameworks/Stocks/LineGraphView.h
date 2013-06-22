/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class TintedView, UIImage;

@interface LineGraphView : UIView
{
    BOOL _showingTintedLine;
    UIImage *_lineImage;
    UIView *_tintedLineClipView;
    TintedView *_tintedLineView;
}

- (void).cxx_destruct;
- (void)resizeSelectedLineClipViewWithLeftX:(float)arg1 rightX:(float)arg2;
- (void)setShowingSelectedLine:(BOOL)arg1;
- (void)setGraphImageSet:(id)arg1;
- (void)setSelectedLineImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

