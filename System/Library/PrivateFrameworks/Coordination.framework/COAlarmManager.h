/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Coordination.framework/Coordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Coordination/Coordination-Structs.h>
#import <libobjc.A.dylib/COAlarmManagerClientInterface.h>

@protocol COAlarmManagerConnectionProvider;
@class NSDictionary, NSNotificationCenter, HMAccessory, NSXPCConnection, NSUUID, NSString;

@interface COAlarmManager : NSObject <COAlarmManagerClientInterface> {

	os_unfair_lock_s _lock;
	NSDictionary* _observers;
	NSNotificationCenter* _center;
	HMAccessory* _accessory;
	NSXPCConnection* _lastConnection;
	id<COAlarmManagerConnectionProvider> _provider;
	NSUUID* _instanceID;

}

@property (nonatomic,readonly) NSNotificationCenter * center;                              //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                                    //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * lastConnection;                      //@synthesize lastConnection=_lastConnection - In the implementation block
@property (nonatomic,readonly) id<COAlarmManagerConnectionProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSDictionary * observers;                                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSUUID * instanceID;                                        //@synthesize instanceID=_instanceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id<COAlarmManagerConnectionProvider>)provider;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(NSNotificationCenter *)center;
-(NSDictionary *)observers;
-(void)setObservers:(NSDictionary *)arg1 ;
-(HMAccessory *)accessory;
-(id)alarms;
-(id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSUUID *)instanceID;
-(id)removeAlarm:(id)arg1 ;
-(id)addAlarm:(id)arg1 ;
-(void)_handleNotification:(id)arg1 ;
-(NSXPCConnection *)lastConnection;
-(void)setLastConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnectionProvider:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)alarmsIncludingSleepAlarm:(BOOL)arg1 ;
-(id)updateAlarm:(id)arg1 ;
-(id)snoozeAlarmWithIdentifier:(id)arg1 ;
-(id)dismissAlarmWithIdentifier:(id)arg1 ;
-(void)postNotificationName:(id)arg1 withUserInfo:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_alarmsForAccessoryUniqueIdentifier:(id)arg1 includingSleepAlarm:(BOOL)arg2 ;
-(id)initForAccessory:(id)arg1 withConnectionProvider:(id)arg2 ;
-(id)alarmsForAccessory:(id)arg1 ;
-(BOOL)_canDispatchForAssociatedAccessory;
@end

