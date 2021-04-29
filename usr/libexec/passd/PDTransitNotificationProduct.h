//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentMarket;

@interface PDTransitNotificationProduct : NSObject
{
    PKPaymentMarket *_transitMarket;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    long long _credentialType;	// 24 = 0x18
    NSString *_transitNetworkIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010020643c
@property(copy) NSString *transitNetworkIdentifier; // @synthesize transitNetworkIdentifier=_transitNetworkIdentifier;
@property long long credentialType; // @synthesize credentialType=_credentialType;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) PKPaymentMarket *transitMarket; // @synthesize transitMarket=_transitMarket;
- (unsigned long long)hash;	// IMP=0x000000010020634c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100206180

@end

