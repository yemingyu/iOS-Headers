//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class UIImage;

@interface QLThumbnailOperation : NSOperation
{
    int _index;
    struct CGSize _size;
    UIImage *_image;
}

@property(retain) UIImage *image; // @synthesize image=_image;
@property struct CGSize size; // @synthesize size=_size;
@property int index; // @synthesize index=_index;
- (void)dealloc;
- (id)init;

@end

