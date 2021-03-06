//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NSString;

@interface NEHelperHotspotConfigurationManager : NSObject <NEHelperDelegate>
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (void)checkAppForConfigurationCleanup:(id)arg1;	// IMP=0x0000000100007c20
+ (_Bool)verifyEntitlement:(id)arg1;	// IMP=0x0000000100005804
+ (void)initGlobals;	// IMP=0x000000010000578c
- (void).cxx_destruct;	// IMP=0x0000000100007e54
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)handleMessage:(id)arg1;	// IMP=0x0000000100007aa0
- (_Bool)processRequest:(id)arg1;	// IMP=0x0000000100007a2c
- (_Bool)processQueryNetworks:(id)arg1;	// IMP=0x00000001000077e8
- (_Bool)processRemoveConfigurationRequest:(id)arg1;	// IMP=0x00000001000076cc
- (void)removeWiFiNetworkConfiguration:(id)arg1 manager:(struct __WiFiManagerClient *)arg2;	// IMP=0x0000000100007444
- (struct __WiFiManagerClient *)wifiManagerRef;	// IMP=0x000000010000737c
- (_Bool)checkIfJoinOnceNetworkAndDisassociate:(struct __WiFiManagerClient *)arg1;	// IMP=0x00000001000071fc
- (_Bool)processAddConfigurationRequest:(id)arg1;	// IMP=0x0000000100006884
- (_Bool)checkIfSystemAppOrDaemon;	// IMP=0x0000000100006730
- (struct __WiFiNetwork *)createWiFiNetworkFromConfiguration:(id)arg1;	// IMP=0x0000000100006040
- (id)createEAPClientConfiguration:(id)arg1;	// IMP=0x0000000100005b14
- (id)getTTLSInnerAuthenticationString:(long long)arg1;	// IMP=0x0000000100005abc
@property(readonly, nonatomic) NSString *name;
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x0000000100005948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

