//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView
{
    unsigned int _scaleMode;
}

+ (Class)layerClass;
@property(nonatomic) unsigned int scaleMode; // @synthesize scaleMode=_scaleMode;
- (void)setScaleMode:(unsigned int)arg1 duration:(double)arg2;
@property(retain, nonatomic) AVPlayer *player;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, retain, nonatomic) AVPlayerLayer *layer;

@end

