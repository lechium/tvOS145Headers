//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUTunDeliveryControllerConnectivityDelegate-Protocol.h"

@class IDSCountdown, IDSPairedDeviceRepository, NRDeviceManager, NSData, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IDSPairingManager : NSObject <IDSUTunDeliveryControllerConnectivityDelegate>
{
    NSHashTable *_delegateMap;	// 8 = 0x8
    _Bool _hasLoadedPairedDevices;	// 16 = 0x10
    int _pairingStateToken;	// 20 = 0x14
    CDUnknownBlockType _block;	// 24 = 0x18
    _Bool _isPendingResetOfKeyRegenerationFlag;	// 32 = 0x20
    IDSCountdown *_pairedDeviceInfoRequestCountdown;	// 40 = 0x28
    NSMutableDictionary *_cbuuidToBTOutOfBandKeyDictionary;	// 48 = 0x30
    _Bool _shouldQuickSwitchAfterIPSecConnected;	// 56 = 0x38
    NRDeviceManager *_nrDeviceManager;	// 64 = 0x40
    IDSPairedDeviceRepository *_pairedDeviceRepository;	// 72 = 0x48
    NSMutableArray *_registeredPairedDeviceDidConnectBlockPairs;	// 80 = 0x50
}

+ (void)devicePairingProtocolVersion:(unsigned int *)arg1 minCompatibilityVersion:(unsigned int *)arg2 maxCompatibilityVersion:(unsigned int *)arg3;	// IMP=0x000000010022dca0
+ (_Bool)_isTinkerPairedInCapabilityFlags:(unsigned long long)arg1;	// IMP=0x000000010022226c
+ (_Bool)_isIPsecSupportedByCapabilityFlags:(unsigned long long)arg1;	// IMP=0x0000000100222240
+ (_Bool)_isEncryptionKeyRegenerationSupportedByCapabilityFlags:(unsigned long long)arg1;	// IMP=0x0000000100222218
+ (id)sharedInstance;	// IMP=0x000000010021fbec
- (void).cxx_destruct;	// IMP=0x000000010022e970
@property(nonatomic) _Bool shouldQuickSwitchAfterIPSecConnected; // @synthesize shouldQuickSwitchAfterIPSecConnected=_shouldQuickSwitchAfterIPSecConnected;
@property(readonly, nonatomic) NSMutableArray *registeredPairedDeviceDidConnectBlockPairs; // @synthesize registeredPairedDeviceDidConnectBlockPairs=_registeredPairedDeviceDidConnectBlockPairs;
@property(readonly, nonatomic) IDSPairedDeviceRepository *pairedDeviceRepository; // @synthesize pairedDeviceRepository=_pairedDeviceRepository;
@property(readonly, nonatomic) NRDeviceManager *nrDeviceManager; // @synthesize nrDeviceManager=_nrDeviceManager;
- (id)_nrDeviceIdentifierWithCBUUID:(id)arg1;	// IMP=0x000000010022e6b4
- (void)deliveryController:(id)arg1 foundNearbyIPsecCapableDeviceWithUniqueID:(id)arg2;	// IMP=0x000000010022df40
- (void)refreshPairedDeviceEncryptionKeys;	// IMP=0x000000010022d900
- (_Bool)updatePairedDeviceiCloudURIs:(id)arg1 pushToken:(id)arg2;	// IMP=0x000000010022d424
- (_Bool)updatePairedDeviceBuildVersion:(id)arg1 productVersion:(id)arg2 productName:(id)arg3 pairingProtocolVersion:(unsigned int)arg4 minCompatibilityVersion:(unsigned int)arg5 maxCompatibilityVersion:(unsigned int)arg6 serviceMinCompatibilityVersion:(unsigned short)arg7 capabilityFlags:(unsigned long long)arg8 deviceUniqueID:(id)arg9;	// IMP=0x000000010022ba70
- (_Bool)_isIPSecLinkEnabled;	// IMP=0x000000010022ba48
- (void)_networkRelayRegisterDeviceWithCBUUID:(id)arg1 properties:(id)arg2 shouldPairDirectlyOverIPsec:(_Bool)arg3;	// IMP=0x000000010022b368
- (void)_networkRelayRegisterDeviceWithCBUUID:(id)arg1 wasInitiallySetupUsingIDSPairing:(_Bool)arg2 maxCompatibilityVersion:(id)arg3 BTOutOfBandKey:(id)arg4 supportsIPsecWithSPPLink:(_Bool)arg5 bluetoothMACAddress:(id)arg6;	// IMP=0x000000010022b200
- (id)_createRegistrationProperties:(_Bool)arg1 maxCompatibilityVersion:(id)arg2 BTOutOfBandKey:(id)arg3 supportsIPsecWithSPPLink:(_Bool)arg4 bluetoothMACAddress:(id)arg5;	// IMP=0x000000010022b054
- (_Bool)isMissingAnyPublicKeyForPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x000000010022af70
- (_Bool)setPairedDeviceInfo:(id)arg1;	// IMP=0x000000010022a5f4
- (_Bool)updateLocalPairedDevice:(id)arg1 pairingType:(long long)arg2;	// IMP=0x000000010022a3cc
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x000000010022a2e4
- (void)_clearPairedDeviceDidConnectBlocksForUniqueID:(id)arg1;	// IMP=0x0000000100229fd4
- (void)_callPairedDeviceDidConnectBlocksForUniqueID:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100229cc0
- (void)registerPairedDeviceWithUniqueID:(id)arg1 didConnectBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100229af8
- (_Bool)shouldUseIPsecLinkForDefaultPairedDeviceAndLogQuery:(_Bool)arg1;	// IMP=0x0000000100229938
- (_Bool)shouldUseIPsecLinkForDefaultPairedDevice;	// IMP=0x00000001002298fc
- (id)_cbuuidsWithIsPairingValue:(_Bool)arg1;	// IMP=0x0000000100229648
- (id)pairedDeviceRecords;	// IMP=0x0000000100229150
- (id)localDeviceRecord;	// IMP=0x0000000100229000
- (id)_identityDataErrorPairForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0000000100228ea4
- (id)uniqueIDToCbuuidsOfPairingDevicesDictionary;	// IMP=0x0000000100228b8c
- (id)cbuuidsOfPairedDevices;	// IMP=0x0000000100228b54
- (id)cbuuidsOfPairingDevices;	// IMP=0x0000000100228b1c
- (_Bool)isTraditionalDevicePairedOrPairing;	// IMP=0x0000000100228a7c
- (_Bool)isCurrentDevicePairedOrPairing;	// IMP=0x00000001002289e4
- (void)ensureCommunicationWithActivePairedDeviceIsPossible;	// IMP=0x0000000100228670
- (void)updateNetworkRelayStateForAllPairedDevices;	// IMP=0x0000000100227efc
- (void)deactivatePairedDevices;	// IMP=0x0000000100227a30
- (long long)activatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0000000100227184
- (void)disconnectActivePairedDevice;	// IMP=0x000000010022705c
- (_Bool)removeLocalPairedDevice:(id)arg1;	// IMP=0x0000000100226b84
- (_Bool)addLocalPairedDevice:(id)arg1 BTOutOfBandKey:(id)arg2 shouldPairDirectlyOverIPsec:(_Bool)arg3 pairingType:(long long)arg4 bluetoothMACAddress:(id)arg5;	// IMP=0x0000000100225fe0
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000100225f5c
- (void)addDelegate:(id)arg1;	// IMP=0x0000000100225eac
- (void)_updateActiveStateForAllPairedDevices:(_Bool)arg1;	// IMP=0x0000000100225950
- (void)_updateActiveStateForAllPairedDevices;	// IMP=0x0000000100225918
- (void)_updatePairedState:(_Bool)arg1;	// IMP=0x00000001002257a8
- (_Bool)_hasAllEncryptionKeys;	// IMP=0x00000001002255d8
- (id)pairedDeviceForUniqueID:(id)arg1;	// IMP=0x000000010022534c
@property(readonly, nonatomic) NSSet *allTraditionallyPairedUniqueIDs;
@property(readonly, nonatomic) NSSet *allPairedUniqueIDs;
- (_Bool)_isPairedToDevice:(id)arg1;	// IMP=0x0000000100224d28
@property(readonly, nonatomic) _Bool isPaired;
@property(readonly, nonatomic) NSDictionary *pairedDevicePrivateData;
- (long long)pairedDevicePairingType;	// IMP=0x0000000100224b90
- (id)pairedDeviceiCloudURIs;	// IMP=0x0000000100224b0c
@property(readonly, nonatomic) NSData *pairedDevicePushToken;
@property(readonly, nonatomic) NSData *pairedDevicePublicClassCKey;
@property(readonly, nonatomic) NSData *pairedDevicePublicClassAKey;
@property(readonly, nonatomic) NSData *pairedDevicePublicKey;
@property(readonly, nonatomic) NSDictionary *pairedDevice;
- (id)pairedDeviceHandlesWithPairingType:(long long)arg1;	// IMP=0x00000001002245d0
- (id)allPairedDevicesWithType:(long long)arg1;	// IMP=0x0000000100224564
@property(readonly, nonatomic) NSSet *allPairedDevices;
@property(readonly, nonatomic) _Bool isCurrentDeviceTinkerConfiguredWatch;
- (_Bool)activePairedDeviceHasPairingType:(long long)arg1;	// IMP=0x0000000100224454
@property(readonly, nonatomic) unsigned short pairedDeviceServiceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairedDeviceMaxCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairedDeviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairedDevicePairingProtocolVersion;
- (id)pairedDeviceProductName;	// IMP=0x00000001002241dc
- (id)pairedDeviceProductVersion;	// IMP=0x0000000100224158
- (id)pairedDeviceBuildVersion;	// IMP=0x00000001002240d4
@property(readonly, nonatomic) NSString *pairedDeviceUniqueID;
@property(readonly, nonatomic) NSString *pairedDeviceUUIDString;
- (id)_activePairedDeviceCBUUID;	// IMP=0x0000000100223f9c
- (void)gatherLocalDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002235a0
- (id)_localDevicePrivateData;	// IMP=0x0000000100222e70
@property(readonly, nonatomic) NSDictionary *localDevice;
- (_Bool)_purgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x00000001002228e0
- (void)_suspendOTRSessionsWithProtectionClass:(unsigned int)arg1;	// IMP=0x0000000100222464
- (void)_regenerateSecuredEncryptionKeys;	// IMP=0x0000000100222298
- (_Bool)_markSecuredEncryptionKeysAsRegenerated:(_Bool)arg1;	// IMP=0x0000000100221e50
- (unsigned long long)_hasRegeneratedSecuredEncryptionKeys;	// IMP=0x00000001002219ac
- (long long)_migrateSecuredEncryptionKeys;	// IMP=0x000000010022149c
- (void)_loadPairedDevicePropertiesIfNeeded;	// IMP=0x00000001002212c0
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x0000000100221290
- (id)init;	// IMP=0x0000000100221198
- (id)initWithNRDeviceManager:(id)arg1 pairedDeviceRepository:(id)arg2;	// IMP=0x0000000100220e44
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100220d14
- (void)_requestPairedDeviceInfo;	// IMP=0x00000001002207e0
- (void)_requestPairedDeviceInfoAfterDelay:(double)arg1;	// IMP=0x00000001002205e0
- (void)_notifyDelegatesDeviceUnpairedFromDevice:(id)arg1;	// IMP=0x00000001002202e0
- (void)_notifyDelegatesDevicePairedToDevice:(id)arg1;	// IMP=0x000000010021ffe0
- (void)_notifyDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010021fd80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
