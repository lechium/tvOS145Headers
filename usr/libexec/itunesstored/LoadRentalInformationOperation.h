//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSNumber;

@interface LoadRentalInformationOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    NSNumber *_rentalKeyIdentifier;	// 104 = 0x68
    NSDictionary *_rentalInformation;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100104b68
@property(readonly, copy, nonatomic) NSDictionary *rentalInformation; // @synthesize rentalInformation=_rentalInformation;
@property(copy, nonatomic) NSNumber *rentalKeyIdentifier; // @synthesize rentalKeyIdentifier=_rentalKeyIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)run;	// IMP=0x0000000100104784
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;	// IMP=0x00000001001046b4

@end

