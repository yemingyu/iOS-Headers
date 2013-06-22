/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TextInput/TIKeyboardOperation.h>

@class NSDictionary, NSString;

@interface TIKeyboardOperationSetTypologyLog : TIKeyboardOperation
{
    NSString *_typedString;
    NSDictionary *_logDictionary;
}

+ (id)operationWithTypedString:(id)arg1 logDictionary:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *logDictionary; // @synthesize logDictionary=_logDictionary;
@property(readonly, nonatomic) NSString *typedString; // @synthesize typedString=_typedString;
- (id)propertiesForDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypedString:(id)arg1 logDictionary:(id)arg2;
- (void)dealloc;

@end

