/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptController.h>

@class NSMutableArray;

@interface CKModalTranscriptController : CKTranscriptController
{
    BOOL _mimeType;
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    BOOL _cameraSelectionDisabled;
}

@property(nonatomic) BOOL mimeType; // @synthesize mimeType=_mimeType;
- (BOOL)_shouldUseExistingConversations;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (void)registerForNotifications;
- (void)transitionFromNewMessageToConversation;
- (BOOL)shouldDismissAfterSend;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (BOOL)_shouldAllowCameraAttachments;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)getContainerWidth:(float *)arg1 offset:(float *)arg2;
- (void)insertTextPart:(id)arg1;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)_insertMediaObject:(id)arg1;
- (void)_addPart:(id)arg1;
- (void)dealloc;

@end

