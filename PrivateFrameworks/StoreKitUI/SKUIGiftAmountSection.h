/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIGiftAmountControl, UIControl;

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection
{
    SKUIGiftAmountControl *_amountControl;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) NSString *selectedAmountString;
@property(readonly, nonatomic) int selectedAmount;
@property(readonly, nonatomic) UIControl *amountControl;

@end

