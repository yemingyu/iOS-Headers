/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADGraphic.h>

@class OADMovie, OADOle, OADShapeGeometry;

@interface OADImage : OADGraphic
{
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (void)createPictureFramePresetGeometry;
- (id)createImageFill;
- (void)setParentTextListStyle:(id)arg1;
- (void)setMovie:(id)arg1;
- (id)movie;
- (void)setOle:(id)arg1;
- (id)ole;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id)imageProperties;
- (id)initWithBlipRef:(id)arg1;
- (void)dealloc;
- (id)init;

@end

