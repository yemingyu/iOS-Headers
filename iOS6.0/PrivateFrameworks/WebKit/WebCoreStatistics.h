/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebCoreStatistics : NSObject
{
}

+ (id)javaScriptRootObjectTypeCounts;
+ (unsigned long)javaScriptInterpretersCount;
+ (id)javaScriptRootObjectClasses;
+ (unsigned long)javaScriptReferencedObjectsCount;
+ (unsigned long)javaScriptNoGCAllowedObjectsCount;
+ (int)autoreleasedPageCount;
+ (int)cachedFrameCount;
+ (int)cachedPageCount;
+ (void)returnFreeMemoryToSystem;
+ (id)memoryStatistics;
+ (void)stopIgnoringWebCoreNodeLeaks;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (void)setCacheDisabled:(BOOL)arg1;
+ (void)emptyCache;
+ (void)setShouldPrintExceptions:(BOOL)arg1;
+ (BOOL)shouldPrintExceptions;
+ (unsigned long)glyphPageCount;
+ (void)purgeInactiveFontData;
+ (unsigned long)cachedFontDataInactiveCount;
+ (unsigned long)cachedFontDataCount;
+ (unsigned long)iconsWithDataCount;
+ (unsigned long)iconRecordCount;
+ (unsigned long)iconRetainedPageURLCount;
+ (unsigned long)iconPageURLMappingCount;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)arg1;
+ (void)garbageCollectJavaScriptObjects;
+ (id)javaScriptObjectTypeCounts;
+ (id)javaScriptProtectedObjectTypeCounts;
+ (unsigned long)javaScriptProtectedGlobalObjectsCount;
+ (unsigned long)javaScriptProtectedObjectsCount;
+ (unsigned long)javaScriptGlobalObjectsCount;
+ (unsigned long)javaScriptObjectsCount;
+ (id)statistics;

@end
