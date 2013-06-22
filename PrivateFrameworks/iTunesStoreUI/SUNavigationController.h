/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

#import <iTunesStoreUI/SUScriptNativeObject-Protocol.h>

@class SUClientInterface, SUSection;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject>
{
    BOOL _canBeWeakScriptReference;
    SUClientInterface *_clientInterface;
    BOOL _loading;
    SUSection *_section;
    int _storeBarStyle;
}

@property(retain, nonatomic) SUSection *section; // @synthesize section=_section;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)_loadingDidChangeNotification:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)_sectionForViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)_setStoreBarStyle:(int)arg1 clientInterface:(id)arg2;
- (void)setParentViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)loadView;
- (int)ITunesStoreUIBarStyle;
- (id)description;
- (id)copyScriptViewController;
- (id)copyArchivableContext;
- (void)addChildViewController:(id)arg1;
- (void)dealloc;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (id)initWithSection:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

