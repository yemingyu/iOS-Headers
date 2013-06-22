/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class AnalogClockView, CADisplayLink, DigitalClockLabel, NSDateFormatter, NSTimeZone, UILabel;

@interface WorldClockCellView : UIView
{
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSTimeZone *_timeZone;
    double _nowInMinutes;
    CADisplayLink *_displayLink;
    BOOL _editing;
    id <WorldClockCellViewDelegate> _delegate;
    int _style;
    AnalogClockView *_analogClock;
    DigitalClockLabel *_digitalClock;
    UILabel *_nameLabel;
    UILabel *_combinedLabel;
}

@property(readonly, nonatomic) UILabel *combinedLabel; // @synthesize combinedLabel=_combinedLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) DigitalClockLabel *digitalClock; // @synthesize digitalClock=_digitalClock;
@property(readonly, nonatomic) AnalogClockView *analogClock; // @synthesize analogClock=_analogClock;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) id <WorldClockCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (id)stringFromDate:(id)arg1 dayText:(id)arg2 withTimezoneOffset:(int)arg3;
- (void)setTimeZone:(id)arg1;
- (void)updateTime;
- (void)updateTimeIfNeeded;
- (void)localeChange:(id)arg1;
- (void)significantTimeChange:(id)arg1;
- (void)didMoveToSuperview;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

