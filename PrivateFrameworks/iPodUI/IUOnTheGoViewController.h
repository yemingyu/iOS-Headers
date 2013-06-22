/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMusicViewController.h>

#import "AFContextProvider-Protocol.h"
#import "IUMediaActionButtonsCellDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IUMediaActionButtonsCell, IUMediaActionSheet, IUMediaAlertView;

@interface IUOnTheGoViewController : IUMusicViewController <AFContextProvider, IUMediaActionButtonsCellDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    IUMediaActionButtonsCell *_buttonsCell;
    IUMediaActionSheet *_confirmPlaylistChangeSheet;
    IUMediaAlertView *_renamePlaylistAlert;
    BOOL _searchBarHiddenOrHiding;
}

- (void).cxx_destruct;
- (void)_updateCloudPlaylist;
- (void)_presentModalContextWithDefaultIdentifier:(id)arg1;
- (void)_handleRename;
- (void)_handleDelete;
- (void)_handleClear;
- (void)_confirmDeletePlaylist;
- (void)_confirmClearPlaylist;
- (id)_buttonsCellButtonTitlesForCurrentState;
- (void)_addButtonAction:(id)arg1;
- (void)_backingStoreChangedNotification:(id)arg1;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)modalContextWillDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)mediaActionButtonsCell:(id)arg1 clickedButtonAtIndex:(unsigned int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)reloadActionRows;
- (BOOL)hasSearchBar;
- (void)setContext:(id)arg1;
- (BOOL)handleTabBarSelectedViewController:(id)arg1;
- (void)configureNavigationItem:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateForChangedEditingState:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

