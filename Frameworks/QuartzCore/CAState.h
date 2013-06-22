/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface CAState : NSObject <NSCoding, NSCopying>
{
    NSString *_name;
    NSString *_basedOn;
    NSMutableArray *_elements;
    double _nextDelay;
    double _previousDelay;
    BOOL _enabled;
    BOOL _locked;
    BOOL _initial;
}

+ (void)CAMLParserStartElement:(id)arg1;
@property(getter=isInitial) BOOL initial; // @synthesize initial=_initial;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property double previousDelay; // @synthesize previousDelay=_previousDelay;
@property double nextDelay; // @synthesize nextDelay=_nextDelay;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy) NSString *basedOn; // @synthesize basedOn=_basedOn;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)foreachLayer:(id)arg1;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1;
@property(copy, nonatomic) NSArray *elements;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

