/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBCentralManagerDelegate <NSObject>
@optional
-(void)centralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;
-(void)centralManager:(id)arg1 didUpdateANCSAuthorizationForPeripheral:(id)arg2;

@required
-(void)centralManagerDidUpdateState:(id)arg1;

@end

