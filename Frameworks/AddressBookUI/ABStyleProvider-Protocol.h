/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class UIColor, UIFont, UIImage, UIView, _UIGraphicsLetterpressStyle;

@protocol ABStyleProvider <NSObject>
@property(readonly, nonatomic) int groupCellSelectionStyle;
@property(readonly, nonatomic) struct CGSize groupCellShadowOffset;
@property(readonly, nonatomic) UIColor *groupCellShadowColor;
@property(readonly, nonatomic) UIColor *groupCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *groupCellTextColor;
@property(readonly, nonatomic) UIColor *groupCellBackgroundColor;
@property(readonly, nonatomic) struct CGSize groupAccountNameShadowOffset;
@property(readonly, nonatomic) UIColor *groupAccountNameShadowColor;
@property(readonly, nonatomic) UIColor *groupAccountNameColor;
@property(readonly, nonatomic) UIFont *groupAccountNameFont;
@property(readonly, nonatomic) BOOL groupSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) float groupSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) float groupSectionHeaderHeight;
@property(readonly, nonatomic) UIColor *groupsTableBackgroundColor;
@property(readonly, nonatomic) BOOL groupsTableShouldRemoveBackgroundView;
@property(readonly, nonatomic) BOOL peoplePickerBarStyleIsTranslucent;
@property(readonly, nonatomic) int peoplePickerBarStyle;
@property(readonly, nonatomic) BOOL shouldUsePeoplePickerBarStyle;
@property(readonly, nonatomic) BOOL presentDatePickerInPopover;
@property(readonly, nonatomic) BOOL presentNewContactsControllersInPopover;
@property(readonly, nonatomic) BOOL presentModalViewInPopover;
@property(readonly, nonatomic) int unknownModalPresentationStyle;
@property(readonly, nonatomic) int composeModalPresentationStyle;
@property(readonly, nonatomic) BOOL shouldDefinePickerTransitionStyle;
@property(readonly, nonatomic) int pickerTransitionStyle;
@property(readonly, nonatomic) BOOL shouldPropagateStylesToPickers;
@property(readonly, nonatomic) BOOL shouldPropagateStylesThroughUnknownPersonActions;
@property(readonly, nonatomic) UIColor *membersBackgroundColor;
@property(readonly, nonatomic) UIColor *membersHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *membersIndexTrackingBackgroundColor;
@property(readonly, nonatomic) UIColor *membersIndexTextColor;
@property(readonly, nonatomic) float membersIndexMaximumHeight;
@property(readonly, nonatomic) BOOL membersSearchBarIsInTableHeader;
@property(readonly, nonatomic) unsigned int membersCountToShowIndex;
@property(readonly, nonatomic) unsigned int membersCountToShowSections;
@property(readonly, nonatomic) int membersSelectionStyle;
@property(readonly, nonatomic) UIImage *memberSectionListHeaderImage;
@property(readonly, nonatomic) BOOL searchControllerForceKeyboardDisplayEnabled;
@property(readonly, nonatomic) BOOL serverSearchNavigationBarHidingEnabled;
@property(readonly, nonatomic) BOOL searchIsAlwaysActive;
@property(readonly, nonatomic) UIColor *memberSelectedBackgroundColor;
@property(readonly, nonatomic) float memberScrollBarInset;
@property(readonly, nonatomic) UIImage *memberPlaceholderCompanyImage;
@property(readonly, nonatomic) UIImage *memberPlaceholderPersonImage;
@property(readonly, nonatomic) UIImage *memberPhotoOverlayImage;
@property(readonly, nonatomic) UIImage *memberPhotoMaskImage;
@property(readonly, nonatomic) BOOL memberShowContactPhoto;
@property(readonly, nonatomic) struct UIEdgeInsets memberNameInsets;
@property(readonly, nonatomic) struct CGSize memberNameShadowOffset;
@property(readonly, nonatomic) UIColor *memberSearchFieldBackgroundColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedShadowColor;
@property(readonly, nonatomic) UIColor *memberNameShadowColor;
@property(readonly, nonatomic) UIImage *memberNameMeCardDisabledImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardSelectedImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardImage;
@property(readonly, nonatomic) UIColor *memberNameMeCardShadowColor;
@property(readonly, nonatomic) UIColor *memberNameMeCardTextColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedColor;
@property(readonly, nonatomic) UIColor *memberNameDisabledTextColor;
@property(readonly, nonatomic) UIColor *memberNameTextColor;
@property(readonly, nonatomic) float memberNameInterComponentSpacing;
@property(readonly, nonatomic) UIFont *memberNameBoldFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameRegularFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameBoldFont;
@property(readonly, nonatomic) UIFont *memberNamePlaceholderFont;
@property(readonly, nonatomic) UIFont *memberNameRegularFont;
@property(readonly, nonatomic) BOOL labelPickerUsesOpaqueBackground;
@property(readonly, nonatomic) BOOL labelPickerShouldPushCustomLabelCreator;
@property(readonly, nonatomic) BOOL datePickerHasNavigationTitle;
@property(readonly, nonatomic) BOOL cardTableUsesRowFadeAnimation;
@property(readonly, nonatomic) BOOL linkedPhotoLabelStringsDescribeSourceOnly;
@property(readonly, nonatomic) BOOL linkedPhotoPickerIncludesCurrentPhoto;
@property(readonly, nonatomic) float cardLinkingHeaderLabelHeight;
@property(readonly, nonatomic) BOOL linkedCardsShouldAllowDeletion;
@property(readonly, nonatomic) UIView *cardNotesHeaderView;
@property(readonly, nonatomic) float cardNotesHeaderViewHeight;
@property(readonly, nonatomic) BOOL cardNotesLabelIncludesSource;
@property(readonly, nonatomic) BOOL cardAlwaysShowsNotes;
@property(readonly, nonatomic) int cardCellSelectionStyle;
@property(readonly, nonatomic) UIColor *cardCellDisabledBackgroundColor;
@property(readonly, nonatomic) UIColor *cardCellBackgroundColor;
@property(readonly, nonatomic) float cardContentOccluderDefaultBottomFadingHeight;
@property(readonly, nonatomic) float cardContentOccluderDefaultTopFadingHeight;
@property(readonly, nonatomic) BOOL cardActionsAllowVoiceFavorites;
@property(readonly, nonatomic) BOOL cardActionsAllowFaceTimeFavorites;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonsInsets;
@property(readonly, nonatomic) UIImage *cardActionConferenceIconPressed;
@property(readonly, nonatomic) UIImage *cardActionConferenceIcon;
@property(readonly, nonatomic) float cardActionButtonHeight;
@property(readonly, nonatomic) float cardActionButtonSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonImageInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleDoubleLineInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleSingleLineInsets;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundHighlighted;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundNormal;
@property(readonly, nonatomic) int cardActionButtonType;
@property(readonly, nonatomic) float cardCellVerticalSpacingBetweenAlertsOfSimilarType;
@property(readonly, nonatomic) UIImage *cardCellFacebookBadge;
@property(readonly, nonatomic) float cardCellBadgePaddingLeft;
@property(readonly, nonatomic) int cardCellAccessoryTypeEditRingtone;
@property(readonly, nonatomic) int cardCellAccessoryTypeRingtone;
@property(readonly, nonatomic) int cardCellAccessoryTypeEdit;
@property(readonly, nonatomic) int cardCellAccessoryType;
@property(readonly, nonatomic) float cardSectionHeaderHeightForFollowingCardActions;
@property(readonly, nonatomic) float cardSectionHeaderHeightForFirstCardActions;
@property(readonly, nonatomic) BOOL cardShouldUseSeparateSectionsForUnknownCardActions;
@property(readonly, nonatomic) float cardSectionHeaderHeightForBottomActions;
@property(readonly, nonatomic) BOOL cardSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) float cardSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) struct CGSize cardSectionHeaderShadowOffset;
@property(readonly, nonatomic) UIColor *cardSectionHeaderShadowColor;
@property(readonly, nonatomic) UIColor *cardSectionHeaderTextColor;
@property(readonly, nonatomic) UIFont *cardSectionHeaderFont;
@property(readonly, nonatomic) BOOL cardSectionAlwaysWantsHeader;
@property(readonly, nonatomic) UIImage *cardValueClearButtonImage;
@property(readonly, nonatomic) UIColor *cardValueTappableColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardValueEditingInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardValueInsets;
@property(readonly, nonatomic) BOOL cardValueHighlightsWhenTouched;
@property(readonly, nonatomic) struct CGSize cardValueShadowOffset;
@property(readonly, nonatomic) UIColor *cardValueHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardValueShadowColor;
@property(readonly, nonatomic) UIColor *cardValueHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardValueBackgroundColor;
@property(readonly, nonatomic) UIFont *cardValueTextFont;
@property(readonly, nonatomic) UIColor *cardValueDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardValueTextColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardLabelInsets;
@property(readonly, nonatomic) UIColor *cardLabelBackgroundColor;
@property(readonly, nonatomic) float cardLabelWidth;
@property(readonly, nonatomic) UIFont *cardLabelEditingTextFont;
@property(readonly, nonatomic) UIFont *cardLabelTextFont;
@property(readonly, nonatomic) struct CGSize cardLabelShadowOffset;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelImportantHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEmphasizedHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEditingTextColor;
@property(readonly, nonatomic) UIColor *cardLabelDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardLabelTextColor;
@property(readonly, nonatomic) UIColor *cardLabelSelectedBackgroundColor;
@property(readonly, nonatomic) UIColor *cardTableBackgroundColor;
@property(readonly, nonatomic) float cardHeaderEditingImageLeftMargin;
@property(readonly, nonatomic) float cardHeaderEditingImageTopMargin;
@property(readonly, nonatomic) float cardHeaderDisplayImageLeftMargin;
@property(readonly, nonatomic) float cardHeaderDisplayImageTopMargin;
@property(readonly, nonatomic) float cardHeaderViewLeftMargin;
@property(readonly, nonatomic) float cardHeaderViewTopMargin;
@property(readonly, nonatomic) UIColor *cardHeaderBackgroundColor;
@property(readonly, nonatomic) float cardHeaderImageNameEditorSpacing;
@property(readonly, nonatomic) float cardHeaderImageNameSpacing;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelBevelColor;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelColor;
@property(readonly, nonatomic) UIImage *cardPhotoFacebookAttributionImage;
@property(readonly, nonatomic) UIImage *cardPhotoPasteboardMaskImage;
@property(readonly, nonatomic) UIImage *cardPhotoMaskMultipleImage;
@property(readonly, nonatomic) UIImage *cardPhotoEditMultiplePhotoBackdropImage;
@property(readonly, nonatomic) UIImage *cardPhotoEditMultipleOverlayImage;
@property(readonly, nonatomic) UIImage *cardPhotoEditOverlayImage;
@property(readonly, nonatomic) UIImage *cardPhotoEditPlaceholderImage;
@property(readonly, nonatomic) struct CGSize cardPhotoShadowOffset;
@property(readonly, nonatomic) UIImage *cardPhotoShadowImage;
@property(readonly, nonatomic) UIImage *cardPhotoMaskImage;
@property(readonly, nonatomic) struct CGSize cardPhotoOffset;
@property(readonly, nonatomic) float cardPhotoFrameBorderSize;
@property(readonly, nonatomic) BOOL shouldApplyMaskImage;
@property(readonly, nonatomic) BOOL cardPhotoShouldApplyOverlayImageWhenLabelPresent;
@property(readonly, nonatomic) BOOL cardPhotoShouldApplyOverlayImageWhenPersonImagePresent;
@property(readonly, nonatomic) UIImage *cardPhotoOverlayImage;
@property(readonly, nonatomic) UIImage *cardPhotoBackgroundImage;
@property(readonly, nonatomic) UIImage *cardPlaceholderCompanyImage;
@property(readonly, nonatomic) UIImage *cardPlaceholderPersonImage;
@property(readonly, nonatomic) BOOL cardPlaceholderImageShouldApplyMaskAndOverlay;
@property(readonly, nonatomic) BOOL shouldShowCardPhotoPlaceholder;
@property(readonly, nonatomic) BOOL cardHeaderNameViewAlignOnBottom;
@property(readonly, nonatomic) UIColor *cardHeaderDefaultLabelTextColor;
@property(readonly, nonatomic) unsigned int cardTagNumberOfLines;
@property(readonly, nonatomic) unsigned int cardNameNumberOfLines;
@property(readonly, nonatomic) UIFont *cardTaglineTextFont;
@property(readonly, nonatomic) UIColor *cardTaglineShadowColor;
@property(readonly, nonatomic) UIColor *cardTaglineTextColor;
@property(readonly, nonatomic) UIFont *cardHeadlineTextFont;
@property(readonly, nonatomic) UIColor *cardHeadlineShadowColor;
@property(readonly, nonatomic) UIColor *cardHeadlineTextColor;
@property(readonly, nonatomic) UIColor *cardTableCellBorderColor;
@property(readonly, nonatomic) BOOL shouldUseCardContentProviderWhenAvailable;
@property(readonly, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
@property(readonly, nonatomic) BOOL cardTableShouldAdjustForKeyboard;
@property(readonly, nonatomic) BOOL cardTableShouldRemoveBackgroundView;
- (BOOL)reloadCallAction;
- (BOOL)refreshTinyActionCell;
- (void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2;
- (id)newCustomCardTableScrollingBackgroundView;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (int)dialogStyleForDeleteConfirmation;
- (id)cardDeleteButtonImagePressed;
- (id)cardDeleteButtonImage;
- (struct UIEdgeInsets)cardDeleteButtonInsets;
- (float)cardDeleteButtonHeight;
- (struct UIEdgeInsets)cardCellBackgroundInsetsWhenEditing:(BOOL)arg1;
- (id)newCardDividerViewVertical:(BOOL)arg1;
- (id)cardCellDividerShadowColorVertical:(BOOL)arg1;
- (id)cardCellDividerColorVertical:(BOOL)arg1;
- (void)unselectAllCellParts:(id)arg1;
- (void)selectCustomPartWithFrame:(struct CGRect)arg1 occupiedCorners:(unsigned int)arg2 forCell:(id)arg3;
- (void)selectWholePartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectLabelPartForCell:(id)arg1;
- (id)cardTableView:(id)arg1 prepareCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)cardTableView:(id)arg1 wantsHeaderForProperty:(int)arg2 inSection:(int)arg3 whenEditing:(BOOL)arg4;
- (BOOL)personTableHeaderViewScrollsWhenEditing:(BOOL)arg1;
- (float)cardHeaderSpacingFromCardBodyWhenEditing:(BOOL)arg1;
- (float)cardTableViewLinkingHeaderBottomPaddingWhenEditing:(BOOL)arg1;
- (float)cardTableViewLinkingHeaderTopPaddingWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1;
- (float)cardMaxHeightForSwellTextViewWhenEditing:(BOOL)arg1;
- (float)cardNotesMinimumHeightWhenEditing:(BOOL)arg1;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2;
- (id)newCardActionButton;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)editorViewColor;
- (id)editorViewSmallFont;
- (id)editorViewLargeFont;
- (float)personEditorFieldVerticalInset;
- (struct CGSize)personActionShadowOffset;
- (id)personActionShadowColor;
- (id)personActionHighlightedColor;
- (id)personActionColor;
- (id)personActionFont;
- (struct CGSize)personNoValueLabelShadowOffset;
- (id)personNoValueLabelShadowColor;
- (id)personNoValueLabelTextColor;
- (id)personNoValueLabelFont;
- (struct UIEdgeInsets)cardValueInsetsWhenEditing:(BOOL)arg1;
- (id)personValueImportantHighlightColor;
- (id)personValueImportantColor;
- (id)personValueEmphasizedHighlightColor;
- (id)personValueEmphasizedColor;
- (id)personValueHighlightColor;
- (id)personValueColor;
- (id)personValueFont;
- (float)personValueFontMinSize;
- (id)copyLocalizedPropertyName:(int)arg1 lowercase:(BOOL)arg2;
- (id)copyLocalizedLabel:(id)arg1;
- (struct CGSize)personLabelShadowOffset;
- (id)personLabelShadowColor;
- (id)personLabelHighlightedColor;
- (id)personLabelColor;
- (id)personLabelFont;
- (float)personLabelFontMinSize;
- (float)personViewHorizontalCellInset;
- (float)personViewRowHeightWhenEditing:(BOOL)arg1;
- (struct CGSize)personHeaderShadowOffset;
- (id)personHeaderShadowColor;
- (id)personHeaderPasteboardColor;
- (float)personViewHeaderNameViewTextVerticalInset;
- (float)personViewHeaderNameViewTextHorizontalInset;
- (float)personViewHeaderImageHeight;
- (float)personViewHeaderImageWidth;
- (float)personViewVerticalSpacing;
- (float)personViewHeaderMinimumHeight;
- (float)personViewHeaderRightMargin;
- (id)personViewGetNameViewAccessoryImageSelected;
- (id)personViewGetNameViewAccessoryImage;
- (id)personViewGetFavoritesBadgeHighlighted;
- (id)personViewGetFavoritesBadge;
- (id)accessoryButtonForRelatedNames;
- (id)accessoryViewForVideoBadge;
- (id)accessoryViewForFavoritesBadge;
- (id)accessoryViewForMailVIPBadge;
- (id)newBackgroundViewForCellStyle:(int)arg1 selected:(BOOL)arg2;
- (id)newTableFooterViewForCellStyle:(int)arg1;
- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (id)separatorBottomShadowColorForCellStyle:(int)arg1;
- (id)separatorTopShadowColorForCellStyle:(int)arg1;
- (id)separatorColorForCellStyle:(int)arg1;
- (int)separatorStyleForCellStyle:(int)arg1;
- (id)shadowColorForCellStyle:(int)arg1;
- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForCardTableWhenEditing:(BOOL)arg1;
- (int)abCellStyleForMembersTable;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForGroupsTableGrouped;
@end

