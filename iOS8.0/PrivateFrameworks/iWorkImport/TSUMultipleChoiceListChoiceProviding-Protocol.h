//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSString;

@protocol TSUMultipleChoiceListChoiceProviding
- (NSString *)displayStringAtIndex:(unsigned int)arg1;
- (BOOL)booleanAtIndex:(unsigned int)arg1;
- (NSDate *)dateAtIndex:(unsigned int)arg1;
- (NSString *)stringAtIndex:(unsigned int)arg1;
- (double)numberAtIndex:(unsigned int)arg1;
- (int)valueTypeOfItemAtIndex:(unsigned int)arg1;
- (BOOL)isEqualToChoices:(id <TSUMultipleChoiceListChoiceProviding>)arg1;
- (NSArray *)choices;
@end
