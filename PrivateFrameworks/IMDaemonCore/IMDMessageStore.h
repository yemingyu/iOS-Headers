/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSString;

@interface IMDMessageStore : NSObject
{
    NSString *_modificationStamp;
    NSNumber *_cachedUnreadMessageCount;
    NSNumber *_cachedLastFailedMessageID;
    BOOL _suppressedUpdates;
    BOOL _pendingDBUpdatePost;
}

+ (void)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3;
+ (id)sharedInstance;
@property(retain) NSString *modificationStamp; // @synthesize modificationStamp=_modificationStamp;
- (void)postCountChanges;
- (void)rebuildUnreadMessageCount;
- (void)rebuildLastFailedMessageID;
- (void)updateStamp;
- (void)_postDBUpdate;
- (void)__postDBUpdate;
- (void)setSuppressDatabaseUpdates:(BOOL)arg1;
- (void)cleanseAttachments;
- (long long)unreadMessagesCount;
- (long long)lastFailedMessageID;
- (id)markMessagesAsReadWithRoomname:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)markMessagesAsReadWithHandle:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)markMessagesAsReadWithRoomNames:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)markMessagesAsReadWithHandles:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(id)arg4;
- (void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned int)arg5 completion:(id)arg6;
- (id)deleteMessageGUIDs:(id)arg1;
- (id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2;
- (void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(id)arg4;
- (id)chatsForMessageGUID:(id)arg1;
- (id)chatsForMessage:(id)arg1;
- (id)chatForMessageGUID:(id)arg1;
- (id)chatForMessage:(id)arg1;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (void)markMessageAsDeduplicated:(id)arg1;
- (id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5;
- (id)messageWithGUID:(id)arg1;
- (BOOL)hasStoredMessageWithGUID:(id)arg1;
- (BOOL)canStoreMessage:(id)arg1 onService:(id)arg2;
- (id)messagesWithGUIDs:(id)arg1;
- (void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2;
- (id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4;
- (id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4;
- (id)_messagesWithGUIDs:(id)arg1;
- (BOOL)_hasMessagesWithGUIDs:(id)arg1;
- (void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3;
- (id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5;
- (void)updateFileTransfer:(id)arg1;
- (void)_storeAttachmentsForMessage:(id)arg1;
- (void)performBlock:(id)arg1 waitUntilDone:(void)arg2;
- (void)performBlock:(id)arg1 afterDelay:(void)arg2;
- (void)performBlock:(id)arg1;
- (void)_updateModificationDate;
- (void)dealloc;
- (void)_performInitialHousekeeping;
- (id)init;

@end

