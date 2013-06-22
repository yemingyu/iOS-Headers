/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol EKCalendarItemDisclosableEditItem <NSObject>
- (unsigned int)indexOfSelectedDisclosedItem;
- (void)didSelectDisclosedItemAtIndex:(int)arg1;
- (id)titleForDisclosedItemAtIndex:(int)arg1 inSubitem:(int)arg2;
- (int)numberOfDisclosableItemsInSubitem:(int)arg1;
- (int)disclosedEditItemTypeForSubitem:(int)arg1;

@optional
- (void)datePickerDidSelectDate:(id)arg1;
- (id)dateForDatePicker;
- (float)heightForDisclosedItemInSubitem:(unsigned int)arg1;
- (id)cellForDisclosedItemInSubitem:(unsigned int)arg1;
- (void)willDiscloseSubitem:(int)arg1;
@end

