/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SDBundleTrackingInfo : NSObject
{
    NSString *_compositeIdentifier;
    BOOL _shouldRun;
    BOOL _isDirty;
    int _state;
    BOOL _lastRunWasSuccessful;
}

+ (id)_trackingInfoDir;
- (void)recordEvent:(int)arg1 info:(id)arg2 forBundleWithKey:(id)arg3 inState:(int)arg4;
- (BOOL)shouldContinueIndexingAfterTransitioToState:(int)arg1;
- (BOOL)shouldRunIndexer;
- (void)save;
- (id)initWithCompositeIdentifier:(id)arg1;
- (void)_loadFromPlist;
- (void)_saveToPlist;
- (id)_filename;
- (void)_copyInfoFromDictionary:(id)arg1;
- (id)_dictionaryRepresentation;

@end
