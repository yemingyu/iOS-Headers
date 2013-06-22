/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "FTIDSMessage.h"

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface IDSDeregistrationMessage : FTIDSMessage <NSCopying>
{
    NSData *_validationData;
    NSString *_protocolVersion;
}

@property(copy) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy) NSData *validationData; // @synthesize validationData=_validationData;
- (id)additionalMessageHeaders;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

