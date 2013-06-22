/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable;

@interface MKAmbientLightMonitor : NSObject
{
    NSHashTable *_observers;
    BOOL _monitoring;
    int _ambientLightLevel;
    BOOL _debugLogLux;
    struct __IOHIDEventSystemClient *_client;
    struct __IOHIDServiceClient *_service;
    struct deque<float, std::__1::allocator<float>> _runningStatBuffer;
    float _runningStatSum;
    float _lightLevelNoneThreshold;
    float _lightLevelLowThreshold;
    float _lightLevelMediumThreshold;
}

+ (id)sharedAmbientLightMonitor;
@property(nonatomic) BOOL debugLogLux; // @synthesize debugLogLux=_debugLogLux;
@property(readonly, nonatomic) int ambientLightLevel; // @synthesize ambientLightLevel=_ambientLightLevel;
@property(readonly, nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleIOHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)stopMonitoringWithObserver:(id)arg1;
- (void)startMonitoringWithObserver:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (float)_addSampleAndComputeMean:(const float *)arg1;
- (void)_updateThresholds;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

