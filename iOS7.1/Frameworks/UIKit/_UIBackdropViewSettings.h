//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage, _UIBackdropColorSettings, _UIBackdropView;

@interface _UIBackdropViewSettings : NSObject
{
    BOOL _explicitlySetGraphicsQuality;
    BOOL _requiresColorStatistics;
    BOOL _highlighted;
    BOOL _selected;
    BOOL _enabled;
    BOOL _backdropVisible;
    BOOL _zoomsBack;
    BOOL _lightenGrayscaleWithSourceOver;
    BOOL _darkenWithSourceOver;
    BOOL _designMode;
    BOOL _usesBackdropEffectView;
    BOOL _usesGrayscaleTintView;
    BOOL _usesColorTintView;
    BOOL _usesColorBurnTintView;
    BOOL _usesContentView;
    BOOL _usesDarkeningTintView;
    BOOL _appliesTintAndBlurSettings;
    UIColor *_combinedTintColor;
    _UIBackdropView *_backdrop;
    int _style;
    int _graphicsQuality;
    _UIBackdropColorSettings *_colorSettings;
    int _renderingHint;
    int _stackingLevel;
    float _grayscaleTintLevel;
    float _grayscaleTintAlpha;
    float _grayscaleTintMaskAlpha;
    UIImage *_grayscaleTintMaskImage;
    UIColor *_colorTint;
    float _colorTintAlpha;
    float _colorTintMaskAlpha;
    UIImage *_colorTintMaskImage;
    float _colorBurnTintLevel;
    float _colorBurnTintAlpha;
    UIImage *_colorBurnTintMaskImage;
    float _darkeningTintAlpha;
    float _darkeningTintHue;
    float _darkeningTintSaturation;
    float _darkeningTintBrightness;
    UIImage *_darkeningTintMaskImage;
    float _blurRadius;
    NSString *_blurQuality;
    int _blurHardEdges;
    float _saturationDeltaFactor;
    float _filterMaskAlpha;
    UIImage *_filterMaskImage;
    UIColor *_legibleColor;
    float _scale;
    unsigned int _version;
    int _suppressSettingsDidChange;
    struct __CFRunLoopObserver *_runLoopObserver;
    double _statisticsInterval;
}

+ (id)darkeningTintColor;
+ (id)settingsForPrivateStyle:(int)arg1;
+ (id)settingsForStyle:(int)arg1;
+ (id)settingsForPrivateStyle:(int)arg1 graphicsQuality:(int)arg2;
+ (id)settingsForStyle:(int)arg1 graphicsQuality:(int)arg2;
@property(nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(nonatomic) int suppressSettingsDidChange; // @synthesize suppressSettingsDidChange=_suppressSettingsDidChange;
@property(nonatomic) BOOL appliesTintAndBlurSettings; // @synthesize appliesTintAndBlurSettings=_appliesTintAndBlurSettings;
@property(nonatomic) BOOL usesDarkeningTintView; // @synthesize usesDarkeningTintView=_usesDarkeningTintView;
@property(nonatomic) BOOL usesContentView; // @synthesize usesContentView=_usesContentView;
@property(nonatomic) BOOL usesColorBurnTintView; // @synthesize usesColorBurnTintView=_usesColorBurnTintView;
@property(nonatomic) BOOL usesColorTintView; // @synthesize usesColorTintView=_usesColorTintView;
@property(nonatomic) BOOL usesGrayscaleTintView; // @synthesize usesGrayscaleTintView=_usesGrayscaleTintView;
@property(nonatomic) BOOL usesBackdropEffectView; // @synthesize usesBackdropEffectView=_usesBackdropEffectView;
@property(nonatomic, setter=setDesignMode:) BOOL designMode; // @synthesize designMode=_designMode;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) double statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *legibleColor; // @synthesize legibleColor=_legibleColor;
@property(retain, nonatomic) UIImage *filterMaskImage; // @synthesize filterMaskImage=_filterMaskImage;
@property(nonatomic) float filterMaskAlpha; // @synthesize filterMaskAlpha=_filterMaskAlpha;
@property(nonatomic) float saturationDeltaFactor; // @synthesize saturationDeltaFactor=_saturationDeltaFactor;
@property(nonatomic) int blurHardEdges; // @synthesize blurHardEdges=_blurHardEdges;
@property(copy, nonatomic) NSString *blurQuality; // @synthesize blurQuality=_blurQuality;
@property(nonatomic) float blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) BOOL darkenWithSourceOver; // @synthesize darkenWithSourceOver=_darkenWithSourceOver;
@property(retain, nonatomic) UIImage *darkeningTintMaskImage; // @synthesize darkeningTintMaskImage=_darkeningTintMaskImage;
@property(nonatomic) float darkeningTintBrightness; // @synthesize darkeningTintBrightness=_darkeningTintBrightness;
@property(nonatomic) float darkeningTintSaturation; // @synthesize darkeningTintSaturation=_darkeningTintSaturation;
@property(nonatomic) float darkeningTintHue; // @synthesize darkeningTintHue=_darkeningTintHue;
@property(nonatomic) float darkeningTintAlpha; // @synthesize darkeningTintAlpha=_darkeningTintAlpha;
@property(retain, nonatomic) UIImage *colorBurnTintMaskImage; // @synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage;
@property(nonatomic) float colorBurnTintAlpha; // @synthesize colorBurnTintAlpha=_colorBurnTintAlpha;
@property(nonatomic) float colorBurnTintLevel; // @synthesize colorBurnTintLevel=_colorBurnTintLevel;
@property(retain, nonatomic) UIImage *colorTintMaskImage; // @synthesize colorTintMaskImage=_colorTintMaskImage;
@property(nonatomic) float colorTintMaskAlpha; // @synthesize colorTintMaskAlpha=_colorTintMaskAlpha;
@property(nonatomic) float colorTintAlpha; // @synthesize colorTintAlpha=_colorTintAlpha;
@property(retain, nonatomic) UIColor *colorTint; // @synthesize colorTint=_colorTint;
@property(nonatomic) BOOL lightenGrayscaleWithSourceOver; // @synthesize lightenGrayscaleWithSourceOver=_lightenGrayscaleWithSourceOver;
@property(retain, nonatomic) UIImage *grayscaleTintMaskImage; // @synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage;
@property(nonatomic) float grayscaleTintMaskAlpha; // @synthesize grayscaleTintMaskAlpha=_grayscaleTintMaskAlpha;
@property(nonatomic) float grayscaleTintAlpha; // @synthesize grayscaleTintAlpha=_grayscaleTintAlpha;
@property(nonatomic) float grayscaleTintLevel; // @synthesize grayscaleTintLevel=_grayscaleTintLevel;
@property(nonatomic) BOOL zoomsBack; // @synthesize zoomsBack=_zoomsBack;
@property(nonatomic, getter=isBackdropVisible) BOOL backdropVisible; // @synthesize backdropVisible=_backdropVisible;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) int stackingLevel; // @synthesize stackingLevel=_stackingLevel;
@property(nonatomic) int renderingHint; // @synthesize renderingHint=_renderingHint;
@property(retain, nonatomic) _UIBackdropColorSettings *colorSettings; // @synthesize colorSettings=_colorSettings;
@property(nonatomic) BOOL requiresColorStatistics; // @synthesize requiresColorStatistics=_requiresColorStatistics;
@property(nonatomic) BOOL explicitlySetGraphicsQuality; // @synthesize explicitlySetGraphicsQuality=_explicitlySetGraphicsQuality;
@property(nonatomic) int graphicsQuality; // @synthesize graphicsQuality=_graphicsQuality;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _UIBackdropView *backdrop; // @synthesize backdrop=_backdrop;
- (id)description;
@property(retain, nonatomic) UIColor *combinedTintColor; // @synthesize combinedTintColor=_combinedTintColor;
- (void)computeOutputSettingsUsingModel:(id)arg1;
@property(nonatomic) BOOL blursWithHardEdges; // @dynamic blursWithHardEdges;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)clearRunLoopObserver;
- (void)decrementSuppressSettingsDidChange;
- (void)incrementSuppressSettingsDidChange;
- (void)setStackinglevel:(int)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)dealloc;
- (void)restoreDefaultValues;
- (void)setDefaultValues;
- (id)initWithDefaultValuesForGraphicsQuality:(int)arg1;
- (id)initWithDefaultValues;
- (id)init;

@end
