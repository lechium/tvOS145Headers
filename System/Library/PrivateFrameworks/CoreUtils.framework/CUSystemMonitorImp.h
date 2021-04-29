/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <CoreUtils/CoreTelephonyClientDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSData, CUBluetoothClient, NSArray, CUSystemMonitor, CLLocationManager, NSString, CUNetInterfaceMonitor, CoreTelephonyClient, RTRoutineManager, NSMutableArray, CUWiFiManager;

@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CLLocationManagerDelegate, CoreTelephonyClientDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _monitors;
	SCD_Struct_CU6 _bluetoothAddress48;
	NSData* _bluetoothAddressData;
	CUBluetoothClient* _bluetoothClient;
	int _familyBuddyToken;
	BOOL _familyFailed;
	NSArray* _familyMembers;
	BOOL _familyObserving;
	CUSystemMonitor* _familyPrimaryIPMonitor;
	int _familyUpdatedToken;
	CLLocationManager* _locationManager;
	unsigned _locationVisitsFlags;
	BOOL _manateeAvailable;
	BOOL _manateeObserving;
	int _fmfDevicesChangedToken;
	int _meDeviceChangedToken;
	int _meDeviceRetryToken;
	NSString* _meDeviceFMFDeviceID;
	NSString* _meDeviceIDSDeviceID;
	NSString* _meDeviceName;
	BOOL _meDeviceIsMe;
	BOOL _meDeviceValid;
	CUNetInterfaceMonitor* _netInterfaceMonitor;
	unsigned _netFlags;
	SCD_Union_CU22 _primaryIPv4Addr;
	SCD_Union_CU22 _primaryIPv6Addr;
	NSString* _primaryNetworkSignature;
	int _powerSourceToken;
	BOOL _powerUnlimited;
	NSString* _primaryAppleID;
	BOOL _primaryAppleIDActive;
	BOOL _primaryAppleIDIsHSA2;
	int _primaryAppleIDNotifyToken;
	BOOL _primaryAppleIDObserving;
	CoreTelephonyClient* _regionCTClient;
	CTServerConnectionRef _regionCTServerCnx;
	NSString* _regionISOCountryCode;
	NSString* _regionMobileCountryCode;
	RTRoutineManager* _regionRoutineManager;
	NSString* _regionRoutineCountry;
	int _regionRoutineNotifyToken;
	NSString* _regionRoutineState;
	SCD_Struct_CU6 _rotatingIdentifier48;
	NSData* _rotatingIdentifierData;
	NSObject*<OS_dispatch_source> _rotatingIdentifierTimer;
	BOOL _screenLocked;
	int _screenLockedToken;
	BOOL _screenOn;
	int _screenBlankedToken;
	int _screenSaverToken;
	BOOL _screenSaverActive;
	BOOL _scChangesPending;
	SCDynamicStoreRef _scDynamicStore;
	NSMutableArray* _scInitialKeys;
	NSString* _scKeySystemName;
	NSString* _scPatternNetInterfaceIPv4;
	NSString* _scPatternNetInterfaceIPv6;
	NSArray* _scNotificationKeys;
	NSArray* _scNotificationPatterns;
	NSString* _systemName;
	int _systemLockState;
	int _systemLockStateToken;
	BOOL _firstUnlocked;
	int _firstUnlockToken;
	CUWiFiManager* _wifiManager;
	unsigned _wifiFlags;
	int _wifiState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_update;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
-(void)removeMonitor:(id)arg1 ;
-(void)addMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasMonitorPassingTest:(/*^block*/id)arg1 ;
-(void)_invokeBlock:(/*^block*/id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)updateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_bluetoothAddressMonitorStart;
-(void)_bluetoothAddressMonitorStop;
-(void)_familyMonitorStart;
-(void)_familyMonitorStop;
-(void)_familyGetMembers:(BOOL)arg1 ;
-(void)_familyNetworkChanged;
-(void)_familyUpdated:(id)arg1 ;
-(void)_locationVisitsMonitorStart;
-(void)_locationVisitsMonitorStop;
-(void)_locationVisitUpdate:(id)arg1 arrived:(BOOL)arg2 ;
-(void)locationManager:(id)arg1 didArrive:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)locationManager:(id)arg1 didDepart:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_manateeMonitorStart;
-(void)_manateeMonitorStop;
-(void)_manateeChanged:(id)arg1 ;
-(void)_meDeviceMonitorStart;
-(void)_meDeviceMonitorStop;
-(void)_meDeviceCheckStart:(BOOL)arg1 ;
-(void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(BOOL)arg3 ;
-(void)_netInterfaceMonitorStart;
-(void)_netInterfaceMonitorStop;
-(void)_powerUnlimitedMonitorStart;
-(void)_powerUnlimitedMonitorStop;
-(void)_primaryAppleIDMonitorStart;
-(void)_primaryAppleIDMonitorStop;
-(id)_primaryAppleIDAccount;
-(void)_primaryAppleIDChanged:(id)arg1 ;
-(void)_primaryAppleIDChanged2:(BOOL)arg1 ;
-(void)_regionMonitorStart;
-(void)_regionMonitorStop;
-(void)_regionMonitorGet;
-(void)_regionMonitorUpdateLocationsOfInterest:(id)arg1 ;
-(void)_regionMonitorUpdateMCC:(id)arg1 ;
-(void)_locationsOfInterestDidChange:(BOOL)arg1 ;
-(void)_rotatingIdentifierMonitorStart;
-(void)_rotatingIdentifierMonitorStop;
-(void)_rotatingIdentifierTimerFired;
-(void)_screenLockedMonitorStart;
-(void)_screenLockedMonitorStop;
-(void)_screenLockedChanged;
-(void)_screenOnMonitorStart;
-(void)_screenOnMonitorStartiOS;
-(void)_screenOnMonitorStop;
-(void)_screenChanged:(BOOL)arg1 ;
-(void)_screenSaverMonitorStart;
-(void)_screenSaverMonitorStop;
-(void)_systemConfigUpdateKeyPtr:(id*)arg1 name:(id)arg2 enabled:(BOOL)arg3 creator:(/*^block*/id)arg4 ;
-(void)_systemConfigUpdateNotifications;
-(void)_systemConfigChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_systemConfigNetInterfaceChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_systemConfigSystemNameChanged:(BOOL)arg1 ;
-(void)_systemLockStateMonitorStart;
-(void)_systemLockStateMonitorStop;
-(void)_systemLockStateUpdate:(BOOL)arg1 ;
-(void)_firstUnlockMonitorStart;
-(void)_firstUnlockMonitorStop;
-(void)_firstUnlockMonitorCheck:(BOOL)arg1 ;
-(void)_wifiMonitorStart;
-(void)_wifiMonitorStop;
-(void)_wifiMonitorStateChanged:(BOOL)arg1 ;
@end
