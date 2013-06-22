/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SBBulletinBlurredShadowLabel, SBBulletinListTouchEater, SBBulletinTableView, UIImageView, UIStatusBar;

@interface SBBulletinListView : UIView
{
    int _orientation;
    float _currentY;
    UIView *_slidingView;
    UIImageView *_linenView;
    struct CGSize _linenSize;
    SBBulletinTableView *_tableView;
    UIStatusBar *_statusBar;
    UIView *_statusBarPocket;
    UIView *_grabber;
    SBBulletinBlurredShadowLabel *_noNotificationsLabel;
    SBBulletinListTouchEater *_clearButtonTouchEater;
    UIView *_cornerView[4];
    UIView *_bottomShadowView;
    UIView *_linenMask;
    UIView *_linenGradient;
    UIView *_linenRim;
    UIView *_linenContainer;
    UIView *_wholeShadowView;
    UIView *_sideShadowView[2];
    float _tableViewContentHeight;
}

+ (id)linen;
+ (id)_pathToLinenCache;
+ (void)removeCachedLinen;
+ (void)loadLinen;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)tableView;
- (id)linenView;
- (float)linenGradientAlpha;
- (void)positionSlidingViewAtY:(float)arg1;
- (float)onscreenY;
- (float)offscreenY;
- (float)currentY;
- (void)setBottomCornersOffscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCornerAlpha:(float)arg1;
- (void)setBottomShadowAlpha:(float)arg1;
- (void)_positionNoNotificationsLabel;
- (void)setShowsNoNotificationsLabel:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGRect)slidingViewFrame;
- (id)slidingView;
- (id)clearButtonTouchEater;
- (void)handleStatusBarTap:(id)arg1;
- (void)handleTableViewOffsetChange;
- (void)layoutForOrientation:(int)arg1;
- (void)_ensureContentHeightHasBeenComputed;
- (float)_iPadSlidingViewHeightInOrientation:(int)arg1;
- (float)_linenGradientAlphaForHeight:(float)arg1;
- (void)adjustLayoutForAnimatedTableViewContentHeightChange:(float)arg1;
- (void)adjustLayoutForTableViewReload;
- (void)willRotateToOrientation:(int)arg1;
- (void)didRotateFromOrientation:(int)arg1;

@end
