/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBStateReporting
@property (nonatomic,readonly) long long bluetoothState; 
@property (nonatomic,copy) id bluetoothStateChangedHandler; 
@required
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(/*^block*/id)arg1;

@end
