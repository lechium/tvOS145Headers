/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSMutableDictionary;

@interface BluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	int _state;
	BOOL _airplaneMode;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BOOL _scanningInProgress;
	unsigned _scanningServiceMask;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	BTAccessoryManagerImplRef _accessoryManager;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;
	BOOL _blacklistEnabled;

}

@property (assign,nonatomic) BOOL blacklistEnabled;              //@synthesize blacklistEnabled=_blacklistEnabled - In the implementation block
+(id)sharedInstance;
+(void)setSharedInstanceQueue:(id)arg1 ;
+(int)lastInitError;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(id)localAddress;
-(void)postNotification:(id)arg1 ;
-(BOOL)connected;
-(BOOL)available;
-(int)powerState;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(int)bluetoothState;
-(BOOL)connectable;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(id)connectedDevices;
-(id)pairedDevices;
-(void)setConnectable:(BOOL)arg1 ;
-(void)enableTestMode;
-(BTAccessoryManagerImplRef)_accessoryManager;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)disconnectDevice:(id)arg1 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)acceptSSP:(long long)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(void)startVoiceCommand:(id)arg1 ;
-(void)endVoiceCommand:(id)arg1 ;
-(BOOL)_attach;
-(void)_updateBlacklistMode;
-(void)_updateAirplaneModeStatus;
-(void)_updateBluetoothState;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotification:(id)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(BOOL)powered;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(BOOL)setPowered:(BOOL)arg1 ;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(void)_scanForServices:(unsigned)arg1 withMode:(int)arg2 ;
-(void)scanForServices:(unsigned)arg1 ;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(BOOL)devicePairingEnabled;
-(void)cancelPairing;
-(void)bluetoothStateActionWithCompletion:(/*^block*/id)arg1 ;
-(void)setBlacklistEnabled:(BOOL)arg1 ;
-(void)disconnectDevicePhysicalLink:(id)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(void)showPowerPrompt;
-(int)maskLocalDeviceEvents:(unsigned)arg1 ;
-(void)_powerChanged;
-(void)_notifyFirstDeviceUnlockCompleted;
-(BOOL)isAnyoneScanning;
-(BOOL)isAnyoneAdvertising;
-(void)_removeDevice:(id)arg1 ;
-(id)deviceFromAddressString:(id)arg1 ;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(BOOL)deviceScanningEnabled;
-(BOOL)deviceScanningInProgress;
-(void)resetDeviceScanning;
-(void)scanForConnectableDevices:(unsigned)arg1 ;
-(void)_restartScan;
-(void)_setScanState:(int)arg1 ;
-(void)_discoveryStateChanged;
-(void)_advertisingChanged;
-(BOOL)isDiscoverable;
-(void)setDiscoverable:(BOOL)arg1 ;
-(id)pairedNonAppleHAEDevices;
-(void)_pairedStatusChanged;
-(id)connectingDevices;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(BOOL)blacklistEnabled;
-(BOOL)audioConnected;
-(void)setAudioConnected:(BOOL)arg1 ;
-(void)bluetoothStateAction;
-(id)connectedDeviceNamesThatMayBeBlacklisted;
-(id)deviceFromIdentifier:(id)arg1 ;
@end

