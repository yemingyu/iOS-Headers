/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSRequestDelegate-Protocol.h"

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate>
{
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_saveRentals;
- (void)_loadRentals;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)removeAllRentalsForDatabaseID:(id)arg1;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (id)_init;
- (id)init;

@end

