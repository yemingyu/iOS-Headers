/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface OAXFill : NSObject
{
}

+ (id)readBlipRefFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3 forBullet:(BOOL)arg4;
+ (id)readFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)presetPatternFillTypeEnumMap;
+ (id)pathGradientFillTypeEnumMap;
+ (id)tileFlipModeEnumMap;
+ (id)readPresetPatternFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readImageFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (void)readTile:(struct _xmlNode *)arg1 tile:(id)arg2;
+ (void)readStretch:(struct _xmlNode *)arg1 stretch:(id)arg2;
+ (id)readGradientFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPathGradientFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readLinearGradientFillFromXmlNode:(struct _xmlNode *)arg1;
+ (void)readGradientFillFromXmlNode:(struct _xmlNode *)arg1 toGradientFill:(id)arg2;
+ (id)readSolidFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readGroupFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readNullFillFromXmlNode:(struct _xmlNode *)arg1;

@end

