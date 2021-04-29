/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class CKContainer, NSNotificationCenter, NAFuture, HMFTimer, NSString;

@interface HMBCloudCredentialsAvailabilityListener : HMFObject <HMFLogging, HMFTimerDelegate> {

	hmf_unfair_data_lock_s _lock;
	CKContainer* _container;
	NSNotificationCenter* _notificationCenter;
	NAFuture* _manateeAvailabilityFuture;
	NAFuture* _keychainAvailabilityFuture;
	HMFTimer* _keychainAvailabilityTimer;
	/*^block*/id _keychainAvailabilityTimerFactory;

}

@property (copy) id keychainAvailabilityTimerFactory;               //@synthesize keychainAvailabilityTimerFactory=_keychainAvailabilityTimerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithContainer:(id)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithContainer:(id)arg1 notificationCenter:(id)arg2 ;
-(id)keychainAvailabilityTimerFactory;
-(void)handleIdentityUpdateNotification:(id)arg1 ;
-(void)handleAccountChangedNotification:(id)arg1 ;
-(id)waitForManateeAvailability;
-(id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;
-(id)waitForKeychainAvailability;
-(void)setKeychainAvailabilityTimerFactory:(id)arg1 ;
@end

