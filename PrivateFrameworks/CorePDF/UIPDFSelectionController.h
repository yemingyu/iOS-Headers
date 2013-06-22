/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIPDFPageView;

@interface UIPDFSelectionController : NSObject
{
    UIPDFPageView *_pageView;
    BOOL _rangeMode;
    id <UIPDFSelectionWidget><NSObject> _selectionWidget;
    BOOL _resizingWidget;
    struct CGPoint _selectionFixedPoint;
    struct CGRect _selectionBounds;
    BOOL _preceeds;
    BOOL _isTracking;
    struct CGPoint _adjustedPoint;
    BOOL _hiding;
    long _firstIndex;
    long _lastIndex;
    struct CGPoint _startPoint;
    BOOL _needsLayout;
    BOOL _cancelled;
    BOOL _instantModeIsSuspended;
    BOOL _instantHighlightMode;
}

@property(nonatomic) BOOL instantHighlightMode; // @synthesize instantHighlightMode=_instantHighlightMode;
@property(readonly, nonatomic) struct CGPoint adjustedPoint; // @synthesize adjustedPoint=_adjustedPoint;
@property(readonly, nonatomic) BOOL isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, nonatomic) id <UIPDFSelectionWidget> selectionWidget; // @synthesize selectionWidget=_selectionWidget;
@property(readonly, nonatomic) BOOL rangeMode; // @synthesize rangeMode=_rangeMode;
@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
- (id)description;
- (void)layoutSelections;
@property(readonly, nonatomic) struct CGPoint currentSelectionPoint;
@property(readonly, nonatomic) struct CGPoint initialSelectionPoint;
- (struct CGPoint)selectedPointOffset;
- (void)tracking:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (void)startTracking:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (void)suspendInstantHighlightMode;
- (void)endTracking:(struct CGPoint)arg1;
- (void)tracking:(struct CGPoint)arg1 showMagnifier:(char *)arg2;
- (void)startTracking:(struct CGPoint)arg1 showMagnifier:(char *)arg2;
- (void)startSelectingAt:(struct CGPoint)arg1;
- (BOOL)shouldTrackAt:(struct CGPoint)arg1;
- (void)hideWidget;
- (void)clearSelection;
- (void)extendSelectionToParagraph;
- (void)setSelectionFor:(struct CGPoint)arg1;
- (void)addSelectionWidget:(id)arg1;
- (BOOL)useParagraphMode;
- (void)adjustSelection:(struct CGPoint)arg1;
- (void)selectionShowDelayed:(id)arg1;
- (void)selectionShow:(id)arg1;
- (void)selectionHide:(id)arg1;
- (void)selectionShowToAncestor:(id)arg1;
- (void)selectionHideFromAncestor:(id)arg1;
- (void)dealloc;
- (id)init;

@end

