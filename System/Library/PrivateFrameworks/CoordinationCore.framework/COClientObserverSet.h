/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoordinationCore/CoordinationCore-Structs.h>
@class NSMapTable, NSDictionary;

@interface COClientObserverSet : NSObject {

	os_unfair_lock_s _lock;
	NSMapTable* _observers;
	NSDictionary* _registrations;

}

@property (nonatomic,copy) NSMapTable * observers;                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy) NSDictionary * registrations;              //@synthesize registrations=_registrations - In the implementation block
-(id)init;
-(NSMapTable *)observers;
-(void)setObservers:(NSMapTable *)arg1 ;
-(NSDictionary *)registrations;
-(void)setRegistrations:(NSDictionary *)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)clientObserversForNotificationName:(id)arg1 ;
-(id)clientObserversForXPCConnection:(id)arg1 ;
-(void)removeClientObserver:(id)arg1 forNotificationName:(id)arg2 ;
-(void)addClientObserver:(id)arg1 forNotificationName:(id)arg2 ;
@end

