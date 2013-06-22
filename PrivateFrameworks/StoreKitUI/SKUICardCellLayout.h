/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface SKUICardCellLayout : SKUIItemCellLayout
{
    UILabel *_artistLabel;
    int _numberOfUserRatings;
    UIImageView *_screenshotImageView;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    NSString *_artistName;
}

@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(nonatomic) int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
- (void).cxx_destruct;
- (void)_reloadUserRatingViews;
- (id)_newLabel;
- (void)layoutForItemOfferChange;
- (void)setIconImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)resetLayout;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *screenshotImage;
- (id)initWithParentView:(id)arg1 backgroundImage:(id)arg2;
- (id)initWithCollectionViewCell:(id)arg1;

@end

