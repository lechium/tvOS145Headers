/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSBundle, NSData, NSString, NSArray;

@interface CUSystemMonitor : NSObject {

	BOOL _activateCalled;
	BOOL _activateCompleted;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateCalled2;
	/*^block*/id _invalidationHandler;
	/*^block*/id _bluetoothAddressChangedHandler;
	/*^block*/id _callChangedHandler;
	/*^block*/id _clamshellModeChangedHandler;
	/*^block*/id _consoleUserChangedHandler;
	/*^block*/id _familyUpdatedHandler;
	NSBundle* _locationVisitsBundle;
	/*^block*/id _locationVisitsChangedHandler;
	/*^block*/id _manateeChangedHandler;
	/*^block*/id _meDeviceChangedHandler;
	/*^block*/id _netFlagsChangedHandler;
	/*^block*/id _netInterfacesChangedHandler;
	/*^block*/id _primaryIPChangedHandler;
	/*^block*/id _primaryNetworkChangedHandler;
	/*^block*/id _powerUnlimitedChangedHandler;
	/*^block*/id _primaryAppleIDChangedHandler;
	/*^block*/id _regionChangedHandler;
	/*^block*/id _rotatingIdentifierChangedHandler;
	/*^block*/id _screenLockedChangedHandler;
	/*^block*/id _screenOnChangedHandler;
	/*^block*/id _screenSaverChangedHandler;
	/*^block*/id _systemLockStateChangedHandler;
	/*^block*/id _systemNameChangedHandler;
	/*^block*/id _firstUnlockHandler;
	/*^block*/id _wifiStateChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) SCD_Struct_CU6 bluetoothAddress48; 
@property (copy,readonly) NSData * bluetoothAddressData; 
@property (copy) id bluetoothAddressChangedHandler;                                    //@synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler - In the implementation block
@property (readonly) int activeCallCount; 
@property (readonly) unsigned callFlags; 
@property (readonly) int connectedCallCount; 
@property (copy) id callChangedHandler;                                                //@synthesize callChangedHandler=_callChangedHandler - In the implementation block
@property (readonly) BOOL clamshellMode; 
@property (copy) id clamshellModeChangedHandler;                                       //@synthesize clamshellModeChangedHandler=_clamshellModeChangedHandler - In the implementation block
@property (readonly) unsigned consoleUserID; 
@property (copy,readonly) NSString * consoleUserName; 
@property (copy) id consoleUserChangedHandler;                                         //@synthesize consoleUserChangedHandler=_consoleUserChangedHandler - In the implementation block
@property (copy,readonly) NSArray * familyMembers; 
@property (copy) id familyUpdatedHandler;                                              //@synthesize familyUpdatedHandler=_familyUpdatedHandler - In the implementation block
@property (retain) NSBundle * locationVisitsBundle;                                    //@synthesize locationVisitsBundle=_locationVisitsBundle - In the implementation block
@property (copy) id locationVisitsChangedHandler;                                      //@synthesize locationVisitsChangedHandler=_locationVisitsChangedHandler - In the implementation block
@property (readonly) unsigned locationVisitsFlags; 
@property (readonly) BOOL manateeAvailable; 
@property (copy) id manateeChangedHandler;                                             //@synthesize manateeChangedHandler=_manateeChangedHandler - In the implementation block
@property (copy) id meDeviceChangedHandler;                                            //@synthesize meDeviceChangedHandler=_meDeviceChangedHandler - In the implementation block
@property (copy,readonly) NSString * meDeviceFMFDeviceID; 
@property (copy,readonly) NSString * meDeviceIDSDeviceID; 
@property (readonly) BOOL meDeviceIsMe; 
@property (copy,readonly) NSString * meDeviceName; 
@property (readonly) BOOL meDeviceValid; 
@property (copy) id netFlagsChangedHandler;                                            //@synthesize netFlagsChangedHandler=_netFlagsChangedHandler - In the implementation block
@property (readonly) unsigned netFlags; 
@property (copy) id netInterfacesChangedHandler;                                       //@synthesize netInterfacesChangedHandler=_netInterfacesChangedHandler - In the implementation block
@property (copy) id primaryIPChangedHandler;                                           //@synthesize primaryIPChangedHandler=_primaryIPChangedHandler - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* primaryIPv4Addr; 
@property (nonatomic,readonly) /*function pointer*/void* primaryIPv6Addr; 
@property (copy) id primaryNetworkChangedHandler;                                      //@synthesize primaryNetworkChangedHandler=_primaryNetworkChangedHandler - In the implementation block
@property (copy,readonly) NSString * primaryNetworkSignature; 
@property (copy) id powerUnlimitedChangedHandler;                                      //@synthesize powerUnlimitedChangedHandler=_powerUnlimitedChangedHandler - In the implementation block
@property (readonly) BOOL powerUnlimited; 
@property (copy) id primaryAppleIDChangedHandler;                                      //@synthesize primaryAppleIDChangedHandler=_primaryAppleIDChangedHandler - In the implementation block
@property (copy,readonly) NSString * primaryAppleID; 
@property (readonly) BOOL primaryAppleIDIsHSA2; 
@property (copy,readonly) NSString * regionISOCountryCode; 
@property (copy,readonly) NSString * regionMobileCountryCode; 
@property (copy,readonly) NSString * regionRoutineCountry; 
@property (copy,readonly) NSString * regionRoutineState; 
@property (copy) id regionChangedHandler;                                              //@synthesize regionChangedHandler=_regionChangedHandler - In the implementation block
@property (readonly) SCD_Struct_CU6 rotatingIdentifier48; 
@property (copy,readonly) NSData * rotatingIdentifierData; 
@property (copy) id rotatingIdentifierChangedHandler;                                  //@synthesize rotatingIdentifierChangedHandler=_rotatingIdentifierChangedHandler - In the implementation block
@property (readonly) BOOL screenLocked; 
@property (copy) id screenLockedChangedHandler;                                        //@synthesize screenLockedChangedHandler=_screenLockedChangedHandler - In the implementation block
@property (readonly) BOOL screenLockedSync; 
@property (readonly) BOOL screenOn; 
@property (copy) id screenOnChangedHandler;                                            //@synthesize screenOnChangedHandler=_screenOnChangedHandler - In the implementation block
@property (readonly) BOOL screenSaverActive; 
@property (copy) id screenSaverChangedHandler;                                         //@synthesize screenSaverChangedHandler=_screenSaverChangedHandler - In the implementation block
@property (nonatomic,readonly) int systemLockState; 
@property (copy) id systemLockStateChangedHandler;                                     //@synthesize systemLockStateChangedHandler=_systemLockStateChangedHandler - In the implementation block
@property (nonatomic,readonly) int systemLockStateSync; 
@property (copy,readonly) NSString * systemName; 
@property (copy) id systemNameChangedHandler;                                          //@synthesize systemNameChangedHandler=_systemNameChangedHandler - In the implementation block
@property (nonatomic,readonly) BOOL firstUnlocked; 
@property (nonatomic,readonly) BOOL firstUnlockedSync; 
@property (copy) id firstUnlockHandler;                                                //@synthesize firstUnlockHandler=_firstUnlockHandler - In the implementation block
@property (nonatomic,readonly) unsigned wifiFlags; 
@property (nonatomic,readonly) int wifiState; 
@property (copy) id wifiStateChangedHandler;                                           //@synthesize wifiStateChangedHandler=_wifiStateChangedHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(int)wifiState;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)screenLocked;
-(NSArray *)familyMembers;
-(BOOL)screenOn;
-(void)setScreenOnChangedHandler:(id)arg1 ;
-(id)bluetoothAddressChangedHandler;
-(void)setBluetoothAddressChangedHandler:(id)arg1 ;
-(/*function pointer*/void*)primaryIPv4Addr;
-(/*function pointer*/void*)primaryIPv6Addr;
-(id)primaryIPChangedHandler;
-(id)primaryNetworkChangedHandler;
-(NSString *)primaryNetworkSignature;
-(void)setPrimaryIPChangedHandler:(id)arg1 ;
-(void)setPrimaryNetworkChangedHandler:(id)arg1 ;
-(id)wifiStateChangedHandler;
-(unsigned)wifiFlags;
-(void)setWifiStateChangedHandler:(id)arg1 ;
-(id)firstUnlockHandler;
-(id)systemLockStateChangedHandler;
-(id)systemNameChangedHandler;
-(id)netInterfacesChangedHandler;
-(id)screenSaverChangedHandler;
-(id)screenOnChangedHandler;
-(id)screenLockedChangedHandler;
-(id)rotatingIdentifierChangedHandler;
-(id)regionChangedHandler;
-(id)primaryAppleIDChangedHandler;
-(id)powerUnlimitedChangedHandler;
-(id)netFlagsChangedHandler;
-(id)meDeviceChangedHandler;
-(id)manateeChangedHandler;
-(id)locationVisitsChangedHandler;
-(NSBundle *)locationVisitsBundle;
-(id)familyUpdatedHandler;
-(SCD_Struct_CU6)bluetoothAddress48;
-(NSData *)bluetoothAddressData;
-(int)activeCallCount;
-(unsigned)callFlags;
-(int)connectedCallCount;
-(id)callChangedHandler;
-(BOOL)clamshellMode;
-(id)clamshellModeChangedHandler;
-(unsigned)consoleUserID;
-(NSString *)consoleUserName;
-(id)consoleUserChangedHandler;
-(unsigned)locationVisitsFlags;
-(BOOL)manateeAvailable;
-(NSString *)meDeviceFMFDeviceID;
-(NSString *)meDeviceIDSDeviceID;
-(BOOL)meDeviceIsMe;
-(NSString *)meDeviceName;
-(BOOL)meDeviceValid;
-(unsigned)netFlags;
-(BOOL)powerUnlimited;
-(NSString *)primaryAppleID;
-(BOOL)primaryAppleIDIsHSA2;
-(NSString *)regionISOCountryCode;
-(NSString *)regionMobileCountryCode;
-(NSString *)regionRoutineCountry;
-(NSString *)regionRoutineState;
-(SCD_Struct_CU6)rotatingIdentifier48;
-(NSData *)rotatingIdentifierData;
-(BOOL)screenLockedSync;
-(BOOL)screenSaverActive;
-(int)systemLockState;
-(int)systemLockStateSync;
-(NSString *)systemName;
-(BOOL)firstUnlocked;
-(BOOL)firstUnlockedSync;
-(void)setCallChangedHandler:(id)arg1 ;
-(void)setClamshellModeChangedHandler:(id)arg1 ;
-(void)setConsoleUserChangedHandler:(id)arg1 ;
-(void)setFamilyUpdatedHandler:(id)arg1 ;
-(void)setLocationVisitsBundle:(NSBundle *)arg1 ;
-(void)setLocationVisitsChangedHandler:(id)arg1 ;
-(void)setManateeChangedHandler:(id)arg1 ;
-(void)setMeDeviceChangedHandler:(id)arg1 ;
-(void)setNetFlagsChangedHandler:(id)arg1 ;
-(void)setNetInterfacesChangedHandler:(id)arg1 ;
-(void)setPowerUnlimitedChangedHandler:(id)arg1 ;
-(void)setPrimaryAppleIDChangedHandler:(id)arg1 ;
-(void)setRegionChangedHandler:(id)arg1 ;
-(void)setRotatingIdentifierChangedHandler:(id)arg1 ;
-(void)setScreenLockedChangedHandler:(id)arg1 ;
-(void)setScreenSaverChangedHandler:(id)arg1 ;
-(void)setSystemLockStateChangedHandler:(id)arg1 ;
-(void)setSystemNameChangedHandler:(id)arg1 ;
-(void)setFirstUnlockHandler:(id)arg1 ;
@end

