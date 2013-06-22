/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying>
{
    NSString *_body;
    unsigned int _bodyMaxLength;
    NSString *_nickname;
    unsigned int _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned int _titleMaxLength;
}

@property(readonly, nonatomic) unsigned int titleMaxLength; // @synthesize titleMaxLength=_titleMaxLength;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *submitURL; // @synthesize submitURL=_submitURL;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(readonly, nonatomic) unsigned int nicknameMaxLength; // @synthesize nicknameMaxLength=_nicknameMaxLength;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) unsigned int bodyMaxLength; // @synthesize bodyMaxLength=_bodyMaxLength;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReviewDictionary:(id)arg1;

@end

