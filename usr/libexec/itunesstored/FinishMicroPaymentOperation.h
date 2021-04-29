//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, StoreKitClientIdentity;

@interface FinishMicroPaymentOperation : ISOperation
{
    StoreKitClientIdentity *_clientIdentity;	// 96 = 0x60
    NSString *_transactionIdentifier;	// 104 = 0x68
    NSNumber *_userDSID;	// 112 = 0x70
}

- (_Bool)_parseResponse:(id)arg1 returningError:(id *)arg2;	// IMP=0x000000010004da1c
- (void)run;	// IMP=0x000000010004d614
@property(retain) NSNumber *userDSID;
@property(copy) NSString *transactionIdentifier;
@property(copy) StoreKitClientIdentity *clientIdentity;
- (void)dealloc;	// IMP=0x000000010004d36c

@end
