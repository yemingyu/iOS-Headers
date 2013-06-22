/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class NSArray, NSMutableArray, NSString;

@interface MFMessageComposeViewController : UINavigationController
{
    id <MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
    NSString *_subject;
    NSMutableArray *_mutableAttachmentURLs;
    unsigned int _currentAttachedVideoCount;
    unsigned int _currentAttachedAudioCount;
    unsigned int _currentAttachedImageCount;
    NSMutableArray *_temporaryAttachmentURLs;
    NSArray *_attachments;
}

+ (BOOL)isiMessageEnabled;
+ (BOOL)isMMSEnabled;
+ (void)initialize;
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (BOOL)canSendText;
+ (void)_startListeningForAvailabilityNotifications;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_updateServiceAvailability;
+ (BOOL)isSupportedAttachmentUTI:(id)arg1;
+ (BOOL)canSendAttachments;
+ (BOOL)canSendSubject;
+ (BOOL)_canSendText;
+ (void)_setupAccountMonitor;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSMutableArray *temporaryAttachmentURLs; // @synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs;
@property(nonatomic) unsigned int currentAttachedImageCount; // @synthesize currentAttachedImageCount=_currentAttachedImageCount;
@property(nonatomic) unsigned int currentAttachedAudioCount; // @synthesize currentAttachedAudioCount=_currentAttachedAudioCount;
@property(nonatomic) unsigned int currentAttachedVideoCount; // @synthesize currentAttachedVideoCount=_currentAttachedVideoCount;
@property(copy, nonatomic) NSMutableArray *mutableAttachmentURLs; // @synthesize mutableAttachmentURLs=_mutableAttachmentURLs;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) id <MFMessageComposeViewControllerDelegate> messageComposeDelegate; // @synthesize messageComposeDelegate=_messageComposeDelegate;
- (void)_setCanEditRecipients:(BOOL)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)dealloc;
- (void)disableUserAttachments;
- (id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2;
- (void)_updateAttachmentCountForAttachmentURL:(id)arg1;
- (BOOL)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2;
- (BOOL)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3;
- (BOOL)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2;
- (BOOL)_isImageMIMEType:(id)arg1;
- (BOOL)_isAudioMIMEType:(id)arg1;
- (BOOL)_isVideoMIMEType:(id)arg1;
- (id)_contentTypeForMIMEType:(id)arg1;
- (id)_MIMETypeForURL:(id)arg1;
- (id)attachmentURLs;
- (BOOL)canAddAttachmentURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

