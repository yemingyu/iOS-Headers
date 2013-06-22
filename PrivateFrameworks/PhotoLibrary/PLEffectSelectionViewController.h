/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CIFilter, NSArray, NSIndexPath, UICollectionView, UICollectionViewFlowLayout;

@interface PLEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSArray *_effects;
    NSIndexPath *__selectedIndexPath;
    struct CGSize _cellSize;
    struct CGSize _thumbnailSize;
    id <PLEffectSelectionViewControllerDelegate> _delegate;
}

@property(nonatomic) id <PLEffectSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)_scrollToShowNextFilterNearEdge;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)_textForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_scrollToSelectedIndexAnimated:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
@property(retain, nonatomic) CIFilter *selectedEffect;
- (void)_resetSelectedToOriginal;
- (void)_setSelectedIndexPath:(id)arg1;
- (id)_selectedIndexPath;
- (void)_generateFilters;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithImageSize:(struct CGSize)arg1;

@end

