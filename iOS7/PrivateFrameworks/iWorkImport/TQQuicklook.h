/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, TSABaseApplicationDelegate, TSACirrusDocument, TSUTemporaryDirectory;

// Not exported
@interface TQQuicklook : NSObject
{
    NSString *mPath;
    TSACirrusDocument *mDocument;
    TSABaseApplicationDelegate *mBaseAppDelegate;
    TSUTemporaryDirectory *mTemporaryDirectory;
    NSString *mPassphrase;
    id <TSKRenderingExporter> mExporter;
}

- (id)sheetNameForPageNumber:(unsigned long long)arg1 isForm:(_Bool *)arg2;
- (id)newPDFForPageNumber:(unsigned long long)arg1;
- (id)newPDFPreviewAndClose;
- (id)thumbnail;
- (unsigned long long)pageCount;
- (void)close;
- (_Bool)load;
- (void)dealloc;
- (id)initWithPath:(id)arg1 passphrase:(id)arg2;

@end

