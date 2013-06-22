/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GQZEntry : NSObject
{
    id <GQZArchiveInputStream> mInput;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
}

- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long)arg2;
- (struct _xmlTextReader *)xmlReader:(BOOL)arg1;
- (struct _xmlDoc *)recoverXmlDocument;
- (struct _xmlDoc *)xmlDocument;
- (id)data;
- (id)inputStream;
- (void)dealloc;
- (id)initFromCentralFileHeader:(const char *)arg1 inputStream:(id)arg2;

@end

