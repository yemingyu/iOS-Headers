/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSOperationQueue, SKUIDonationConfiguration, SKUIGiftCharity;

@interface SKUIDonationStepViewController : UIViewController
{
    SKUIGiftCharity *_charity;
    SKUIDonationConfiguration *_configuration;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIDonationConfiguration *donationConfiguration; // @synthesize donationConfiguration=_configuration;
@property(readonly, nonatomic) SKUIGiftCharity *charity; // @synthesize charity=_charity;
- (void).cxx_destruct;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

@end

