/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTWiFiManager.h>

@class NSArray, NSMutableDictionary;

@interface RTWiFiManager_MobileWiFi : RTWiFiManager {

	WiFiManagerClientRef _wifiManager;
	NSArray* _devices;
	NSMutableDictionary* _accessPointForInterface;

}

@property (assign,nonatomic) WiFiManagerClientRef wifiManager;                           //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,retain) NSArray * devices;                                          //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessPointForInterface;              //@synthesize accessPointForInterface=_accessPointForInterface - In the implementation block
+(id)defaultScanRequest;
+(id)scanRequestWithType:(long long)arg1 dwellTime:(long long)arg2 channels:(id)arg3 lowPriority:(BOOL)arg4 ;
-(void)_setup;
-(WiFiManagerClientRef)wifiManager;
-(void)setWifiManager:(WiFiManagerClientRef)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_scheduleScan;
-(void)_cancelScan;
-(void)setAccessPointForInterface:(NSMutableDictionary *)arg1 ;
-(void)_establishConnectionToWiFiManager;
-(void)_destroyConnectionToWiFiManager;
-(void)_setRegisteredForScanUpdateCallbacks:(BOOL)arg1 ;
-(void)_setRegisteredForExtendedLinkCallbacks:(BOOL)arg1 ;
-(void)_setRegisteredForPowerCallbacks:(BOOL)arg1 ;
-(void)_pollAccessPoints;
-(void)_pollManagerPowerStatus;
-(void)_handleWiFiDeviceClientPowerCallback:(WiFiDeviceClientRef)arg1 ;
-(void)_handleWiFiDeviceClientExtendedLinkCallback:(WiFiDeviceClientRef)arg1 eventData:(id)arg2 ;
-(NSMutableDictionary *)accessPointForInterface;
-(void)_handleScanResultsCallback:(id)arg1 error:(int)arg2 ;
-(void)handleWiFiDeviceClientPowerCallback:(WiFiDeviceClientRef)arg1 ;
-(void)handleWiFiDeviceClientExtendedLinkCallback:(WiFiDeviceClientRef)arg1 eventData:(id)arg2 ;
-(void)handleWiFiDeviceClientScanUpdateCallback:(WiFiDeviceClientRef)arg1 scanRequest:(id)arg2 scanResults:(id)arg3 error:(int)arg4 ;
-(void)handleWiFiDeviceClientScanCallback:(WiFiDeviceClientRef)arg1 scanResults:(id)arg2 error:(int)arg3 ;
@end

