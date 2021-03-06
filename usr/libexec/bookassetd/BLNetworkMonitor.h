//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CoreTelephonyClientDataDelegate-Protocol.h"
#import "CoreTelephonyClientDelegate-Protocol.h"

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString, NSUserDefaults, NWPathEvaluator;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLNetworkMonitor : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate>
{
    int _defaultsToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NWPathEvaluator *_pathEvaluator;	// 24 = 0x18
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 32 = 0x20
    CoreTelephonyClient *_telephonyClient;	// 40 = 0x28
    NSUserDefaults *_sharedDefaults;	// 48 = 0x30
    _Bool _connected;	// 56 = 0x38
    _Bool _constrained;	// 57 = 0x39
    _Bool _expensive;	// 58 = 0x3a
    _Bool _roaming;	// 59 = 0x3b
    long long _interfaceType;	// 64 = 0x40
}

+ (id)defaultMonitor;	// IMP=0x0000000100036ea0
- (void).cxx_destruct;	// IMP=0x00000001000380a8
@property(readonly) long long interfaceType; // @synthesize interfaceType=_interfaceType;
- (_Bool)_emulateRoamingNetwork;	// IMP=0x0000000100038088
- (_Bool)_emulateCellularNetwork;	// IMP=0x0000000100038070
- (void)_updateRoamingStatusForContext:(id)arg1;	// IMP=0x0000000100037fd4
- (void)_setPropertiesUsingPath:(id)arg1;	// IMP=0x0000000100037cb8
- (void)_forcePropertyRefresh;	// IMP=0x0000000100037c68
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100037a60
- (void)activeSubscriptionsDidChange;	// IMP=0x000000010003773c
- (void)servingNetworkChanged:(id)arg1;	// IMP=0x0000000100037730
- (void)internetDataStatus:(id)arg1;	// IMP=0x00000001000376fc
- (void)currentDataSimChanged:(id)arg1;	// IMP=0x00000001000376f8
- (id)copyCellularNetworkIdentityWithError:(id *)arg1;	// IMP=0x000000010003763c
@property(readonly, getter=isRoaming) _Bool roaming; // @synthesize roaming=_roaming;
@property(readonly, getter=isExpensive) _Bool expensive; // @synthesize expensive=_expensive;
@property(readonly, getter=isConstrained) _Bool constrained; // @synthesize constrained=_constrained;
@property(readonly, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void)dealloc;	// IMP=0x0000000100037130
- (id)initWithPathEvalulator:(id)arg1;	// IMP=0x0000000100036f54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

