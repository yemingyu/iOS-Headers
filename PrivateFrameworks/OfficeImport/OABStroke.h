/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface OABStroke : NSObject
{
}

+ (void)writeStroke:(id)arg1 toStroke:(struct EshStroke *)arg2 state:(id)arg3;
+ (id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
+ (id)readStrokeFromShapeBaseManager:(id)arg1 colorPalette:(id)arg2;
+ (void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(struct EshStroke *)arg2 state:(id)arg3;
+ (int)writeCapStyle:(int)arg1;
+ (int)writeLineEndLength:(int)arg1;
+ (int)writeLineEndWidth:(int)arg1;
+ (int)writeLineEndType:(int)arg1;
+ (int)writePresetDashStyle:(int)arg1;
+ (int)writeCompoundType:(int)arg1;
+ (int)readCapStyle:(int)arg1;
+ (int)readLineEndLength:(int)arg1;
+ (int)readLineEndWidth:(int)arg1;
+ (int)readLineEndType:(int)arg1;
+ (int)readPresetDashStyle:(int)arg1;
+ (int)readCompoundType:(int)arg1;

@end

