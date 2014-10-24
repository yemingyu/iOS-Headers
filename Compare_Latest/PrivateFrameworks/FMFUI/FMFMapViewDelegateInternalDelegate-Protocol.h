//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMFHandle, FMFLocation, MKUserLocation, UIColor, UIImage;

@protocol FMFMapViewDelegateInternalDelegate <NSObject>
- (UIColor *)_internalAnnotationTintColor;
- (UIImage *)annotationImageForHandle:(FMFHandle *)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (BOOL)viewWillAppearCalled;
- (void)mapViewDidFinishRenderingMap;
- (BOOL)shouldZoomToFitMeAndLocations;
- (void)setShouldZoomToFitNewLocations:(BOOL)arg1;
- (void)didUpdateUserLocation:(MKUserLocation *)arg1;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(BOOL)arg1;
- (void)regionWillChangeAnimated:(BOOL)arg1;
- (void)didDeselectLocation:(FMFLocation *)arg1;
- (void)didSelectLocation:(FMFLocation *)arg1;
@end
