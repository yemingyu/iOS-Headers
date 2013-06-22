/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PLAlbumViewDelegate <NSObject>

@optional
- (BOOL)albumViewShouldShowPhotoCount:(id)arg1;
- (void)albumView:(id)arg1 preheatImageDataAtStartIndexPath:(id)arg2 endIndexPath:(id)arg3 windowSize:(unsigned int)arg4 downDirection:(BOOL)arg5;
- (void)albumView:(id)arg1 didTapPhotoAtIndexPath:(id)arg2;
- (void)albumViewSelectionDidChange:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (BOOL)albumView:(id)arg1 canSelectPhotoAtIndexPath:(id)arg2;
@end

