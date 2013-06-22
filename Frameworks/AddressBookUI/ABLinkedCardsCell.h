/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABContactCell.h>

@class NSDictionary, UIImageView, UILabel, UIView;

@interface ABLinkedCardsCell : ABContactCell
{
    UILabel *_sourceLabel;
    UILabel *_nameLabel;
    UIView *_innerContentView;
    id <ABPropertyCellDelegate> _delegate;
    NSDictionary *_sourceTextAttributes;
    NSDictionary *_nameTextAttributes;
    UIImageView *_chevron;
}

+ (float)cellHeightForEditing:(BOOL)arg1;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(copy, nonatomic) NSDictionary *nameTextAttributes; // @synthesize nameTextAttributes=_nameTextAttributes;
@property(copy, nonatomic) NSDictionary *sourceTextAttributes; // @synthesize sourceTextAttributes=_sourceTextAttributes;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
- (void)setBackgroundColor:(id)arg1;
- (id)contentViewEditingConstraints;
- (id)contentViewConstraints;
- (void)updateConstraints;
- (void)setNeedsUpdateConstraints;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (BOOL)shouldPerformDefaultAction;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

