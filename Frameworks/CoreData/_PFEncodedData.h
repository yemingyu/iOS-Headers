/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface _PFEncodedData : NSData
{
    NSData *_aData;
    unsigned int _byteCount;
}

+ (Class)classForCoder;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (BOOL)isEqualToData:(id)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned int)arg2;
- (const void *)bytes;
- (unsigned int)length;
- (id)privateCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (Class)classForArchiver;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

