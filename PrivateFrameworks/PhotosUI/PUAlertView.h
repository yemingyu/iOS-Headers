/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "UIAlertViewDelegate-Protocol.h"

@interface PUAlertView : UIAlertView <UIAlertViewDelegate>
{
    id _shouldEnableFirstOtherButtonBlock;
    id _willDismissHandler;
    id _completionHandler;
}

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) id willDismissHandler; // @synthesize willDismissHandler=_willDismissHandler;
@property(copy, nonatomic) id shouldEnableFirstOtherButtonBlock; // @synthesize shouldEnableFirstOtherButtonBlock=_shouldEnableFirstOtherButtonBlock;
- (void).cxx_destruct;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)showWithCompletionHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)_tearDown;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;

@end

