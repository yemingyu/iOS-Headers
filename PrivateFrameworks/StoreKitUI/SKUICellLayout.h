/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SKUIClientContext, UIView;

@interface SKUICellLayout : NSObject
{
    UIView *_cell;
    SKUIClientContext *_clientContext;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *parentCellView; // @synthesize parentCellView=_cell;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)resetLayout;
- (void)layoutSubviews;
- (id)initWithTableViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end

