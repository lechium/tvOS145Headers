//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBStackAddressMonitor-Protocol.h"

@class NSData;
@protocol OS_dispatch_queue;

@interface CBStackAddressMonitorBluetoothD : NSObject <CBStackAddressMonitor>
{
    _Bool _addedMonitor;	// 8 = 0x8
    NSData *_connectableAddressData;	// 16 = 0x10
    NSData *_nonConnectableAddressData;	// 24 = 0x18
    NSData *_fakeNonConnectableAddressData;	// 32 = 0x20
    CDUnknownBlockType _addressChangedHandler;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    CDUnknownBlockType _invalidationHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000f8c0
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType addressChangedHandler; // @synthesize addressChangedHandler=_addressChangedHandler;
@property(readonly, copy, nonatomic) NSData *fakeNonConnectableAddressData; // @synthesize fakeNonConnectableAddressData=_fakeNonConnectableAddressData;
@property(readonly, copy, nonatomic) NSData *nonConnectableAddressData; // @synthesize nonConnectableAddressData=_nonConnectableAddressData;
@property(readonly, copy, nonatomic) NSData *connectableAddressData; // @synthesize connectableAddressData=_connectableAddressData;
- (id)_dataWithBTAddress:(unsigned long long)arg1;	// IMP=0x000000010000f7f0
- (void)forceNonConnectableAddressReadAndUpdate;	// IMP=0x000000010000f5e8
- (void)addressChanged:(_Bool)arg1;	// IMP=0x000000010000f2c8
- (void)invalidate;	// IMP=0x000000010000f16c
- (void)activate;	// IMP=0x000000010000eff4
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010000eeec
- (id)description;	// IMP=0x000000010000eedc

@end

