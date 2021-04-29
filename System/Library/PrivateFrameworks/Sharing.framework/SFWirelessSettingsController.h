/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Sharing/Sharing-Structs.h>
@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	BOOL _wifiEnabled;
	BOOL _airplaneModeEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	BOOL _firstCallbackCompleted;
	BOOL _wirelessCarPlayEnabled;
	BOOL _wirelessAccessPointEnabled;
	SFOperationRef _information;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled; 
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled; 
@property (getter=isWifiEnabled) BOOL wifiEnabled; 
@property (getter=isWirelessAccessPointEnabled) BOOL wirelessAccessPointEnabled; 
@property (getter=isWirelessCarPlayEnabled,readonly) BOOL wirelessCarPlayEnabled; 
@property (readonly) BOOL deviceSupportsWAPI; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(BOOL)isAirplaneModeEnabled;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(BOOL)isWifiEnabled;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(BOOL)isBluetoothEnabled;
-(BOOL)deviceSupportsWAPI;
-(BOOL)isWirelessAccessPointEnabled;
-(void)setWirelessAccessPointEnabled:(BOOL)arg1 ;
-(BOOL)isWirelessCarPlayEnabled;
@end

