/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSMutableArray, NSString;

@interface SKUIMenuPageComponent : SKUIPageComponent
{
    NSMutableArray *_childrenComponents;
    int _menuStyle;
    NSString *_menuTitle;
    float _menuTitleFontSize;
    int _menuTitleFontWeight;
    NSString *_titleForMoreItem;
    NSMutableArray *_titles;
}

@property(readonly, nonatomic) NSString *titleForMoreItem; // @synthesize titleForMoreItem=_titleForMoreItem;
@property(readonly, nonatomic) int menuTitleFontWeight; // @synthesize menuTitleFontWeight=_menuTitleFontWeight;
@property(readonly, nonatomic) float menuTitleFontSize; // @synthesize menuTitleFontSize=_menuTitleFontSize;
@property(readonly, nonatomic) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
@property(readonly, nonatomic) int menuStyle; // @synthesize menuStyle=_menuStyle;
- (void).cxx_destruct;
- (id)_componentWithContext:(id)arg1;
- (int)componentType;
- (id)titleForIndex:(int)arg1;
@property(readonly, nonatomic) int numberOfItems;
- (id)childComponentsForIndex:(int)arg1;
@property(readonly, nonatomic) NSArray *allTitles;
- (id)initWithCustomPageContext:(id)arg1;

@end

