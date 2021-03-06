//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSBaseAESSIVKey.h"

#import "NSSecureCoding-Protocol.h"

__attribute__((visibility("hidden")))
@interface CKKSWrappedAESSIVKey : CKKSBaseAESSIVKey <NSSecureCoding>
{
}

+ (id)zeroedKey;	// IMP=0x000000010017cf20
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010017cf18
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010017ce74
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010017ce50
- (id)base64WrappedKey;	// IMP=0x000000010017cdf8
- (id)wrappedData;	// IMP=0x000000010017cdbc
- (id)initWithData:(id)arg1;	// IMP=0x000000010017cc88
- (id)initWithBase64:(id)arg1;	// IMP=0x000000010017cba0
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x000000010017cae4
- (id)init;	// IMP=0x000000010017caa4

@end

