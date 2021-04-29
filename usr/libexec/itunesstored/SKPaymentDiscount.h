//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface SKPaymentDiscount : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_keyIdentifier;	// 16 = 0x10
    NSUUID *_nonce;	// 24 = 0x18
    NSString *_signature;	// 32 = 0x20
    NSNumber *_timestamp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100082c2c
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSUUID *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSString *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5;	// IMP=0x0000000100082968

@end

