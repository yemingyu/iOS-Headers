/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface SKUILockupItemCellLayout : SKUIItemCellLayout
{
    UILabel *_categoryLabel;
    struct UIEdgeInsets _contentInsets;
    struct CGSize _imageBoundingSize;
    int _layoutStyle;
    int _lockupSize;
    int _numberOfUserRatings;
    UIColor *_textColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
}

@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(nonatomic) int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(nonatomic) int lockupSize; // @synthesize lockupSize=_lockupSize;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)_reloadUserRatingViews;
- (void)_layoutVertical;
- (struct CGRect)_layoutLabelsInRect:(struct CGRect)arg1;
- (struct CGRect)_layoutIconImageView;
- (void)_layoutHorizontal;
- (void)_initSKUILockupItemCellLayout;
- (void)setIconImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)layoutForItemOfferChange;
@property(copy, nonatomic) NSString *title;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *categoryString;
- (id)initWithTableViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end

