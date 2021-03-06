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

@interface ADAudioSessionCoordinationMessageEndAudioSessionResponse : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001c0df4
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c0f20
- (id)buildDictionaryRepresentation;	// IMP=0x00000001001c0e4c
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001001c0e0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001c0e08
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001c0dfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001c0df0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001c0dbc
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001001c0d4c
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000001001c0d08
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c0fa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

