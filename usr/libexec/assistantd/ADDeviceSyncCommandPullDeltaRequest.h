//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADDeviceSyncCommandPullDeltaRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_dataType;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001002c4dcc
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001002c524c
- (void).cxx_destruct;	// IMP=0x00000001002c5010
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001002c4f14
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002c4dd4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002c4dc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002c4cb8
- (unsigned long long)hash;	// IMP=0x00000001002c4c04
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001002c49bc
- (id)description;	// IMP=0x00000001002c49ac
- (id)initWithDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x00000001002c4918
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001002c52cc

@end

