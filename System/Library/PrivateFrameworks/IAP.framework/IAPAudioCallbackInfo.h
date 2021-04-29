/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IAP/IAP-Structs.h>
@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject {

	/*function pointer*/void* _deviceStateChangedCallback;
	void* _deviceStateChangedContext;
	/*function pointer*/void* _volumeChangedCallback;
	void* _volumeChangedContext;
	/*function pointer*/void* _pauseOnHeadphoneDisconnectChangedCallback;
	void* _pauseOnHeadphoneDisconnectChangedContext;
	/*function pointer*/void* _volumeControlSupportChangedCallback;
	void* _volumeControlSupportChangedContext;
	CPDistributedNotificationCenter* _dnCenter;
	CPDistributedNotificationCenter* _dnCenteriAP2;
	NSLock* _lock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handleiAPDaemonDied:(id)arg1 ;
-(void)setupDeviceStateChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearDeviceStateChangedCallback;
-(void)setupVolumeChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearVolumeChangedCallback;
-(void)setupPauseOnHeadphoneDisconnectChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearPauseOnHeadphoneDisconnectChangedCallback;
-(void)setupVolumeControlSupportChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearVolumeControlSupportChangedCallback;
-(void)startNotificationCenterOnRunLoop:(CFRunLoopRef)arg1 ;
-(void)_deviceStateChanged:(id)arg1 ;
-(void)_volumeChanged:(id)arg1 ;
-(void)_pauseOnHeadphoneDisconnectChanged:(id)arg1 ;
-(void)_volumeControlSupportChanged:(id)arg1 ;
@end
