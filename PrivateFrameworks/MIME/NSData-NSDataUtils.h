/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2;
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange)mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange)mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)mf_rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)mf_subdataFromIndex:(unsigned int)arg1;
- (id)mf_subdataToIndex:(unsigned int)arg1;
- (struct _NSRange)mf_rangeOfRFC822HeaderData;
@end

