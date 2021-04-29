/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, HMFUnfairLock;

@interface HMIThermalMonitor : HMFObject {

	IOHIDEventSystemClientRef _client;
	int _thermalLevelNotificationToken;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	unsigned long long _thermalLevel;
	NSMutableDictionary* _services;
	HMFUnfairLock* _lock;

}

@property (readonly) NSMutableDictionary * services;               //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;               //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long thermalLevel;              //@synthesize thermalLevel=_thermalLevel - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(HMFUnfairLock *)lock;
-(NSMutableDictionary *)services;
-(unsigned long long)thermalLevel;
-(void)_updateThermalLevel;
-(BOOL)readValueFromSensor:(int)arg1 value:(double*)arg2 ;
-(BOOL)readMaxValue:(double*)arg1 ;
@end

