/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAudioMix, AVAudioOutputSettings, NSArray, NSMutableDictionary, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject
{
    NSArray *audioTracks;
    AVAudioMix *audioMix;
    NSMutableDictionary *audioVolumeCurvesForTracks;
    NSMutableDictionary *audioTapProcessorsForTracks;
    AVAudioOutputSettings *audioOutputSettings;
    NSString *audioTimePitchAlgorithm;
}

@end

