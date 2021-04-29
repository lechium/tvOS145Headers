//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface ADDeviceSyncCommandPullGenerationsRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_dataTypes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010009004c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010009030c
- (void).cxx_destruct;	// IMP=0x0000000100090160
@property(readonly, copy, nonatomic) NSArray *dataTypes; // @synthesize dataTypes=_dataTypes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100090134
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100090054
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100090048
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008ff88
- (unsigned long long)hash;	// IMP=0x000000010008ff78
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010008fdf8
- (id)description;	// IMP=0x000000010008fde8
- (id)initWithDataTypes:(id)arg1;	// IMP=0x000000010008fd68
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010009038c

@end

