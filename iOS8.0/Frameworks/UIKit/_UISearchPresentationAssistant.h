//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIDimmingViewDelegate.h"

@class UIDimmingView, UIPresentationController, UIPresentationController<_UISearchControllerPresenting>, UIView;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate>
{
    UIPresentationController *_searchPresentationController;
    UIView *_searchBarContainerView;
    UIDimmingView *_dimmingView;
    BOOL _isFormSheetPresentation;
    BOOL _presentationWasAnimated;
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;
    id <UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;
}

@property(retain, nonatomic) id <UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator; // @synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator;
@property(nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController; // @synthesize adaptivePresentationController=_adaptivePresentationController;
@property(nonatomic) BOOL presentationWasAnimated; // @synthesize presentationWasAnimated=_presentationWasAnimated;
- (void)dimmingViewWasTapped:(id)arg1;
- (BOOL)searchBarWillResizeForScopeBar;
- (float)resultsControllerContentOffset;
- (BOOL)searchBarToBecomeTopAttached;
- (id)locateNavigationController;
- (BOOL)shouldAccountForStatusBar;
- (float)statusBarAdjustment;
- (BOOL)_statusBarPreferredHidden;
- (id)dimmingView;
- (struct CGSize)updateSearchBarContainerFrame;
- (void)removeContainerViewFromSuperview;
- (id)searchBarContainerView;
- (id)_searchBarContainerSuperview;
- (struct CGRect)_containerFrame;
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;
- (struct CGRect)optimalFrameForSearchBar:(id)arg1;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (void)dealloc;
- (id)initWithSearchPresentationController:(id)arg1;

@end

