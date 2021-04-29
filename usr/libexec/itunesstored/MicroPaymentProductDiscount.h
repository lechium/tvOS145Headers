//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MicroPaymentProductSubscriptionPeriod, NSNumber, NSString;

@interface MicroPaymentProductDiscount : NSObject
{
    NSNumber *_price;	// 8 = 0x8
    MicroPaymentProductSubscriptionPeriod *_subscriptionPeriod;	// 16 = 0x10
    unsigned long long _numberOfPeriods;	// 24 = 0x18
    unsigned long long _paymentMode;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100049f30
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long paymentMode; // @synthesize paymentMode=_paymentMode;
@property(nonatomic) unsigned long long numberOfPeriods; // @synthesize numberOfPeriods=_numberOfPeriods;
@property(retain, nonatomic) MicroPaymentProductSubscriptionPeriod *subscriptionPeriod; // @synthesize subscriptionPeriod=_subscriptionPeriod;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
- (id)copyProductDiscount;	// IMP=0x0000000100049ccc
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000498d8

@end
