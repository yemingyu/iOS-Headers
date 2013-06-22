/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EKEditItemViewControllerDelegate-Protocol.h"

@class EKEvent, EKEventStore, UIViewController<EKEditItemViewControllerProtocol>;

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate>
{
    EKEventStore *_store;
    EKEvent *_event;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    BOOL _allowsEditing;
    BOOL _shouldIndent;
    id <EKEventDetailItemDelegate> _delegate;
    int _cellPosition;
}

@property(nonatomic) BOOL shouldIndent; // @synthesize shouldIndent=_shouldIndent;
@property(nonatomic) int cellPosition; // @synthesize cellPosition=_cellPosition;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) __weak id <EKEventDetailItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)saveEvent;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)notifySubitemDidCommit:(unsigned int)arg1;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)layoutCellsForWidth:(float)arg1 position:(int)arg2;
- (unsigned int)numberOfSubitems;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)dealloc;

@end

