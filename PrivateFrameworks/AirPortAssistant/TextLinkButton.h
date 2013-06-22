/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class NSString;

@interface TextLinkButton : UIButton
{
    NSString *_urlString;
    id <TextLinkButtonDelegate> _delegate;
}

@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) id <TextLinkButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tapAction:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

