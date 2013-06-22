/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer
{
    unsigned int _expectedSize;
    unsigned int _currentBytes;
    id _progressBlock;
}

@property(readonly) unsigned int expectedSize; // @synthesize expectedSize=_expectedSize;
@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;
- (int)appendData:(id)arg1;
- (void)dealloc;
- (id)initWithConsumers:(id)arg1 expectedSize:(unsigned int)arg2;
- (id)initWithConsumer:(id)arg1 expectedSize:(unsigned int)arg2;

@end

