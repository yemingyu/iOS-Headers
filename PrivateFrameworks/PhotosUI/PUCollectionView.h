/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, PUAutoScroller, UILongPressGestureRecognizer, UIView;

@interface PUCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UILongPressGestureRecognizer *_dragGestureRecognizer;
    NSIndexPath *_dragSourceIndexPath;
    NSIndexPath *_dragTargetIndexPath;
    UIView *_draggedView;
    struct CGPoint _draggedViewCenterOffset;
    PUAutoScroller *_autoScroller;
    id <PUCollectionViewReorderDelegate> _reorderDelegate;
}

@property(nonatomic) __weak id <PUCollectionViewReorderDelegate> reorderDelegate; // @synthesize reorderDelegate=_reorderDelegate;
- (void).cxx_destruct;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateDragUsingIndexPathUpdateBlock:(id)arg1;
- (id)_reorderableLayout;
- (void)_handleDrag:(id)arg1;
- (void)reloadData;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

