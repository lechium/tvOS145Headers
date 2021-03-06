/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMAccessoryDelegate.h>

@protocol _TVRCHMServiceWrapperDelegate;
@class HMHome, HMService, HMAccessory, HMCharacteristic, NSString;

@interface _TVRCHMServiceWrapper : NSObject <HMAccessoryDelegate> {

	BOOL _connected;
	BOOL _sentWakeKey;
	BOOL _volumeControlSupported;
	id<_TVRCHMServiceWrapperDelegate> _delegate;
	HMHome* _home;
	HMService* _service;
	HMAccessory* _accessory;
	HMCharacteristic* _serviceCharacteristic;
	HMCharacteristic* _activeCharacteristic;
	HMCharacteristic* _volumeSelectorCharacteristic;

}

@property (nonatomic,retain) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMService * service;                                            //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) HMAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) HMCharacteristic * serviceCharacteristic;                       //@synthesize serviceCharacteristic=_serviceCharacteristic - In the implementation block
@property (nonatomic,retain) HMCharacteristic * activeCharacteristic;                        //@synthesize activeCharacteristic=_activeCharacteristic - In the implementation block
@property (nonatomic,retain) HMCharacteristic * volumeSelectorCharacteristic;                //@synthesize volumeSelectorCharacteristic=_volumeSelectorCharacteristic - In the implementation block
@property (assign,nonatomic) BOOL connected;                                                 //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL sentWakeKey;                                               //@synthesize sentWakeKey=_sentWakeKey - In the implementation block
@property (assign,nonatomic) BOOL volumeControlSupported;                                    //@synthesize volumeControlSupported=_volumeControlSupported - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * model; 
@property (assign,nonatomic,__weak) id<_TVRCHMServiceWrapperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperWithService:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id<_TVRCHMServiceWrapperDelegate>)delegate;
-(void)setDelegate:(id<_TVRCHMServiceWrapperDelegate>)arg1 ;
-(NSString *)identifier;
-(void)disconnect;
-(BOOL)connected;
-(HMService *)service;
-(void)connect;
-(void)setService:(HMService *)arg1 ;
-(NSString *)model;
-(id)initWithService:(id)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(BOOL)supportsVolumeControl;
-(BOOL)supportsInfoKey;
-(void)_checkVolumeServicesForAccessory:(id)arg1 ;
-(void)_setCharacteristicsForService:(id)arg1 ;
-(void)_startObservingServiceNotifications;
-(void)_disconnectWithError:(id)arg1 ;
-(void)_sendVolumeKey:(BOOL)arg1 ;
-(long long)_remoteKeyForTVRCButton:(id)arg1 ;
-(void)_sendRemoteKey:(long long)arg1 ;
-(void)_sendWakeKey;
-(void)_serviceNameChanged:(id)arg1 ;
-(void)_serviceRemoved:(id)arg1 ;
-(void)_stopObservingServiceNotifications;
-(void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 ;
-(id)_televisionServiceForAccessory:(id)arg1 ;
-(HMCharacteristic *)serviceCharacteristic;
-(void)setServiceCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)activeCharacteristic;
-(void)setActiveCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)volumeSelectorCharacteristic;
-(void)setVolumeSelectorCharacteristic:(HMCharacteristic *)arg1 ;
-(BOOL)sentWakeKey;
-(void)setSentWakeKey:(BOOL)arg1 ;
-(BOOL)volumeControlSupported;
-(void)setVolumeControlSupported:(BOOL)arg1 ;
@end

