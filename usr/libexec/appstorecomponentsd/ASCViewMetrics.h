//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary;

@interface ASCViewMetrics : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_instructions;	// 8 = 0x8
    NSDictionary *_pageFields;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001756c
- (void).cxx_destruct;	// IMP=0x0000000100017cdc
@property(readonly, copy, nonatomic) NSDictionary *pageFields; // @synthesize pageFields=_pageFields;
@property(readonly, copy, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
- (id)dataForInvocationPoint:(id)arg1;	// IMP=0x0000000100017adc
- (id)description;	// IMP=0x00000001000179f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100017860
- (unsigned long long)hash;	// IMP=0x000000010001779c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100017798
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000176e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100017574
- (id)initWithInstructions:(id)arg1 pageFields:(id)arg2;	// IMP=0x00000001000174ac

@end

