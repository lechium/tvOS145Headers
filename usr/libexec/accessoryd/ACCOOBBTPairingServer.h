//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, _ACCOOBBTPairingProviderInfo;

@interface ACCOOBBTPairingServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    _ACCOOBBTPairingProviderInfo *_oobBtPairingProviderInfo;	// 40 = 0x28
    NSMutableDictionary *_registeredAccessoryConnections;	// 48 = 0x30
}

+ (id)sharedServer;	// IMP=0x000000010006c6b0
- (void).cxx_destruct;	// IMP=0x000000010006c79c
@property(readonly, nonatomic) NSMutableDictionary *registeredAccessoryConnections; // @synthesize registeredAccessoryConnections=_registeredAccessoryConnections;
@property(retain, nonatomic) _ACCOOBBTPairingProviderInfo *oobBtPairingProviderInfo; // @synthesize oobBtPairingProviderInfo=_oobBtPairingProviderInfo;
- (void)legacyConnectionIDForAccessoryUID:(id)arg1 connectionID:(unsigned int)arg2;	// IMP=0x000000010006c3d4
- (void)notifyOfProvider:(id)arg1 connection:(id)arg2;	// IMP=0x000000010006c288
- (void)accessoryOOBBTPairingCompletionStatus:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3;	// IMP=0x000000010006bf78
- (void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned int)arg4;	// IMP=0x000000010006bc50
- (void)accessoryOOBBTPairingDetached:(id)arg1;	// IMP=0x000000010006b9bc
- (void)accessoryOOBBTPairingAttached:(id)arg1 accInfoDict:(id)arg2;	// IMP=0x000000010006b630
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x000000010006b4ac
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010006a984
- (void)iterateAttachedConnectionsSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010006a804
- (void)dealloc;	// IMP=0x000000010006a6d8
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x000000010006a550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

