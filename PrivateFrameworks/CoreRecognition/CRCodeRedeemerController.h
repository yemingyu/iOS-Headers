/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class CRBoxLayer, CaptureSessionManager, DiagnosticHUDLayer, NSArray, NSDate, NSString, NSTimer, UIActivityIndicatorView, UITapGestureRecognizer;

@interface CRCodeRedeemerController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    BOOL _captureMode;
    BOOL _showDiagnosticHUD;
    BOOL _configPresentCentered;
    BOOL _codeInverted;
    BOOL _didSendEndOrCancel;
    BOOL _didSendFindBox;
    id <CRCodeRedeemerControllerDelegate> _delegate;
    unsigned int _captureCount;
    int _whiteBalanceMode;
    int _focusMode;
    int _exposureMode;
    int _torchMode;
    NSString *_cameraMode;
    int _cameraPosition;
    float _configDemoSpeed;
    CaptureSessionManager *_sessionManager;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CRBoxLayer *_boxLayer;
    DiagnosticHUDLayer *_diagnosticHUDLayer;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_foundPoints;
    NSString *_foundCode;
    NSDate *_sessionStarted;
    NSDate *_pointsFound;
    NSDate *_codePresented;
    unsigned int _imagesToCapture;
    NSTimer *_boxLayerHideTimer;
    double _sessionTimeout;
}

+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned int)arg2;
+ (void)loadFonts;
+ (BOOL)isCRCodeRedeemerAvailable;
@property(retain) NSTimer *boxLayerHideTimer; // @synthesize boxLayerHideTimer=_boxLayerHideTimer;
@property unsigned int imagesToCapture; // @synthesize imagesToCapture=_imagesToCapture;
@property BOOL didSendFindBox; // @synthesize didSendFindBox=_didSendFindBox;
@property BOOL didSendEndOrCancel; // @synthesize didSendEndOrCancel=_didSendEndOrCancel;
@property BOOL codeInverted; // @synthesize codeInverted=_codeInverted;
@property(retain) NSDate *codePresented; // @synthesize codePresented=_codePresented;
@property(retain) NSDate *pointsFound; // @synthesize pointsFound=_pointsFound;
@property(retain) NSDate *sessionStarted; // @synthesize sessionStarted=_sessionStarted;
@property(retain) NSString *foundCode; // @synthesize foundCode=_foundCode;
@property(retain) NSArray *foundPoints; // @synthesize foundPoints=_foundPoints;
@property(retain) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain) DiagnosticHUDLayer *diagnosticHUDLayer; // @synthesize diagnosticHUDLayer=_diagnosticHUDLayer;
@property(retain) CRBoxLayer *boxLayer; // @synthesize boxLayer=_boxLayer;
@property(retain) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain) CaptureSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property float configDemoSpeed; // @synthesize configDemoSpeed=_configDemoSpeed;
@property BOOL configPresentCentered; // @synthesize configPresentCentered=_configPresentCentered;
@property BOOL showDiagnosticHUD; // @synthesize showDiagnosticHUD=_showDiagnosticHUD;
@property int cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(copy) NSString *cameraMode; // @synthesize cameraMode=_cameraMode;
@property int torchMode; // @synthesize torchMode=_torchMode;
@property int exposureMode; // @synthesize exposureMode=_exposureMode;
@property int focusMode; // @synthesize focusMode=_focusMode;
@property int whiteBalanceMode; // @synthesize whiteBalanceMode=_whiteBalanceMode;
@property double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;
@property unsigned int captureCount; // @synthesize captureCount=_captureCount;
@property(getter=isCaptureMode) BOOL captureMode; // @synthesize captureMode=_captureMode;
@property __weak id <CRCodeRedeemerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)generateStringFromDate:(id)arg1;
- (void)sendDidEndWithErrorDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
- (void)sendDidFindBox;
- (void)sendDidDisplayMessageStyle:(unsigned int)arg1;
- (void)sendDidEndWithInfo:(id)arg1;
- (void)sendDidCancel;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned int)arg3 duration:(double)arg4;
- (void)animatePresentCode;
- (struct CGRect)boxLayerPresentationFrame;
- (void)hideBoxLayer;
- (void)pauseBoxLayerHideTimer;
- (void)primeBoxLayerHideTimer;
- (void)removeLayerTree;
- (void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopSession;
- (void)startSession;
- (void)cancel;
- (void)handleTapFrom:(id)arg1;
- (void)toggleCamera;
- (void)didReceiveMemoryWarning;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

