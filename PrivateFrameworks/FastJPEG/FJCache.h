/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface FJCache : NSObject
{
    NSMutableDictionary *_cacheEntries;
    int _countLimit;
    int _currentCount;
    int _totalCostLimit;
    int _currentCost;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _lock;
    struct entryList _lru;
}

- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(int)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithCountLimit:(int)arg1 totalCostLimit:(int)arg2;

@end

