/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKMessagePart.h>

@class NSAttributedString;

@interface CKTextMessagePart : CKMessagePart
{
    NSAttributedString *_text;
}

- (id)pasteboardItems;
- (id)description;
@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1;
- (int)type;
- (id)detachedCopy;
- (void)dealloc;
- (Class)balloonViewClass;

@end

