/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CKPreferredServiceManager : NSObject
{
    NSArray *_servicePrecedence;
    NSArray *_potentialServices;
    NSMutableArray *_knownHandles;
}

+ (id)sharedPreferredServiceManager;
+ (id)alloc;
@property(copy, nonatomic) NSArray *potentialServices; // @synthesize potentialServices=_potentialServices;
@property(copy, nonatomic) NSArray *servicePrecedence; // @synthesize servicePrecedence=_servicePrecedence;
- (void)_handleIMHandleIDStatusChanged:(id)arg1;
- (void)_handleDeviceCapabilitiesChanged:(id)arg1;
- (void)_handleActiveAccountsChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_handleConnectionChanged:(id)arg1;
- (unsigned int)__preferredServiceTypeForRecipientCount:(int)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (unsigned int)__preferrediMessageFallbackServiceForRecipientCount:(int)arg1 iMessageAvailable:(BOOL)arg2 options:(unsigned int)arg3 error:(char *)arg4;
- (unsigned int)_optionsForRecipients:(id)arg1;
- (id)preferredServiceForConversation:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)_preferredServiceForAddressStrings:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)_preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (void)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 completion:(id)arg4;
- (BOOL)availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3;
- (BOOL)availabilityForAddress:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3;
- (id)preferredServiceForMFComposeRecipients:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)preferredServiceForHandle:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)preferredServiceForAddressString:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (id)_preferredServiceForHandles:(id)arg1 allowUnknown:(BOOL)arg2 checkWithServer:(BOOL)arg3;
- (BOOL)_availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3 actualHandle:(id *)arg4;
- (id)_preferredServiceForRecipientsCount:(int)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (id)preferredService;
- (void)refreshAvailabilityForConversation:(id)arg1;
- (void)refreshAvailabilityForMFComposeRecipients:(id)arg1;
- (void)refreshAvailabilityForAddressStrings:(id)arg1;
- (BOOL)_isiMessageAvailable;
- (void)prepareForResume;
- (void)notifyOfPotentialServicesChange;
- (void)notifyOfServiceAvailabilityChange;
- (void)_clearCaches;
- (BOOL)isMultiService;
- (void)_updatePotentialServices;
- (void)dealloc;
- (id)init;

@end

