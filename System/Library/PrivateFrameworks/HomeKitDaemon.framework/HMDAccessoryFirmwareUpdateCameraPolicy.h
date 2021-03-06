/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAccessoryFirmwareUpdatePolicy.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHAPAccessory, NSString;

@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging> {

	HMDHAPAccessory* _accessory;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)configure;
-(HMDHAPAccessory *)accessory;
-(void)registerForNotifications;
-(BOOL)evaluate;
-(void)handleAccessoryConnectedNotification:(id)arg1 ;
-(void)handleAccessoryDisconnectedNotification:(id)arg1 ;
-(void)handleSettingsChange:(id)arg1 ;
-(void)handleCharacteristicValuesChanged:(id)arg1 ;
-(void)monitorStreamStatus:(BOOL)arg1 ;
-(void)_handleStreamStatusCharacteristicChanges;
-(void)_processStreamingStatus:(id)arg1 ;
-(void)_handleStreamStatusMultireadResponse:(id)arg1 ;
-(void)_checkStreamingStatus;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 ;
@end

