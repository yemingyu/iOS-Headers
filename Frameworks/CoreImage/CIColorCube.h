/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface CIColorCube : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputCubeDimension;
    NSData *inputCubeData;
    CIImage *_cubeImage;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSData *inputCubeData; // @synthesize inputCubeData;
@property(retain, nonatomic) NSNumber *inputCubeDimension; // @synthesize inputCubeDimension;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_checkInputs;
- (id)cubeImage;
- (id)_kernel;
- (void)setDefaults;
- (void)dealloc;

@end

