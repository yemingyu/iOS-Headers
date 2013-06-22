/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class UIButton, UILabel, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIButton *_okButton;
    BOOL _showsOkButton;
    UILabel *_promptLabel;
    BOOL _showsPromptLabel;
    BOOL _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

@property(nonatomic) BOOL showsPromptLabel; // @synthesize showsPromptLabel=_showsPromptLabel;
@property(readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) BOOL showsOkButton; // @synthesize showsOkButton=_showsOkButton;
@property(readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (struct CGSize)_viewSize;
- (struct CGSize)_passcodeFieldSize;
- (struct CGSize)_okButtonSize;
- (void)_okButtonHit;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)resetForFailedPasscode;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithDefaultSize;

@end

