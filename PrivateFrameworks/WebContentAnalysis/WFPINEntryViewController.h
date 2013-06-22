/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "WFPINEntryViewControllerProtocol-Protocol.h"

@class NSArray, NSString, NSURL, WFRemotePINEntryViewController, _UIFallbackPresentationViewController;

@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol>
{
    _UIFallbackPresentationViewController *_fallbackPresentationVC;
    NSArray *_windowsWithDisabledRotation;
    UIViewController *_rootViewControllerToUse;
    WFRemotePINEntryViewController *_remoteViewController;
    NSURL *_URL;
    NSString *_pageTitle;
    id _completion;
    id _dismissCompletionHandler;
}

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;
@property(copy, nonatomic) id dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (unsigned int)_supportedInterfaceOrientationsForRootViewController;
- (id)delegate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)hasUIWebViewSubView:(id)arg1;
- (void)presentViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)insertRemoteViewController:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(id)arg3;

@end

