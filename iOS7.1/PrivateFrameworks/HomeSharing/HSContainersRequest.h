//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest
{
    BOOL _shouldParseResponse;
}

+ (id)requestWithDatabaseID:(unsigned int)arg1;
@property(nonatomic) BOOL shouldParseResponse; // @synthesize shouldParseResponse=_shouldParseResponse;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithAction:(id)arg1;

@end

