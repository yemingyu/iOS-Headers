/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class EKEvent, EKEventEditor, EKEventStore, NSString;

@interface EKEventEditViewController : UINavigationController
{
    EKEvent *_event;
    NSString *_eventId;
    BOOL _showsTimeZone;
    EKEventStore *_store;
    id <EKEventEditViewDelegate> _editViewDelegate;
    EKEventEditor *_editor;
}

+ (void)setDefaultDatesForEvent:(id)arg1;
@property(retain, nonatomic) EKEventEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) BOOL showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) __weak id <EKEventEditViewDelegate> editViewDelegate; // @synthesize editViewDelegate=_editViewDelegate;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_store;
- (void).cxx_destruct;
- (void)handleTapOutside;
@property(nonatomic) BOOL canHideDoneAndCancelButtons;
@property(nonatomic) BOOL showAttachments;
@property(nonatomic) BOOL scrollToNotes;
- (unsigned int)supportedInterfaceOrientations;
- (void)_storeChanged:(id)arg1;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)cancelEditing;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (void)refreshStartAndEndDates;
- (struct CGSize)contentSizeForViewInPopover;
@property(retain, nonatomic) EKEvent *event;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithEvent:(id)arg1 store:(id)arg2;

@end

