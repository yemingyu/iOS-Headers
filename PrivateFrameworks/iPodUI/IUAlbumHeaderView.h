/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIButton, UIColor, UIImage, UILabel;

@interface IUAlbumHeaderView : UIView
{
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UIView *_dividerView;
    id _observer;
    UIImage *_pauseImage;
    UIButton *_playPauseButton;
    UIImage *_playImage;
    UILabel *_yearAndCountLabel;
    id <IUAlbumHeaderViewDelegate> _delegate;
    NSString *_artist;
    NSString *_album;
    NSString *_yearAndCount;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(copy, nonatomic) NSString *yearAndCount; // @synthesize yearAndCount=_yearAndCount;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(nonatomic) id <IUAlbumHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_playPauseButtonImage;
- (void)_playPauseButtonAction:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

