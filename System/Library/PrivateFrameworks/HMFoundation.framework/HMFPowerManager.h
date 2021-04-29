/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMFPowerManager : HMFObject {

	os_unfair_lock_s _lock;
	BOOL _hasBattery;
	BOOL _running;
	float _batteryLevel;
	unsigned _interestNotification;
	long long _batteryState;
	NSObject*<OS_dispatch_queue> _clientQueue;
	IONotificationPortRef _notificationPort;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                           //@synthesize running=_running - In the implementation block
@property (nonatomic,readonly) IONotificationPortRef notificationPort;                //@synthesize notificationPort=_notificationPort - In the implementation block
@property (nonatomic,readonly) unsigned interestNotification;                         //@synthesize interestNotification=_interestNotification - In the implementation block
@property (readonly) BOOL hasBattery;                                                 //@synthesize hasBattery=_hasBattery - In the implementation block
@property (readonly) long long batteryState;                                          //@synthesize batteryState=_batteryState - In the implementation block
@property (readonly) float batteryLevel;                                              //@synthesize batteryLevel=_batteryLevel - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(void)setRunning:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(float)batteryLevel;
-(long long)batteryState;
-(BOOL)hasBattery;
-(void)_deregisterForPowerSourceNotifications:(BOOL)arg1 ;
-(void)_registerForPowerSourceNotifications;
-(IONotificationPortRef)notificationPort;
-(unsigned)interestNotification;
-(void)updateBatteryState:(unsigned)arg1 ;
@end

