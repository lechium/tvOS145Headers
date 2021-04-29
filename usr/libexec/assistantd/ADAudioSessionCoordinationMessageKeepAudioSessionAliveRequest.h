//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFDictionaryConvertible-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    double _expirationDuration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010019c470
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010019c864
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
- (id)buildDictionaryRepresentation;	// IMP=0x000000010019c688
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000010019c5a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010019c51c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010019c478
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010019c46c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010019c3e0
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010019c1fc
@property(readonly, copy) NSString *description;
- (id)initWithExpirationDuration:(double)arg1;	// IMP=0x000000010019c1a4
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010019c8e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

