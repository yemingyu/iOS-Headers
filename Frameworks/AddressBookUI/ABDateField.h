/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABUILabelWithPlaceholder.h>

@class NSDate, UIButton, UIDatePicker;

@interface ABDateField : ABUILabelWithPlaceholder
{
    UIButton *_clearButton;
    BOOL _isClearButtonEnabled;
    NSDate *_date;
    UIDatePicker *_datePicker;
    struct CGSize _datePickerSize;
    BOOL _usesDatePickerAsInputView;
    BOOL _isFirstResponder;
    BOOL _inBecomeFirstResponder;
    BOOL _editable;
    id <ABDateFieldDelegate> _delegate;
    id <ABDatePickerPresentationDelegate> _presentationDelegate;
}

@property(nonatomic) id <ABDatePickerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) id <ABDateFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize datePickerSize; // @synthesize datePickerSize=_datePickerSize;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
- (void)endEditing;
- (id)inputView;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)datePickerDateDidChange:(id)arg1;
- (void)_attachToDatePicker:(id)arg1;
- (void)_dettachFromDatePicker:(id)arg1;
- (void)_setDate:(id)arg1 andInformDelegate:(BOOL)arg2;
- (void)_updateLabelText;
- (void)_clearButtonPressed:(id)arg1;
- (void)_updateClearButton;
- (void)_setClearButtonEnabled:(BOOL)arg1;
- (BOOL)_shouldEnableClearButton;
- (id)_clearButton;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1 isClearButtonPresent:(BOOL)arg2;
- (struct CGRect)_clearButtonRectForBounds:(struct CGRect)arg1;
- (float)_extraWidthForClearButton;
- (struct CGSize)_clearButtonSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

