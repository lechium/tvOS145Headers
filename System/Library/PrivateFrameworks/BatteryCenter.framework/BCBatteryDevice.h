/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BatteryCenter/BatteryCenter-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BCBatteryDevice : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _matchIdentifier;
	long long _percentCharge;
	BOOL _charging;
	BOOL _connected;
	BOOL _batterySaverModeActive;
	BOOL _lowBattery;
	BOOL _internal;
	BOOL _powerSource;
	BOOL _approximatesPercentCharge;
	BOOL _wirelesslyCharging;
	BOOL _fake;
	long long _vendor;
	long long _powerSourceState;
	long long _productIdentifier;
	NSString* _accessoryIdentifier;
	NSString* _name;
	NSString* _modelNumber;
	unsigned long long _parts;
	unsigned long long _accessoryCategory;
	NSString* _groupName;
	long long _transportType;

}

@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long percentCharge;                                                  //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                        //@synthesize connected=_connected - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                          //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isInternal,nonatomic) BOOL internal;                                          //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isPowerSource,nonatomic) BOOL powerSource;                                    //@synthesize powerSource=_powerSource - In the implementation block
@property (assign,nonatomic) BOOL approximatesPercentCharge;                                           //@synthesize approximatesPercentCharge=_approximatesPercentCharge - In the implementation block
@property (assign,nonatomic) unsigned long long parts;                                                 //@synthesize parts=_parts - In the implementation block
@property (assign,getter=isWirelesslyCharging,nonatomic) BOOL wirelesslyCharging;                      //@synthesize wirelesslyCharging=_wirelesslyCharging - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchIdentifier;                                        //@synthesize matchIdentifier=_matchIdentifier - In the implementation block
@property (assign,nonatomic) long long transportType;                                                  //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) long long powerSourceState;                                               //@synthesize powerSourceState=_powerSourceState - In the implementation block
@property (assign,getter=isFake,nonatomic) BOOL fake;                                                  //@synthesize fake=_fake - In the implementation block
@property (assign,getter=isBatterySaverModeActive,nonatomic) BOOL batterySaverModeActive;              //@synthesize batterySaverModeActive=_batterySaverModeActive - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery;                                      //@synthesize lowBattery=_lowBattery - In the implementation block
@property (nonatomic,copy) NSString * accessoryIdentifier;                                             //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryCategory;                                     //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                                     //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,readonly) long long vendor;                                                       //@synthesize vendor=_vendor - In the implementation block
@property (nonatomic,readonly) long long productIdentifier;                                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)batteryDeviceWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)parts;
-(BOOL)isConnected;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(BOOL)isBatterySaverModeActive;
-(void)setConnected:(BOOL)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(long long)vendor;
-(BOOL)isCharging;
-(BOOL)isInternal;
-(void)setInternal:(BOOL)arg1 ;
-(NSString *)modelNumber;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(long long)productIdentifier;
-(unsigned long long)accessoryCategory;
-(void)setAccessoryCategory:(unsigned long long)arg1 ;
-(NSString *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(NSString *)arg1 ;
-(NSString *)matchIdentifier;
-(long long)percentCharge;
-(void)setParts:(unsigned long long)arg1 ;
-(void)setPowerSource:(BOOL)arg1 ;
-(void)setPowerSourceState:(long long)arg1 ;
-(void)setWirelesslyCharging:(BOOL)arg1 ;
-(void)setPercentCharge:(long long)arg1 ;
-(void)setLowBattery:(BOOL)arg1 ;
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(void)setApproximatesPercentCharge:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5 ;
-(void)setFake:(BOOL)arg1 ;
-(long long)powerSourceState;
-(BOOL)isLowBattery;
-(BOOL)isPowerSource;
-(BOOL)approximatesPercentCharge;
-(BOOL)isWirelesslyCharging;
-(BOOL)isFake;
@end

