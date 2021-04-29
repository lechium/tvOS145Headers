//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100009fcc
+ (id)defaultFields;	// IMP=0x0000000100009d80
- (void).cxx_destruct;	// IMP=0x000000010000a5fc
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;	// IMP=0x000000010000a540
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a474
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010000a3a0
- (id)description;	// IMP=0x000000010000a2fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a1ec
- (unsigned long long)hash;	// IMP=0x000000010000a168
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000a164
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000a0ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100009fd4
- (id)init;	// IMP=0x0000000100009fb8
- (id)initWithFields:(id)arg1;	// IMP=0x0000000100009ee0

@end
