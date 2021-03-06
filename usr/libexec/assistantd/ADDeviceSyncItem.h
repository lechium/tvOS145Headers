//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSUUID;

@interface ADDeviceSyncItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001002710f8
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001002715bc
- (void).cxx_destruct;	// IMP=0x0000000100271360
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001002712dc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100271100
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002710f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100270fd4
- (unsigned long long)hash;	// IMP=0x0000000100270f88
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000100270dac
- (id)description;	// IMP=0x0000000100270d9c
- (id)initWithUUID:(id)arg1 properties:(id)arg2;	// IMP=0x0000000100270cdc
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010027163c

@end

