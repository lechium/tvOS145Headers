//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDPaymentTransactionProcessorConfiguration : NSObject
{
    NSString *_transactionIdentifier;	// 8 = 0x8
    unsigned long long _updateReasons;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001002cf9c4
@property(readonly, nonatomic) unsigned long long updateReasons; // @synthesize updateReasons=_updateReasons;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
- (unsigned long long)hash;	// IMP=0x00000001002cf948
- (_Bool)isEqualToConfiguration:(id)arg1;	// IMP=0x00000001002cf8e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002cf868
- (id)initWithTransactionIdentifier:(id)arg1 updateReasons:(unsigned long long)arg2;	// IMP=0x00000001002cf7e8

@end

