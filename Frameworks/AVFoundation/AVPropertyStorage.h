/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AVPropertyStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_storageAccessWorkQueue;
    NSMutableDictionary *_propertyStorage;
}

- (void)didAccessKVOForKey:(id)arg1;
- (void)willAccessKVOForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(id)arg2;
- (BOOL)shouldUsePropertyStorageCacheForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

