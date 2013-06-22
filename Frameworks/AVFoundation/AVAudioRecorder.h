/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSURL;

@interface AVAudioRecorder : NSObject
{
    void *_impl;
}

@property(copy, nonatomic) NSArray *channelAssignments;
- (void)endInterruption;
- (void)endInterruptionWithFlags;
- (void)beginInterruption;
- (float)averagePowerForChannel:(unsigned int)arg1;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (void)updateMeters;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property id <AVAudioRecorderDelegate> delegate;
@property(readonly) double deviceCurrentTime;
@property(readonly) double currentTime;
- (BOOL)deleteRecording;
- (void)stop;
- (void)pause;
- (BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (BOOL)recordForDuration:(double)arg1;
- (BOOL)recordAtTime:(double)arg1;
- (BOOL)record;
- (BOOL)prepareToRecord;
@property(readonly) NSDictionary *settings;
@property(readonly) NSURL *url;
@property(readonly, getter=isRecording) BOOL recording;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id *)arg3;
- (id)baseInit;
- (void)dealloc;
- (void)finalize;
- (void)privCommonCleanup;
- (void)finishedRecording;
- (struct AudioRecorderImpl *)impl;

@end

