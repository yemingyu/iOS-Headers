/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (CDXTicket)
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (BOOL)CDXTicketWellFormed;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketIsStub;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsReflected;
- (unsigned long long)CDXTicketSID;
- (struct CDXTicket *)mutableCDXTicket;
- (const struct CDXTicket *)CDXTicket;
- (unsigned int)CDXTicketRevision;
- (id)CDXTicketExpirationDate;
- (int)CDXTicketPCNT;
- (int)CDXTicketPID;
@end

