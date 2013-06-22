/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface TSDBezierPath : NSObject <NSCopying, NSCoding>
{
    int sfr_elementCount;
    int sfr_elementMax;
    struct PATHSEGMENT {
        unsigned int :4;
        unsigned int :28;
        struct CGPoint;
    } *sfr_head;
    float *sfr_elementLength;
    float sfr_totalLength;
    int sfr_lastSubpathIndex;
    void *sfr_extraSegments;
    float sfr_lineWidth;
    struct CGRect sfr_controlPointBounds;
    float sfr_miterLimit;
    float sfr_flatness;
    float *sfr_dashedLinePattern;
    unsigned int sfr_dashedLineCount;
    float sfr_dashedLinePhase;
    void *sfr_path;
    int sfr_extraSegmentCount;
    int sfr_extraSegmentMax;
    struct {
        unsigned int sfr_flags:8;
        unsigned int sfr_pathState:2;
        unsigned int sfr_calculatedLengths:1;
        unsigned int sfr_unused:21;
    } sfr_bpFlags;
}

+ (float)defaultLineWidth;
+ (void)setDefaultLineWidth:(float)arg1;
+ (unsigned int)defaultLineJoinStyle;
+ (void)setDefaultLineJoinStyle:(unsigned int)arg1;
+ (unsigned int)defaultLineCapStyle;
+ (void)setDefaultLineCapStyle:(unsigned int)arg1;
+ (unsigned int)defaultWindingRule;
+ (void)setDefaultWindingRule:(unsigned int)arg1;
+ (float)defaultFlatness;
+ (void)setDefaultFlatness:(float)arg1;
+ (float)defaultMiterLimit;
+ (void)setDefaultMiterLimit:(float)arg1;
+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (void)clipRect:(struct CGRect)arg1;
+ (void)strokeRect:(struct CGRect)arg1;
+ (void)fillRect:(struct CGRect)arg1;
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(float)arg2;
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)bezierPathWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
+ (id)bezierPath;
+ (void)initialize;
+ (float)lineWidth;
+ (void)setLineWidth:(float)arg1;
+ (unsigned int)lineJoinStyle;
+ (void)setLineJoinStyle:(unsigned int)arg1;
+ (unsigned int)lineCapStyle;
+ (void)setLineCapStyle:(unsigned int)arg1;
+ (unsigned int)windingRule;
+ (void)setWindingRule:(unsigned int)arg1;
+ (float)flatness;
+ (void)setFlatness:(float)arg1;
+ (float)miterLimit;
+ (void)setMiterLimit:(float)arg1;
- (id).cxx_construct;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startAngle:(float)arg2 swingAngle:(float)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startRadialVector:(struct CGPoint)arg2 endRadialVector:(struct CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5;
- (id)initWithCString:(const char *)arg1;
- (const char *)cString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(float)arg3;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;
- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(int)arg2;
- (void)appendBezierPathWithRect:(struct CGRect)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)_appendToPath:(id)arg1;
- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(int)arg2;
- (unsigned int)elementAtIndex:(int)arg1 allPoints:(struct CGPoint *)arg2;
- (unsigned int)elementAtIndex:(int)arg1 associatedPoints:(struct CGPoint *)arg2;
- (unsigned int)elementAtIndex:(int)arg1;
- (int)elementCount;
- (float)lengthToElement:(int)arg1;
- (float)lengthOfElement:(int)arg1;
- (float)length;
- (void)calculateLengths;
- (float)calculateLengthOfElement:(int)arg1;
- (BOOL)isClockwise;
- (BOOL)isFlat;
- (struct CGRect)bounds;
- (struct CGRect)controlPointBounds;
- (struct CGPoint)currentPoint;
- (BOOL)isEmpty;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (struct CGPath *)cgPath;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (id)bezierPathByReversingPath;
- (id)_copyFlattenedPath;
- (id)bezierPathByFlatteningPath;
- (void)flattenIntoPath:(id)arg1;
- (void)subdivideBezierWithFlatness:(float)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;
- (void)addClip;
- (void)fill;
- (void)stroke;
- (void)_doPath;
- (void)getLineDash:(float *)arg1 count:(int *)arg2 phase:(float *)arg3;
- (void)setLineDash:(const float *)arg1 count:(int)arg2 phase:(float)arg3;
- (void)setFlatness:(float)arg1;
- (float)flatness;
- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (void)setWindingRule:(unsigned int)arg1;
- (unsigned int)windingRule;
- (void)setLineJoinStyle:(unsigned int)arg1;
- (unsigned int)lineJoinStyle;
- (void)setLineCapStyle:(unsigned int)arg1;
- (unsigned int)lineCapStyle;
- (void)setLineWidth:(float)arg1;
- (float)lineWidth;
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)relativeLineToPoint:(struct CGPoint)arg1;
- (void)relativeMoveToPoint:(struct CGPoint)arg1;
- (void)removeAllPoints;
- (void)closePath;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)attachBezierPath:(id)arg1;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)_deviceLineToPoint:(struct CGPoint)arg1;
- (void)_deviceMoveToPoint:(struct CGPoint)arg1;
- (void)_addPathSegment:(int)arg1 point:(struct CGPoint)arg2;
- (id)description;

@end

