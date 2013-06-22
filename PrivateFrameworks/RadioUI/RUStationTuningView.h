/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class RUStationTuningSlider, RadioStation, UILabel;

@interface RUStationTuningView : UIView
{
    RUStationTuningSlider *_tuningSlider;
    UILabel *_tuningLabel;
    UILabel *_tuningType1Label;
    UILabel *_tuningType2Label;
    UILabel *_tuningType3Label;
    RadioStation *_station;
}

@property(retain, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)maskImageForSliderTrack;
- (void)_tapRecognizedAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

