//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFDictionaryConvertible-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate, NSSet, NSString;

@interface ADRapportProximityObservation : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    int _proximity;	// 8 = 0x8
    NSSet *_deviceIDPair;	// 16 = 0x10
    NSDate *_observationDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001002a979c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001002aa230
- (void).cxx_destruct;	// IMP=0x00000001002a9f8c
@property(readonly, copy, nonatomic) NSDate *observationDate; // @synthesize observationDate=_observationDate;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(readonly, copy, nonatomic) NSSet *deviceIDPair; // @synthesize deviceIDPair=_deviceIDPair;
- (id)buildDictionaryRepresentation;	// IMP=0x00000001002a9d2c
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001002a99c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001002a9914
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002a97a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002a9798
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002a9654
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001002a9390
@property(readonly, copy) NSString *description;
- (id)initWithDeviceIDPair:(id)arg1 proximity:(int)arg2 observationDate:(id)arg3;	// IMP=0x00000001002a92b0
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001002aa2b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

