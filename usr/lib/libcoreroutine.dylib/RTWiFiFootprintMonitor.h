/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>

@class RTPersistentTimer, NSMutableArray, RTWiFiManager;

@interface RTWiFiFootprintMonitor : RTService {

	long long _footprintState;
	RTPersistentTimer* _scanTimer;
	NSMutableArray* _scanResults;
	RTWiFiManager* _wifiManager;

}

@property (assign,nonatomic) long long footprintState;                   //@synthesize footprintState=_footprintState - In the implementation block
@property (nonatomic,retain) RTPersistentTimer * scanTimer;              //@synthesize scanTimer=_scanTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * scanResults;               //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                //@synthesize wifiManager=_wifiManager - In the implementation block
+(id)footprintStateToString:(long long)arg1 ;
-(id)init;
-(void)_start;
-(RTWiFiManager *)wifiManager;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(void)_stop;
-(void)_shutdown;
-(void)setScanResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)scanResults;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithWiFiManager:(id)arg1 ;
-(void)onWiFiManagerNotificationScanResults:(id)arg1 ;
-(void)onWiFiManagerNotificationPowerStatusChanged:(id)arg1 ;
-(void)setScanTimer:(RTPersistentTimer *)arg1 ;
-(RTPersistentTimer *)scanTimer;
-(void)setFootprintState:(long long)arg1 ;
-(void)_processScanResults:(id)arg1 ;
-(void)_handlePowerStatusChanged:(unsigned long long)arg1 ;
-(long long)_footprintStateForScanResults:(id)arg1 ;
-(void)_pruneScanResults;
-(void)_checkFootprint;
-(void)fetchConstantFootprintStatusForScanResults:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(long long)footprintState;
@end

