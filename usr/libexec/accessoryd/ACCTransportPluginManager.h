//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCPluginManager.h"

#import "ACCTransportPluginManagerProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ACCTransportPluginManager : ACCPluginManager <ACCTransportPluginManagerProtocol>
{
    NSMutableDictionary *_endpointDataOutHandlers;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x000000010004eabc
- (void).cxx_destruct;	// IMP=0x000000010004eb7c
@property(retain, nonatomic) NSMutableDictionary *endpointDataOutHandlers; // @synthesize endpointDataOutHandlers=_endpointDataOutHandlers;
- (_Bool)processIncomingData:(id)arg1 forEndpointWithUUID:(id)arg2;	// IMP=0x000000010004e9b4
- (id)propertiesForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004e994
- (id)propertiesForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e974
- (id)identifierForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004e954
- (id)identifierForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e934
- (int)protocolForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004e90c
- (int)transportTypeForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004e8e4
- (id)certificateCapabilitiesForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e8bc
- (id)certificateSerialStringForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e894
- (id)certificateSerialForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e86c
- (id)certificateDataForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e844
- (int)connectionTypeForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e81c
- (int)authStatusForConnectionWithUUID:(id)arg1 authType:(int)arg2;	// IMP=0x000000010004e7e4
- (id)endpointUUIDsForConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e7b4
- (id)allEndpointsUUIDs;	// IMP=0x000000010004e738
- (id)allConnectionUUIDs;	// IMP=0x000000010004e6bc
- (id)connectionUUIDForEndpointWithUUID:(id)arg1;	// IMP=0x000000010004e688
- (_Bool)destroyConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e680
- (_Bool)destroyEndpointWithUUID:(id)arg1;	// IMP=0x000000010004e678
- (_Bool)publishConnectionWithUUID:(id)arg1;	// IMP=0x000000010004e670
- (_Bool)setProperties:(id)arg1 forEndpointWithUUID:(id)arg2;	// IMP=0x000000010004e61c
- (_Bool)setAccessoryInfo:(id)arg1 forEndpointWithUUID:(id)arg2;	// IMP=0x000000010004e524
- (id)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(id)arg3 dataOutHandler:(CDUnknownBlockType)arg4 forConnectionWithUUID:(id)arg5;	// IMP=0x000000010004e450
- (_Bool)setAuthenticationStatus:(int)arg1 andCertificateData:(id)arg2 authCTA:(_Bool)arg3 forConnectionWithUUID:(id)arg4;	// IMP=0x000000010004e3bc
- (_Bool)setProperties:(id)arg1 forConnectionWithUUID:(id)arg2;	// IMP=0x000000010004e368
- (_Bool)setSupervisedTransportsRestricted:(_Bool)arg1 forConnectionWithUUID:(id)arg2;	// IMP=0x000000010004e330
- (id)createConnectionWithType:(int)arg1 andIdentifier:(id)arg2;	// IMP=0x000000010004e2a8
- (_Bool)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;	// IMP=0x000000010004e1c4
- (id)initClass:(Class)arg1;	// IMP=0x000000010004e14c
- (unsigned long long)stopAllPlugIns;	// IMP=0x000000010004e030
- (unsigned long long)startAllPlugIns;	// IMP=0x000000010004df14
- (unsigned long long)initAllPlugIns;	// IMP=0x000000010004dd5c
- (unsigned long long)loadAllBundles;	// IMP=0x000000010004db3c
- (unsigned long long)addTransportPlugInBundleSearchPaths;	// IMP=0x000000010004da58
- (id)init;	// IMP=0x000000010004d9dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

