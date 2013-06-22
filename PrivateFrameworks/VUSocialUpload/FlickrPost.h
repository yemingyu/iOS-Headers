/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSArray, NSData, NSString, NSURL;

@interface FlickrPost : NSObject <NSURLConnectionDelegate>
{
    BOOL _hidden;
    NSURL *_assetURL;
    NSData *_photoData;
    NSString *_title;
    NSString *_description;
    NSArray *_tags;
    unsigned int _visibility;
    int _safetyLevel;
    int _contentType;
    id <FlickrPostDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) id <FlickrPostDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) int safetyLevel; // @synthesize safetyLevel=_safetyLevel;
@property(nonatomic) unsigned int visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *photoData; // @synthesize photoData=_photoData;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void)uploadToAccount:(id)arg1;
- (void)_uploadData:(id)arg1 toAccount:(id)arg2;
- (void)dealloc;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;

@end

