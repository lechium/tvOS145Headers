/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VOSBluetoothConnectableDevice.h>

@class CBPeripheral, CBCentralManager, NSString;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice> {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;

}

@property (nonatomic,readonly) CBPeripheral * peripheral;                      //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) CBCentralManager * centralManager;              //@synthesize centralManager=_centralManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(void)disconnect;
-(BOOL)connected;
-(void)connect;
-(CBPeripheral *)peripheral;
-(BOOL)paired;
-(void)unpair;
-(BOOL)connecting;
-(CBCentralManager *)centralManager;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
@end

