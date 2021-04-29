/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WPXPCDaemonProtocol <NSObject>
@optional
-(void)unregisterEndpoint:(id)arg1;
-(void)startAdvertising:(id)arg1;
-(void)sendTestRequest:(id)arg1;
-(void)connectToPeer:(id)arg1;
-(void)disconnectFromPeer:(id)arg1;
-(void)startScanning:(id)arg1;
-(void)stopScanning:(id)arg1;
-(void)checkAllowDuplicates:(/*^block*/id)arg1;
-(void)stopAdvertising:(id)arg1;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)isRangingEnabledReply:(/*^block*/id)arg1;
-(void)startTrackingPeerWithRequest:(id)arg1;
-(void)stopTrackingPeerWithRequest:(id)arg1;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2;
-(void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3;
-(void)listenToBandwidthNotifications;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
-(void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
-(void)registerForAnyScanResults:(BOOL)arg1;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 holdVouchers:(long long)arg4;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2;
-(void)startTrackingZone:(id)arg1;
-(void)stopTrackingZones:(id)arg1;
-(void)stopTrackingAllZones;
-(void)getAllTrackedZones;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4;
-(void)enableTestMode;
-(void)getPowerLogStats:(/*^block*/id)arg1;
-(void)disableScanning;
-(void)dumpDaemonState;
-(void)enableBubbleTestMode;
-(void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2;

@end

