/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMDAppleAccountManager, HMDRemoteAccountManager, NSArray, NSString;

@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration> {

	id<HMFLocking> _lock;
	BOOL _started;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDAppleAccountManager* _appleAccountManager;
	HMDRemoteAccountManager* _remoteAccountManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) HMDAppleAccountManager * appleAccountManager;                    //@synthesize appleAccountManager=_appleAccountManager - In the implementation block
@property (readonly) HMDRemoteAccountManager * remoteAccountManager;                  //@synthesize remoteAccountManager=_remoteAccountManager - In the implementation block
@property (readonly) BOOL started;                                                    //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSArray * accounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)sharedRegistry;
+(id)logCategory;
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)start;
-(void)stop;
-(BOOL)started;
-(void)reset;
-(NSArray *)accounts;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)attributeDescriptions;
-(id)accountForHandle:(id)arg1 ;
-(id)deviceForHandle:(id)arg1 ;
-(void)_resolveAccountForHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAppleAccountManager:(id)arg1 remoteAccountManager:(id)arg2 ;
-(void)__handleAppleAccountUpdate:(id)arg1 ;
-(void)__handleAddedRemoteAccount:(id)arg1 ;
-(void)__handleRemovedRemoteAccount:(id)arg1 ;
-(HMDAppleAccountManager *)appleAccountManager;
-(HMDRemoteAccountManager *)remoteAccountManager;
-(id)accountForHandle:(id)arg1 exists:(BOOL*)arg2 ;
-(id)deviceForIdentifier:(id)arg1 ;
-(id)deviceForHandle:(id)arg1 exists:(BOOL*)arg2 ;
-(id)deviceForDevice:(id)arg1 exists:(BOOL*)arg2 ;
-(BOOL)accountExistsForHandle:(id)arg1 ;
-(BOOL)deviceExistsForHandle:(id)arg1 ;
-(BOOL)deviceExistsForDevice:(id)arg1 ;
-(id)deviceForDevice:(id)arg1 ;
-(id)deviceForPushToken:(id)arg1 ;
-(void)__handleAppleAccountHandlesUpdated:(id)arg1 ;
-(void)__handleAppleAccountDeviceAdded:(id)arg1 ;
@end

