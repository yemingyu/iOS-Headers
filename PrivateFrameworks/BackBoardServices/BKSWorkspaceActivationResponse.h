/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BKSXPCCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface BKSWorkspaceActivationResponse : NSObject <NSCopying, BKSXPCCoding>
{
    BOOL _willResume;
    BOOL _launchFailed;
    NSString *_bundleIdentifier;
}

+ (id)responseForWorkspaceUnsuspend:(id)arg1;
+ (id)responseForLaunchFailure:(id)arg1;
@property(nonatomic) BOOL launchFailed; // @synthesize launchFailed=_launchFailed;
@property(nonatomic) BOOL willResume; // @synthesize willResume=_willResume;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

