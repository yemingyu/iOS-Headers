/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class AVSpeechSynthesisVoice, NSString;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding>
{
    AVSpeechSynthesisVoice *_voice;
    NSString *_speechString;
    float _rate;
    float _pitchMultiplier;
    float _volume;
    double _preUtteranceDelay;
    double _postUtteranceDelay;
}

+ (BOOL)supportsSecureCoding;
+ (id)speechUtteranceWithString:(id)arg1;
@property(nonatomic) double postUtteranceDelay; // @synthesize postUtteranceDelay=_postUtteranceDelay;
@property(nonatomic) double preUtteranceDelay; // @synthesize preUtteranceDelay=_preUtteranceDelay;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitchMultiplier; // @synthesize pitchMultiplier=_pitchMultiplier;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSString *speechString; // @synthesize speechString=_speechString;
@property(retain, nonatomic) AVSpeechSynthesisVoice *voice; // @synthesize voice=_voice;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end

