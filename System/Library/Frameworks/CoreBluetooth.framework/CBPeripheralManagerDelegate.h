/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBPeripheralManagerDelegate <NSObject>
@optional
-(void)peripheralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
-(void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;

@required
-(void)peripheralManagerDidUpdateState:(id)arg1;

@end

