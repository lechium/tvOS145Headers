/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCPlatformPowerPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)configureAccessoryPowerMode:(int)arg1 forConnectionUUID:(id)arg2;
-(BOOL)setUSBCurrentOffset:(int)arg1 forConnectionUUID:(id)arg2;
-(BOOL)setUSBCurrentLimitBase:(unsigned)arg1 forConnectionUUID:(id)arg2;
-(unsigned)USBCurrentLimitInmA:(id)arg1;
-(unsigned)USBCurrentLimitBaseInmA:(id)arg1;
-(unsigned)USBCurrentLimitOffsetInmA:(id)arg1;
-(unsigned)USBChargingVoltageInmV:(id)arg1;
-(int)CableType:(id)arg1;
-(unsigned)sleepPowerCurrentLimitInmA:(id)arg1;
-(BOOL)isPowerDuringSleepSupported:(id)arg1;
-(BOOL)setPowerDuringSleepEnabled:(BOOL)arg1 forConnectionUUID:(id)arg2;
-(BOOL)isPowerDuringSleepEnabled:(id)arg1;
-(BOOL)setBatteryPackMode:(BOOL)arg1 forConnectionUUID:(id)arg2;
-(BOOL)isBatteryPackModeEnabled:(id)arg1;
-(BOOL)setAccessoryRequestedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2;
-(BOOL)setAccessoryUsedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2;
-(BOOL)resetAccessoryBaseCurrent:(id)arg1;
-(unsigned)accessoryChargingCurrentInmA:(id)arg1;
-(unsigned)accessoryPowerModeCurrentLimitInmA:(int)arg1 forConnectionUUID:(id)arg2;

@end

