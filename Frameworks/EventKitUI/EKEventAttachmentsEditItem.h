/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventEditItem.h>

#import "EKEventAttachmentCellControllerDelegate-Protocol.h"
#import "EKEventAttachmentEditViewControllerDelegate-Protocol.h"

@class NSArray;

@interface EKEventAttachmentsEditItem : EKEventEditItem <EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate>
{
    NSArray *_cellControllers;
}

- (void).cxx_destruct;
- (id)owningEventForAttachmentEditViewController:(id)arg1;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (unsigned int)numberOfSubitemsInSubsection:(unsigned int)arg1;
- (BOOL)_shouldCondenseIntoSingleItem;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (void)refreshFromCalendarItemAndStore;
- (void)_cleanUpCellControllers;

@end

