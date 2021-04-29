//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBStackBLEScanner-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CBStackBLEScannerBluetoothD : NSObject <CBStackBLEScanner>
{
    struct CBStackBLEScannerCPP _bleScannerCPP;	// 8 = 0x8
    struct BTSessionImpl *_btSession;	// 32 = 0x20
    NSMutableDictionary *_deviceMap;	// 40 = 0x28
    _Bool _invalidateCalled;	// 48 = 0x30
    _Bool _invalidateDone;	// 49 = 0x31
    NSObject<OS_dispatch_source> *_rescanTimer;	// 56 = 0x38
    _Bool _scanning;	// 64 = 0x40
    unsigned long long _scanTicks;	// 72 = 0x48
    struct Session *_sessionHandle;	// 80 = 0x50
    unsigned long long _aggregateDiscoveryFlags;	// 88 = 0x58
    unsigned char _targetCore;	// 96 = 0x60
    _Bool _scanRateAnyDefault;	// 97 = 0x61
    int _scanRateHighest;	// 100 = 0x64
    NSString *_scanSummary;	// 104 = 0x68
    CDUnknownBlockType _deviceFoundHandler;	// 112 = 0x70
    CDUnknownBlockType _deviceLostHandler;	// 120 = 0x78
    NSArray *_discoveryArray;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 136 = 0x88
    NSString *_identifier;	// 144 = 0x90
    CDUnknownBlockType _invalidationHandler;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x0000000100012054
- (void).cxx_destruct;	// IMP=0x0000000100011fc0
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSArray *discoveryArray; // @synthesize discoveryArray=_discoveryArray;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
- (id)_scanSummary:(struct LeScanRequest *)arg1;	// IMP=0x0000000100011ac0
- (void)_addUUIDIfNeeded:(unsigned short)arg1 matchFlags:(unsigned long long)arg2 uuids:(vector_057f0f09 *)arg3;	// IMP=0x00000001000118f4
- (void)_addTypeIfNeeded:(unsigned char)arg1 matchFlags:(unsigned long long)arg2 scanRequest:(struct LeScanRequest *)arg3;	// IMP=0x0000000100011388
- (struct LeScanRequest *)_scanRequestCreate;	// IMP=0x0000000100011114
- (void)_rescanTimerUpdate:(_Bool)arg1;	// IMP=0x0000000100010f40
- (void)_rescanTimerFired;	// IMP=0x0000000100010c7c
- (void)deviceFound:(id)arg1;	// IMP=0x00000001000108a0
- (void)_invalidated;	// IMP=0x0000000100010760
- (void)invalidate;	// IMP=0x0000000100010504
- (void)_activate:(_Bool)arg1;	// IMP=0x000000010000feac
- (void)activate;	// IMP=0x000000010000fe9c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010000fb4c
- (id)description;	// IMP=0x000000010000fb3c

@end

