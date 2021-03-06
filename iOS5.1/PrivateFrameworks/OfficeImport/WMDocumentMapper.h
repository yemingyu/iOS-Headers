/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

#import "CMMapperRoot-Protocol.h"

@class CMArchiveManager, NSString, WDDocument;

@interface WMDocumentMapper : CMMapper <CMMapperRoot>
{
    CMArchiveManager *mArchiver;
    WDDocument *wDom;
    NSString *mFileName;
}

- (id)initWithWDom:(id)arg1 archiver:(id)arg2;
- (void)dealloc;
- (id)blipAtIndex:(unsigned int)arg1;
- (int)defaultTabWidth;
- (void)setFileName:(id)arg1;
- (id)fileName;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (void)mapWithState:(id)arg1;
- (id)archiver;
- (id)styleMatrix;
- (id)documentTitle;
- (struct CGSize)pageSizeForDevice;
- (struct CGSize)contentSizeForDevice;

@end

