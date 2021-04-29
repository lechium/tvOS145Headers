/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOAccessoryManager/ACCTransportIOAccessoryBase.h>

@protocol OS_dispatch_source;
@class NSObject, NSString, NSData, NSMutableSet, NSSet;

@interface ACCTransportIOAccessoryManager : ACCTransportIOAccessoryBase {

	BOOL _allAccessoryInfoFieldsAreValid;
	BOOL _needsOOBPairing;
	BOOL _isAuthenticated;
	BOOL _isRootPort;
	BOOL _bAccConnected;
	BOOL _bIsInductive;
	BOOL _bIsInductivePowerToAccessory;
	BOOL _bIsWatch;
	int _accessoryPowerMode;
	int _connectionType;
	int _resistorID;
	NSObject*<OS_dispatch_source> _authTimerAccessory;
	NSString* _deviceName;
	NSString* _deviceVendorName;
	NSString* _deviceModelNumber;
	NSString* _deviceSerialNumber;
	NSString* _deviceHardwareRevision;
	NSString* _deviceFirmwareRevision;
	NSString* _ppid;
	NSData* _digitalID;
	NSString* _connectionUUID;
	NSMutableSet* _mutableioAccessoryChildPorts;
	NSMutableSet* _mutableioAccessoryEAChildPorts;
	NSMutableSet* _mutableioAccessoryAuthCPChildPorts;
	NSMutableSet* _mutableioAccessoryOOBPairingChildPorts;
	NSMutableSet* _mutableioAccessoryConfigStreamChildPorts;

}

@property (nonatomic,retain) NSMutableSet * mutableioAccessoryChildPorts;                          //@synthesize mutableioAccessoryChildPorts=_mutableioAccessoryChildPorts - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableioAccessoryEAChildPorts;                        //@synthesize mutableioAccessoryEAChildPorts=_mutableioAccessoryEAChildPorts - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableioAccessoryAuthCPChildPorts;                    //@synthesize mutableioAccessoryAuthCPChildPorts=_mutableioAccessoryAuthCPChildPorts - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableioAccessoryOOBPairingChildPorts;                //@synthesize mutableioAccessoryOOBPairingChildPorts=_mutableioAccessoryOOBPairingChildPorts - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableioAccessoryConfigStreamChildPorts;              //@synthesize mutableioAccessoryConfigStreamChildPorts=_mutableioAccessoryConfigStreamChildPorts - In the implementation block
@property (assign,nonatomic) int resistorID;                                                       //@synthesize resistorID=_resistorID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceVendorName;                                          //@synthesize deviceVendorName=_deviceVendorName - In the implementation block
@property (nonatomic,retain) NSString * deviceModelNumber;                                         //@synthesize deviceModelNumber=_deviceModelNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceSerialNumber;                                        //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceHardwareRevision;                                    //@synthesize deviceHardwareRevision=_deviceHardwareRevision - In the implementation block
@property (nonatomic,retain) NSString * deviceFirmwareRevision;                                    //@synthesize deviceFirmwareRevision=_deviceFirmwareRevision - In the implementation block
@property (nonatomic,retain) NSString * ppid;                                                      //@synthesize ppid=_ppid - In the implementation block
@property (nonatomic,retain) NSData * digitalID;                                                   //@synthesize digitalID=_digitalID - In the implementation block
@property (nonatomic,readonly) BOOL bIsInductive;                                                  //@synthesize bIsInductive=_bIsInductive - In the implementation block
@property (nonatomic,readonly) BOOL bIsInductivePowerToAccessory;                                  //@synthesize bIsInductivePowerToAccessory=_bIsInductivePowerToAccessory - In the implementation block
@property (nonatomic,readonly) BOOL bIsWatch;                                                      //@synthesize bIsWatch=_bIsWatch - In the implementation block
@property (nonatomic,readonly) NSSet * ioAccessoryChildPorts; 
@property (nonatomic,readonly) NSSet * eaProtocolChildPorts; 
@property (nonatomic,readonly) NSSet * authCPChildPorts; 
@property (nonatomic,readonly) NSSet * oobPairingChildPorts; 
@property (nonatomic,readonly) NSSet * configStreamChildPorts; 
@property (assign,nonatomic) int accessoryPowerMode;                                               //@synthesize accessoryPowerMode=_accessoryPowerMode - In the implementation block
@property (assign,nonatomic) BOOL needsOOBPairing;                                                 //@synthesize needsOOBPairing=_needsOOBPairing - In the implementation block
@property (assign,nonatomic) BOOL isAuthenticated;                                                 //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (nonatomic,readonly) BOOL isRootPort;                                                    //@synthesize isRootPort=_isRootPort - In the implementation block
@property (nonatomic,readonly) int connectionType;                                                 //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL bAccConnected;                                                   //@synthesize bAccConnected=_bAccConnected - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> authTimerAccessory;                   //@synthesize authTimerAccessory=_authTimerAccessory - In the implementation block
@property (nonatomic,copy) NSString * connectionUUID;                                              //@synthesize connectionUUID=_connectionUUID - In the implementation block
-(void)dealloc;
-(void)setConnectionUUID:(NSString *)arg1 ;
-(BOOL)isAuthenticated;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(int)connectionType;
-(NSString *)connectionUUID;
-(NSString *)deviceModelNumber;
-(void)setDeviceModelNumber:(NSString *)arg1 ;
-(NSString *)deviceSerialNumber;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(void)setPpid:(NSString *)arg1 ;
-(NSString *)ppid;
-(void)_sendNotification:(id)arg1 ;
-(NSString *)deviceVendorName;
-(NSString *)deviceHardwareRevision;
-(NSString *)deviceFirmwareRevision;
-(void)setDeviceVendorName:(NSString *)arg1 ;
-(void)setDeviceHardwareRevision:(NSString *)arg1 ;
-(void)setDeviceFirmwareRevision:(NSString *)arg1 ;
-(void)transportClassTerminated;
-(int)resistorID;
-(void)setIsAuthenticated:(BOOL)arg1 ;
-(void)_clearAccessoryInfo;
-(void)_registerForIOAccessoryManagerInterestNotifications;
-(int)_connectionTypeForPrimaryPort;
-(BOOL)setFeaturesFromAuthStatus:(int)arg1 authCert:(id)arg2 ;
-(void)_stopAuthTimer;
-(void)setAccessoryPowerMode:(int)arg1 ;
-(NSMutableSet *)mutableioAccessoryChildPorts;
-(NSMutableSet *)mutableioAccessoryEAChildPorts;
-(NSMutableSet *)mutableioAccessoryAuthCPChildPorts;
-(NSMutableSet *)mutableioAccessoryOOBPairingChildPorts;
-(NSMutableSet *)mutableioAccessoryConfigStreamChildPorts;
-(void)_pokeResistorID;
-(BOOL)bAccConnected;
-(void)setBAccConnected:(BOOL)arg1 ;
-(int)_IOAccUSBModeTypeForSetUSBMode:(int)arg1 ;
-(int)_ACCPlatformUSBModeForIOAccessoryUSBConnectType:(int)arg1 ;
-(unsigned)accessoryPowerModeCurrentLimitInmA:(int)arg1 ;
-(BOOL)bIsInductive;
-(BOOL)isRootPort;
-(void)setResistorID:(int)arg1 ;
-(id)_connectionUUIDsForNotification;
-(void)setDigitalID:(NSData *)arg1 ;
-(NSData *)digitalID;
-(void)_handleResistorIDChangeNotification:(int)arg1 ;
-(int)accessoryPowerMode;
-(id)initWithIOService:(unsigned)arg1 ;
-(void)addIOAccessoryChildPort:(id)arg1 ;
-(void)removeIOAccessoryChildPort:(id)arg1 ;
-(BOOL)setUSBMode:(int)arg1 ;
-(int)getUSBMode;
-(BOOL)setUSBCurrentOffset:(int)arg1 ;
-(BOOL)setUSBCurrentLimitBase:(unsigned)arg1 ;
-(unsigned)USBCurrentLimitInmA;
-(unsigned)USBCurrentLimitBaseInmA;
-(int)USBCurrentLimitOffsetInmA;
-(unsigned)USBChargingVoltageInmV;
-(int)cableType;
-(unsigned)sleepPowerCurrentLimitInmA;
-(BOOL)isPowerDuringSleepSupported;
-(BOOL)setPowerDuringSleepEnabled:(BOOL)arg1 ;
-(BOOL)isPowerDuringSleepEnabled;
-(BOOL)setBatteryPackMode:(BOOL)arg1 ;
-(BOOL)isBatteryPackModeEnabled;
-(BOOL)setAccessoryRequestedCurrent:(unsigned)arg1 ;
-(BOOL)setAccessoryUsedCurrent:(unsigned)arg1 ;
-(BOOL)resetAccessoryBaseCurrent;
-(unsigned)accessoryChargingCurrentInmA;
-(BOOL)supervisedTransportsRestricted;
-(void)_handleBatteryPackNotification;
-(void)_handleUSBCurrentLimitNotification;
-(void)_handlePowerChangeNotification;
-(void)_processAccessoryInfo;
-(NSSet *)ioAccessoryChildPorts;
-(NSSet *)eaProtocolChildPorts;
-(NSSet *)authCPChildPorts;
-(NSSet *)oobPairingChildPorts;
-(NSSet *)configStreamChildPorts;
-(BOOL)needsOOBPairing;
-(void)setNeedsOOBPairing:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)authTimerAccessory;
-(void)setMutableioAccessoryChildPorts:(NSMutableSet *)arg1 ;
-(void)setMutableioAccessoryEAChildPorts:(NSMutableSet *)arg1 ;
-(void)setMutableioAccessoryAuthCPChildPorts:(NSMutableSet *)arg1 ;
-(void)setMutableioAccessoryOOBPairingChildPorts:(NSMutableSet *)arg1 ;
-(void)setMutableioAccessoryConfigStreamChildPorts:(NSMutableSet *)arg1 ;
-(BOOL)bIsInductivePowerToAccessory;
-(BOOL)bIsWatch;
@end

