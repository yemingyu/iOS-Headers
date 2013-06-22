/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MFMessageTextAttachment.h"

@class MFMimeTextAttachment, NSData;

@interface MFMailInlineTextAttachment : MFMessageTextAttachment
{
    MFMimeTextAttachment *_original;
    NSData *_iconImageData;
    struct CGSize _cachedImageSize;
    unsigned int _hasBeenDownloaded:1;
    BOOL _displayableAsIcon;
}

+ (unsigned int)precedenceLevel;
@property BOOL displayableAsIcon; // @synthesize displayableAsIcon=_displayableAsIcon;
- (void)dealloc;
- (id)persistentUniqueIdentifier;
- (BOOL)hasBeenDownloaded;
- (void)download;
- (BOOL)needsRedownload;
- (void)setNeedsRedownload:(BOOL)arg1;
- (BOOL)isDisplayableInsidePlugin;
- (void)setDisplayableInsidePlugin:(BOOL)arg1;
- (BOOL)isDisplayableInline;
- (void)setDisplayableInline:(BOOL)arg1;
- (void)setupForComposition;
- (void)_setImageDimensions:(struct CGSize)arg1;
- (void)setFileWrapper:(id)arg1;
- (void)_cacheImageSizeIfNecessary;
- (struct CGSize)imageDimensions;
- (float)constrainedWidth;
- (id)mimeTextAttachment;
- (id)textEncodingGuess;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (unsigned int)approximateSize;
- (void)inlineDisplayData:(id *)arg1 mimeType:(id *)arg2;
- (id)initWithMimeTextAttachment:(id)arg1 andMessageBody:(id)arg2;
- (id)initWithWrapper:(id)arg1;

@end

