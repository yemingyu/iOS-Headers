/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUSymbolExtractor.h>

@class NSMutableDictionary, VMUMachOHeader;

@interface VMUDwarfExtractor : VMUSymbolExtractor
{
    BOOL _shouldUseTaskBasedAddresses;
    NSMutableDictionary *_abbrevDicts;
    id <VMUMemory> _infoMem;
    id <VMUMemory> _abbrevMem;
    id <VMUMemory> _lineMem;
    id <VMUMemory> _strMem;
    VMUMachOHeader *_hdr;
}

+ (id)dwarfExtractorWithMachOHeader:(id)arg1;
+ (unsigned long long)constantClassAttributeWithMemoryView:(id)arg1 form:(unsigned long long)arg2;
- (void)parseLineNumberMatrixAtOffset:(unsigned long long)arg1 withBaseDirectory:(id)arg2 withWordSize:(unsigned char)arg3;
- (id)parseAbbrevDictionaryAtOffset:(unsigned int)arg1;
- (void)parseCompilationUnitWithMemoryView:(id)arg1 withHeader:(id)arg2;
- (void)dealloc;
- (id)initWithMachOHeader:(id)arg1;

@end

