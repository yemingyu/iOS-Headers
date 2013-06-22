/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "CKSMSCompose-Protocol.h"
#import "CKSMSComposeRemoteViewControllerDelegate-Protocol.h"

@class CKSMSComposeQueuingRemoteViewControllerProxy, CKSMSComposeRemoteViewController, UINavigationController, _UIAsyncInvocation;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate>
{
    id _delegate;
    int _entryViewInvisible;
    _UIAsyncInvocation *_cancellationInvocation;
    UINavigationController *_clientNavigationController;
    BOOL _safeToAdd;
    CKSMSComposeRemoteViewController *_remoteViewController;
    CKSMSComposeQueuingRemoteViewControllerProxy *_remoteViewControllerProxy;
}

+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (BOOL)acceptsMIMEType:(id)arg1;
@property(retain, nonatomic) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
@property(retain, nonatomic) CKSMSComposeRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_addRemoteVCIfNeeded;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerDataInserted;
- (void)setUICustomizationData:(id)arg1;
- (void)forceMMS;
- (void)forceCancelComposition;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setText:(id)arg1 addresses:(id)arg2;
- (BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (BOOL)insertTextPart:(id)arg1;
- (BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;
- (id)init;

@end

