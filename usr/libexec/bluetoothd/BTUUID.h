//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface BTUUID : NSObject <NSCopying>
{
    NSData *data;	// 8 = 0x8
}

+ (id)randomUUID;	// IMP=0x00000001003765cc
+ (id)UUID128WithString:(id)arg1;	// IMP=0x0000000100376508
+ (id)UUID128:(const char *)arg1;	// IMP=0x00000001003764d4
+ (id)UUID16:(unsigned short)arg1;	// IMP=0x000000010037649c
+ (id)UUIDWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000100376448
+ (id)UUIDWithData:(id)arg1;	// IMP=0x00000001003763ac
+ (id)UUIDWithLittleEndianBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000010037630c
- (void).cxx_destruct;	// IMP=0x0000000100376ecc
@property(copy) NSData *data; // @synthesize data;
- (id)description;	// IMP=0x0000000100376d24
- (_Bool)isEqualToUUID16:(unsigned short)arg1;	// IMP=0x0000000100376c54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100376a70
- (unsigned long long)hash;	// IMP=0x0000000100376a0c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100376928
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010037688c
@property(readonly) NSData *swappedData;
- (id)UUID128;	// IMP=0x0000000100376640
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100376260
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000100376168

@end

