//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface SKUIStarBarView : UIView
{
    UIImage *_emptyStarImage;
    UIImage *_fullStarImage;
    int _numberOfStars;
    float _value;
}

@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) int numberOfStars; // @synthesize numberOfStars=_numberOfStars;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
