//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SKProductsResponse : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100127498
- (void)_setProducts:(id)arg1;	// IMP=0x0000000100127420
- (void)_setInvalidIdentifiers:(id)arg1;	// IMP=0x00000001001273a8
- (id)copyXPCEncoding;	// IMP=0x00000001001271fc
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000100126f04
@property(readonly, nonatomic) NSArray *products;
@property(readonly, nonatomic) NSArray *invalidProductIdentifiers;
- (id)init;	// IMP=0x0000000100126e88

@end

