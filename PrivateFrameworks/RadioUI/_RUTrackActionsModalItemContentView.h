/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIModalItemContentView.h"

@class NSString, UIImage, UITableView, _RUTrackActionsHeaderView, _UIBackdropView;

@interface _RUTrackActionsModalItemContentView : _UIModalItemContentView
{
    _UIBackdropView *_backdropView;
    _RUTrackActionsHeaderView *_headerView;
    UITableView *_tableView;
    int _enabledActions;
    int _onActions;
}

@property(nonatomic) int onActions; // @synthesize onActions=_onActions;
@property(nonatomic) int enabledActions; // @synthesize enabledActions=_enabledActions;
- (void).cxx_destruct;
- (id)_titleForAction:(int)arg1;
- (void)_layoutViewHierarchy;
- (struct UIOffset)_accessoryImageOffsetForAction:(int)arg1;
- (id)_accessoryImageForAction:(int)arg1 highlighted:(BOOL)arg2;
@property(copy, nonatomic) NSString *songText;
@property(retain, nonatomic) UIImage *artworkImage;
@property(copy, nonatomic) NSString *artistText;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setModalItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

