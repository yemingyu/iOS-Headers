/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSOperationQueue, SKUIClientContext, SKUIRedeemConfiguration;

@interface SKUIRedeemStepViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUIRedeemConfiguration *_configuration;
}

@property(retain, nonatomic) SKUIRedeemConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;

@end

