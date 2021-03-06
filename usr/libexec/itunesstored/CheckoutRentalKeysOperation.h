//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString, SSURLConnectionResponse;

@interface CheckoutRentalKeysOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    _Bool _backgroundCheckout;	// 104 = 0x68
    NSString *_clientIdentifierHeader;	// 112 = 0x70
    NSNumber *_rentalKeyIdentifier;	// 120 = 0x78
    NSArray *_sinfs;	// 128 = 0x80
    SSURLConnectionResponse *_urlResponse;	// 136 = 0x88
    NSString *_userAgent;	// 144 = 0x90
    _Bool _shouldValidateRentalInfo;	// 152 = 0x98
    _Bool _checkoutWithPlay;	// 153 = 0x99
    unsigned long long _checkoutType;	// 160 = 0xa0
}

@property(nonatomic) unsigned long long checkoutType; // @synthesize checkoutType=_checkoutType;
@property(nonatomic, getter=shouldCheckoutWithPlay) _Bool checkoutWithPlay; // @synthesize checkoutWithPlay=_checkoutWithPlay;
@property(nonatomic) _Bool shouldValidateRentalInfo; // @synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo;
@property(getter=isBackgroundCheckout) _Bool backgroundCheckout; // @synthesize backgroundCheckout=_backgroundCheckout;
- (void)_showErrorDialogForOutput:(id)arg1;	// IMP=0x000000010002ac08
- (void)_run;	// IMP=0x000000010002a6a0
- (id)_primarySINF;	// IMP=0x000000010002a64c
- (_Bool)_performCheckout:(id *)arg1;	// IMP=0x000000010002a224
- (_Bool)_haveValidRentalInformation;	// IMP=0x0000000100029c58
- (_Bool)_handleResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000296c8
- (id)_copyRentalIdentifier;	// IMP=0x0000000100029634
- (id)_copyAccountIdentifier;	// IMP=0x00000001000295a0
- (id)_bodyData;	// IMP=0x0000000100028bc8
- (void)run;	// IMP=0x0000000100028bbc
@property(copy) NSString *userAgent;
@property(readonly) SSURLConnectionResponse *URLResponse;
@property(readonly) NSArray *sinfs;
@property(copy) NSString *clientIdentifierHeader;
@property(readonly) NSNumber *rentalKeyIdentifier;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;	// IMP=0x00000001000288ec
- (id)initWithStoreDownloadSinfs:(id)arg1;	// IMP=0x0000000100028744
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;	// IMP=0x000000010002862c
- (id)initWithSinfs:(id)arg1;	// IMP=0x0000000100028550
- (id)init;	// IMP=0x0000000100028540

@end

