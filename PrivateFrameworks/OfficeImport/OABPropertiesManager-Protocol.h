/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "OABBasePropertiesManager-Protocol.h"

@protocol OABPropertiesManager <OABBasePropertiesManager>
- (BOOL)hidden;
- (BOOL)textPathStrikethrough;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathUnderline;
- (BOOL)textPathItalic;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (int)textPathTextAlignment;
- (id)textPathUnicodeString;
- (BOOL)isTextPath;
- (BOOL)isShadowOK;
- (BOOL)isStrokeOK;
- (BOOL)isFillOK;
@end

