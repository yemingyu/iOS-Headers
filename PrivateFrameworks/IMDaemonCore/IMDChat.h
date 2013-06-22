/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FZMessage, IMDAccount, IMDService, IMDServiceSession, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSArray *_participants;
    FZMessage *_lastMessage;
    int _state;
    unsigned char _style;
    unsigned int _unreadCount;
    long long _rowID;
    BOOL _isArchived;
}

- (void)updateDisplayName:(id)arg1;
- (void)updateProperties:(id)arg1;
- (void)_updateLastMessage:(id)arg1;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSMutableDictionary *copyDictionaryRepresentation;
@property(readonly) NSDictionary *chatProperties;
- (id)description;
@property(readonly) IMDServiceSession *serviceSession;
@property(readonly) IMDService *service;
@property(readonly) IMDAccount *account;
@property(copy) NSString *accountID;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_setRowID:(long long)arg1;
@property long long rowID;
@property(readonly) BOOL isArchived;
- (void)_setUnreadCount:(unsigned int)arg1;
@property unsigned int unreadCount;
@property int state;
@property unsigned char style;
@property(retain) FZMessage *lastMessage;
@property(retain) NSDictionary *properties;
@property(copy) NSString *lastAddressedLocalHandle;
@property(copy) NSString *displayName;
@property(copy) NSString *roomName;
@property(copy) NSArray *participants;
@property(copy) NSString *serviceName;
@property(copy) NSString *chatIdentifier;
@property(copy) NSString *guid;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 chatIdentifier:(id)arg4 participants:(id)arg5 roomName:(id)arg6 displayName:(id)arg7 lastAddressedLocalHandle:(id)arg8 state:(int)arg9 style:(unsigned char)arg10;

@end

