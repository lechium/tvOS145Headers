//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, _ACCNavigationProviderInfo;

@interface ACCNavigationServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    _ACCNavigationProviderInfo *_navigationProviderInfo;	// 40 = 0x28
    NSMutableDictionary *_navigationProviderInfoList;	// 48 = 0x30
    NSMutableDictionary *_navigationProviderInfoListByProviderUID;	// 56 = 0x38
    NSMutableDictionary *_registeredAccessoryConnections;	// 64 = 0x40
}

+ (id)sharedServer;	// IMP=0x0000000100102dd8
- (void).cxx_destruct;	// IMP=0x0000000100102ee4
@property(readonly, nonatomic) NSMutableDictionary *registeredAccessoryConnections; // @synthesize registeredAccessoryConnections=_registeredAccessoryConnections;
@property(readonly, nonatomic) NSMutableDictionary *navigationProviderInfoListByProviderUID; // @synthesize navigationProviderInfoListByProviderUID=_navigationProviderInfoListByProviderUID;
@property(readonly, nonatomic) NSMutableDictionary *navigationProviderInfoList; // @synthesize navigationProviderInfoList=_navigationProviderInfoList;
@property(retain, nonatomic) _ACCNavigationProviderInfo *navigationProviderInfo; // @synthesize navigationProviderInfo=_navigationProviderInfo;
- (void)notifyOfProvider:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100102c24
- (void)accessoryNavigationObjectDetectionUpdateInfo:(id)arg1 componentIdList:(id)arg2 updateInfo:(id)arg3;	// IMP=0x0000000100102860
- (void)accessoryNavigationStopRouteGuidance:(id)arg1 componentIdList:(id)arg2;	// IMP=0x0000000100102404
- (void)accessoryNavigationStartRouteGuidance:(id)arg1 componentIdList:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000100101ed8
- (void)accessoryNavigationDetached:(id)arg1;	// IMP=0x0000000100101bac
- (void)accessoryNavigationAttached:(id)arg1 componentList:(id)arg2;	// IMP=0x000000010010181c
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x0000000100101814
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100100814
- (void)sendUpdatedSubscriberList;	// IMP=0x0000000100100810
- (void)iterateAttachedConnectionsSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100690
- (void)iterateNavigationProviderListSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100540
- (void)dealloc;	// IMP=0x00000001001003ec
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x0000000100100224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

