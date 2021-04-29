//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADDeviceSyncCommandPullSnapshotRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100050fc8
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010005123c
- (void).cxx_destruct;	// IMP=0x0000000100051090
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100051064
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100050fd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100050fc4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100050f04
- (unsigned long long)hash;	// IMP=0x0000000100050ef4
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000100050d74
- (id)description;	// IMP=0x0000000100050d64
- (id)initWithDataType:(id)arg1;	// IMP=0x0000000100050ce4
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001000512bc

@end

