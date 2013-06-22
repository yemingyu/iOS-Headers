/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUCellConfiguration.h>

@interface SUArrayCellConfiguration : SUCellConfiguration
{
    unsigned int _numberOfStrings;
    struct CGRect *_stringFrames;
    id *_strings;
    unsigned int _numberOfImages;
    struct CGRect *_imageFrames;
    id *_images;
    id *_selectedImages;
}

- (id)_accessibilityStringsArrayPointer;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (void)setLayoutSize:(struct CGSize)arg1;
- (void)reloadData;
- (unsigned int)numberOfLabels;
- (unsigned int)numberOfImages;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (struct CGRect)frameForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect)frameForImageAtIndex:(unsigned int)arg1;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (void)dealloc;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;

@end

