/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "PKPassDeleteDelegate-Protocol.h"
#import "PKPassGroupViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSTimer, PKGroup, PKPass, PKPassGroupView, PKReusablePassViewQueue, UIView;

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteDelegate, PKPassGroupViewDelegate>
{
    PKPassGroupView *_modallyPresentedGroupView;
    PKGroup *_modallyPresentedGroup;
    NSMutableArray *_passPileViews;
    unsigned int _modalGroupIndex;
    UIView *_pileContainer;
    int _scrollingTestState;
    int _currentTestReps;
    int _presentationState;
    NSMutableDictionary *_groupViewsByGroupID;
    PKReusablePassViewQueue *_reusableCardViewQueue;
    PKPassGroupView *_reorderedGroupView;
    unsigned int _previousIndexOfReorderedGroup;
    struct CGPoint _reorderedGroupViewPositionInFrame;
    struct CGPoint _panningVelocity;
    NSTimer *_autoscrollTimer;
    BOOL _isReordering;
    BOOL _reorderPeekCompensated;
    BOOL _hasScrolledUp;
    BOOL _hasScrolledDown;
    NSMutableDictionary *_groupViewsInFlightByGroupID;
    unsigned int _userInteractionCounter;
    unsigned int _isDeleting:1;
    NSMutableDictionary *_animatorsByGroupID;
    id <PKPassGroupStackViewDatasource> _datasource;
}

@property(nonatomic) unsigned int modalGroupIndex; // @synthesize modalGroupIndex=_modalGroupIndex;
@property(readonly, nonatomic) BOOL isReordering; // @synthesize isReordering=_isReordering;
@property(nonatomic) int presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) id <PKPassGroupStackViewDatasource> datasource; // @synthesize datasource=_datasource;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)deleteSheet:(id)arg1 didComplete:(BOOL)arg2;
- (BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupViewFrontPassDidFlip:(id)arg1 animated:(BOOL)arg2;
- (int)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (BOOL)groupViewPassesSuppressedContent:(id)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(id)arg1;
- (BOOL)groupViewShouldAllowPassFlip:(id)arg1;
- (void)groupView:(id)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (BOOL)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewPanDidEnd:(id)arg1;
- (void)groupViewPanDidBegin:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (void)_removeDimmingFromPileWithAnimation:(BOOL)arg1;
- (void)_addDimmingToPileWithAnimation:(BOOL)arg1;
- (unsigned int)_indexForPosition:(struct CGPoint)arg1;
- (int)_defaultContentModeForPresentationState:(int)arg1 index:(unsigned int)arg2;
- (BOOL)_isIngestingPass;
- (void)_setModalGroupView:(id)arg1;
- (void)_notifyDelegateOfStateChange;
- (void)_performAfterDelay:(double)arg1 block:(id)arg2;
- (id)_groupViewAtIndex:(unsigned int)arg1;
- (void)_enumerateLoadedGroupViews:(id)arg1;
- (id)_sortedGroupViewIndexes;
- (void)_removeMotionEffectsFromModalPile;
- (void)_addMotionEffectsToModalPile;
- (void)_reorderPositionChangedForGroupView:(id)arg1 velocity:(struct CGPoint)arg2;
- (void)_stopAutoscrollTimer;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_autoscrollIfNecessary;
- (void)_animateGroupView:(id)arg1 toIndex:(unsigned int)arg2 reorderAfter:(double)arg3;
- (void)_fanAndPageGroupView:(id)arg1;
- (void)_transformCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 duration:(float)arg4;
- (void)_transformCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 animated:(BOOL)arg4;
- (void)_translateCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 animated:(BOOL)arg4;
- (void)_positionGroupViewForModalPresentation:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_animateGroupViewToModalPresentation:(id)arg1 atIndex:(unsigned int)arg2 indexes:(id)arg3 animationIndex:(unsigned int *)arg4;
- (void)_positionGroupViewForStackPresentation:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_animateGroupViewToStackPresentation:(id)arg1 atIndex:(unsigned int)arg2 indexes:(id)arg3 animationIndex:(unsigned int *)arg4 fromGesture:(BOOL)arg5;
- (unsigned int)_lastIndex;
- (struct CATransform3D)_transformForGroupView:(id)arg1 forState:(int)arg2;
- (struct CGPoint)_positionForGroupView:(id)arg1 atIndex:(unsigned int)arg2 forState:(int)arg3;
- (float)_scaleForGroupView:(id)arg1 forState:(int)arg2;
- (float)_xPositionForGroupView:(id)arg1 forState:(int)arg2;
- (unsigned int)_indexOfGroupView:(id)arg1;
- (float)_yForGroupInPileAtIndex:(unsigned int)arg1;
- (float)_yForModallyPresentedGroup;
- (float)_nativeYOfGroupAtBounds;
- (float)_yForGroupInTableAtIndex:(unsigned int)arg1;
- (float)_yPositionForGroupAtIndex:(unsigned int)arg1 forState:(int)arg2;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_presentPassIngestionAcceptanceWithAnimation:(BOOL)arg1;
- (void)_presentPassIngestionWithAnimation:(BOOL)arg1;
- (void)_presentGroupStackViewWithAnimation:(BOOL)arg1 fromGesture:(BOOL)arg2;
- (void)_presentFlippedModalGroupView:(id)arg1 animated:(BOOL)arg2;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_presentModalGroupView:(id)arg1 animated:(BOOL)arg2;
- (void)_cleanupPassPileContainerView;
- (void)_createCardPileContainerView;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange)arg1 reservePlaceForModalGroup:(BOOL)arg2;
- (int)_edgeStylesObscuredByTopCornersOfPassStyle:(int)arg1;
- (int)_edgeStylesObscuredByTopMiddleOfPassStyle:(int)arg1;
- (struct _NSRange)_rangeOfEagerLoadedIndexes;
- (id)_arrayOfStackedIndexes;
- (struct _NSRange)_rangeOfVisibleIndexes;
- (int)_startVisibleIndex;
- (float)_groupHeightMultiplier;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned int)arg2;
- (void)_arrangeGroups;
- (void)_loadModalGroupView;
- (void)_tileGroupsForState:(int)arg1 eager:(BOOL)arg2;
- (void)_flushCachesForGroupID:(id)arg1;
- (id)_loadGroupViewAtIndex:(unsigned int)arg1 forState:(int)arg2 contentMode:(int)arg3 cached:(char *)arg4;
- (id)_groupViewWithGroup:(id)arg1 contentMode:(int)arg2;
- (struct CGSize)_contentSize;
- (void)tilePassesEagerly:(BOOL)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned int)arg2;
- (void)reloadGroupViewAtIndex:(unsigned int)arg1;
- (void)reloadData;
@property(readonly, nonatomic) PKPass *modalGroupFrontmostPass;
- (void)stageGroupInPresentationState:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2;
- (void)_positionPileContainerForModalGroupViewWithAnimation:(BOOL)arg1 delay:(float)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)gotoBaseTestState;
- (void)beginFlipCardTest;
- (void)testFlipToFront;
- (void)testFlipToBack;
- (void)beginSelectCardTest;
- (void)testGroupSelection;
- (void)testGoModal;
- (void)beginScrollCardListTest;
- (void)scrollUpTest;
- (void)noteDidEndScrollingForTesting;
- (void)scrollDownTest;
- (void)scrollNext;

// Remaining properties
@property(nonatomic) id <PKPassGroupStackViewDelegate><UIScrollViewDelegate> delegate;

@end

