/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "PKCaptureDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableData, NSURLConnection, PKBoxLayer, PKCaptureSession, UILabel, UINavigationBar, UIProgressView;

@interface PKCodeAcquisitionViewController : UIViewController <PKCaptureDelegate, NSURLConnectionDataDelegate, UIGestureRecognizerDelegate>
{
    UINavigationBar *_navBar;
    PKCaptureSession *_captureSession;
    PKBoxLayer *_boxLayer;
    NSURLConnection *_downloadConnection;
    NSMutableData *_downloadData;
    long long _downloadExpectedContentSize;
    UILabel *_captionLabel;
    UIProgressView *_downloadProgressView;
    UILabel *_errorLabel;
    UILabel *_helpLabel;
    id <PKCodeAcquisitionDelegate> _delegate;
}

@property(nonatomic) id <PKCodeAcquisitionDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)supportedInterfaceOrientations;
- (void)_handleDownloadFailureWithReason:(id)arg1 errorToDisplay:(id)arg2;
- (void)_handleDownloadFailureWithReason:(id)arg1;
- (void)_handleDownloadedPass:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleSingleTap:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_cleanupDownload;
- (void)_handleFoundCode:(id)arg1 withCorners:(id)arg2;
- (void)cancel;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureSession:(id)arg1 isRunning:(BOOL)arg2;
- (void)_resetBoxLayer;
- (void)_restartCaptureSession;
- (void)_setCaptureUIState:(int)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

