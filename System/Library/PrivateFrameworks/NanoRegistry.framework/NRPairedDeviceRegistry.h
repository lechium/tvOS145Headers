/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NRRegistryClient.h>
#import <libobjc.A.dylib/NRPairedDeviceRegistryXPCFrameworkDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray;

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate> {

	BOOL _disconnected;
	unsigned short _lastCompatibilityState;
	NSMutableDictionary* _legacyDevices;
	NSObject*<OS_dispatch_queue> _pairedDeviceRegistryDeviceListQueue;
	NSObject*<OS_dispatch_queue> _pairedRegistryGetDevicesQueue;
	unsigned long long _lastStatus;
	NSMutableArray* _waitingForRegistryUpdateBlocks;
	unsigned long long _callCount;

}

@property (nonatomic,readonly) unsigned long long status; 
+(id)sharedInstance;
+(Class)proxyClass;
+(/*^block*/id)activePairedDeviceSelectorBlock;
+(/*^block*/id)activeDeviceSelectorBlock;
+(BOOL)shouldBoostProcess;
+(/*^block*/id)pairedDevicesSelectorBlock;
-(id)init;
-(unsigned long long)status;
-(id)getAllDevicesWithArchivedAltAccountDevicesMatching:(/*^block*/id)arg1 ;
-(id)getDevices;
-(BOOL)isPaired;
-(void)endDiscovery;
-(void)beginDiscovery;
-(id)getActivePairedDevice;
-(id)applyDiff:(id)arg1 ;
-(void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2 ;
-(void)xpcHasNewOOBKey:(id)arg1 ;
-(BOOL)supportsWatch;
-(id)pairingID;
-(unsigned)switchIndex;
-(long long)maxPairingCompatibilityVersion;
-(long long)minPairingCompatibilityVersion;
-(long long)minQuickSwitchCompatibilityVersion;
-(long long)pairingCompatibilityVersion;
-(void)logCallFrequency;
-(long long)maxPairedDeviceCount;
-(long long)maxTinkerPairedDeviceCount;
-(id)getPairedDevices;
-(void)setActivePairedDevice:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(/*^block*/id)arg3 ;
-(id)initWithBoost:(BOOL)arg1 ;
-(id)initWithBoost:(BOOL)arg1 disconnected:(BOOL)arg2 ;
-(unsigned long long)_getStatusWithCollection:(id)arg1 ;
-(void)sendDevicesUpdatedNotification;
-(void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(/*^block*/id)arg1 ;
-(id)getDevicesMatching:(/*^block*/id)arg1 ;
-(id)getAllDevicesWithArchivedDevicesMatching:(/*^block*/id)arg1 ;
-(void)getDevicesWithBlock:(/*^block*/id)arg1 ;
-(void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)pairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)altAccountPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)waitForPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)waitForAltAccountPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)abortPairingWithReason:(id)arg1 ;
-(id)deviceForBluetoothID:(id)arg1 ;
-(id)nonActiveDeviceForBluetoothID:(id)arg1 ;
-(id)deviceIDForIDSDevice:(id)arg1 ;
-(id)deviceForBTDeviceID:(id)arg1 ;
-(id)nonActiveDeviceForBTDeviceID:(id)arg1 ;
-(id)deviceIDForNRDevice:(id)arg1 ;
-(void)pairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)migrationConsentRequestData;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(id)_getLocalDeviceCollection;
-(BOOL)watchNeedsGraduation;
-(void)clearWatchNeedsGraduation:(/*^block*/id)arg1 ;
-(void)setWatchNeedsGraduation:(/*^block*/id)arg1 ;
-(BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
-(BOOL)pairedDeviceCountIsLessThanMaxTinkerPairedDevices;
-(BOOL)pairedDeviceSupportQuickSwitch;
-(void)setActivePairedDevice:(id)arg1 operationHasCompleted:(/*^block*/id)arg2 ;
-(void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(/*^block*/id)arg2 ;
-(void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1 ;
-(id)_getChangeHistory;
-(id)_getSecureProperties:(id)arg1 ;
-(id)_getClientInfo;
-(id)_;
-(unsigned short)compatibilityState;
-(BOOL)isKeychainEnabled;
-(id)getAllDevices;
-(id)getAllDevicesWithArchivedDevices;
-(void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(/*^block*/id)arg4 ;
-(void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)notifyPasscode:(id)arg1 forDevice:(id)arg2 ;
-(void)notifyPairingShouldContinue;
-(void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)fakePairedSyncIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2 ;
-(id)waitForActivePairedDevice;
-(id)waitForActivePairedOrAltAccountDevice;
-(id)waitForActiveOrAltAccountDevice;
-(id)waitForActiveDevice;
-(void)abortPairing;
-(void)suspendPairingClientCrashMonitoring;
-(void)resumePairingClientCrashMonitoring;
-(id)pairingStorePath;
-(id)blockAndQueryVersions;
-(void)userIsCheckingForUpdate;
-(void)retriggerUnpairInfoDialog;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
-(BOOL)supportsPairedDevice;
-(id)serverRequestReporterWithType:(id)arg1 ;
-(void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned)arg3 ;
-(void)_submitAlbertPairingReport;
-(void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(/*^block*/id)arg2 ;
-(id)deviceForPairingID:(id)arg1 ;
-(id)deviceForIDSDevice:(id)arg1 ;
-(id)nonActiveDeviceForIDSDevice:(id)arg1 ;
-(id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2 ;
-(void)pairingClientDidEnterPhase:(id)arg1 ;
-(void)pairingClientSetAltAccountName:(id)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pairingClientSetPairingParentName:(id)arg1 pairingParentAltDSID:(id)arg2 forDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getSwitchEventsFromIndex:(unsigned)arg1 inlineCallback:(/*^block*/id)arg2 ;
-(void)_getActiveDeviceAssertionsWithInlineBlock:(/*^block*/id)arg1 ;
-(void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)startWatchSetupPush;
-(BOOL)isWatchSetupPushActive;
-(void)stopWatchSetupPush;
-(void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)lastMigrationRequestPhoneName;
-(void)keepPhoneUnlockedInternalTestSPI:(/*^block*/id)arg1 ;
-(void)checkIfFlaggedForRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)clearRecoveryFlagWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)lastSyncSwitchIndex;
-(unsigned long long)migrationCountForPairingID:(id)arg1 ;
-(BOOL)hasCompletedInitialSyncForPairingID:(id)arg1 ;
-(BOOL)isAssertionActive:(id)arg1 ;
-(void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

