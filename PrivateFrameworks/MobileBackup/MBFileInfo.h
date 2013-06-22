/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface MBFileInfo : NSObject <NSCopying, NSCoding>
{
    BOOL _isDirectory;
    NSString *_path;
    int _priority;
    NSDictionary *_extendedAttributes;
}

+ (id)fileInfoWithPath:(id)arg1 extendedAttributes:(id)arg2;
@property(copy, nonatomic) NSDictionary *extendedAttributes; // @synthesize extendedAttributes=_extendedAttributes;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) BOOL isDirectory; // @synthesize isDirectory=_isDirectory;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 extendedAttributes:(id)arg2;

@end

