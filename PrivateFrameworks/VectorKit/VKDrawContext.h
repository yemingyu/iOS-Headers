/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLContext.h>

@class VGLRoadAtlas, VGLTexture, VKCamera, VKViewTransform;

@interface VKDrawContext : VGLContext
{
    int _frameNumber;
    double _timestamp;
    id <VGLCanvas> _canvas;
    VKCamera *_camera;
    VKViewTransform *_viewTransform;
    CDStruct_aa5aacbc _modelMatrix;
    CDStruct_aa5aacbc _modelViewProjectionMatrix;
    CDUnion_f5b85e25 _shaderMatrix;
    Vec3Imp_f658403c _light;
    BOOL _cullFaceEnabled;
    unsigned int _mapLayerPosition;
    VGLTexture *_alphaTexture;
    VGLTexture *_arrowTexture;
    VGLRoadAtlas *_alphaAtlas;
    VGLTexture *_mediumTrafficTexture;
    VGLTexture *_slowTrafficTexture;
    VGLTexture *_borderTexture;
    BOOL _gesturing;
    BOOL _hasOccluders;
    BOOL _hasMovingOccluders;
    double _styleZ;
    Vec2Imp_1782d7e3 _deviceTilt;
    struct VKEdgeInsets _edgeInsets;
    unsigned char _stencilStart;
}

@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) Vec2Imp_1782d7e3 deviceTilt; // @synthesize deviceTilt=_deviceTilt;
@property(nonatomic) BOOL hasMovingOccluders; // @synthesize hasMovingOccluders=_hasMovingOccluders;
@property(nonatomic) BOOL hasOccluders; // @synthesize hasOccluders=_hasOccluders;
@property(readonly, nonatomic) double styleZ; // @synthesize styleZ=_styleZ;
@property(nonatomic, getter=isGesturing) BOOL gesturing; // @synthesize gesturing=_gesturing;
@property(nonatomic) unsigned int mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;
@property(nonatomic) Vec3Imp_f658403c light; // @synthesize light=_light;
@property(readonly, nonatomic) CDUnion_f5b85e25 shaderMatrix; // @synthesize shaderMatrix=_shaderMatrix;
@property(retain, nonatomic) VKViewTransform *viewTransform; // @synthesize viewTransform=_viewTransform;
@property(readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) id <VGLCanvas> canvas; // @synthesize canvas=_canvas;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int frameNumber; // @synthesize frameNumber=_frameNumber;
- (id).cxx_construct;
- (void)markStencilAsDirty;
- (unsigned char)reserveStencilValues:(unsigned char)arg1;
- (float)styleZAdjust;
- (void)startFrameWithCamera:(id)arg1;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *modelViewProjectionMatrix;
@property(nonatomic) const CDStruct_aa5aacbc *modelMatrix;
- (void)dealloc;
@property(readonly, nonatomic) VGLTexture *borderTexture;
@property(readonly, nonatomic) VGLTexture *arrowTexture; // @synthesize arrowTexture=_arrowTexture;
@property(readonly, nonatomic) VGLTexture *mediumTrafficTexture;
@property(readonly, nonatomic) VGLTexture *slowTrafficTexture;
@property(readonly, nonatomic) VGLTexture *alphaTexture; // @synthesize alphaTexture=_alphaTexture;
@property(readonly, nonatomic) VGLRoadAtlas *alphaAtlas; // @synthesize alphaAtlas=_alphaAtlas;
- (int)drawDebugText:(id)arg1 lineNumber:(int)arg2;
- (void)debugDrawString:(id)arg1 pixel:(Vec2Imp_1782d7e3)arg2 color:(struct _VGLColor)arg3 fontSize:(float)arg4;
- (void)debugDrawString:(id)arg1 point:(Vec2Imp_1782d7e3)arg2 color:(struct _VGLColor)arg3 fontSize:(float)arg4;
- (void)debugDrawString:(id)arg1 worldPoint:(struct VKPoint)arg2 color:(struct _VGLColor)arg3 fontSize:(float)arg4;
- (void)debugDrawPath:(int)arg1 pixels:(Vec2Imp_1782d7e3 *)arg2 color:(struct _VGLColor)arg3;
- (void)debugDrawPath:(int)arg1 points:(Vec2Imp_1782d7e3 *)arg2 color:(struct _VGLColor)arg3;
- (void)debugDrawAsteriskAtPixel:(Vec2Imp_1782d7e3)arg1 color:(struct _VGLColor)arg2;
- (void)debugDrawAsteriskAtPoint:(Vec2Imp_1782d7e3)arg1 color:(struct _VGLColor)arg2;
- (void)debugDrawAsteriskAtWorldPoint:(struct VKPoint)arg1 color:(struct _VGLColor)arg2;
- (Vec2Imp_1782d7e3)pixelForPoint:(Vec2Imp_1782d7e3)arg1;
- (Vec2Imp_1782d7e3)pixelForWorldPoint:(struct VKPoint)arg1;

@end

