/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAGradientLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
@property(copy) NSString *type;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy) NSArray *locations;
@property(copy) NSArray *colors;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
@property(retain) id colorMap;

@end

