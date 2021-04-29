/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableArray, HMDHomeManager, NSObject, HMFTimer, NSHashTable, NSArray, NSString;

@interface HMDUserManagementOperationManager : HMFObject <HMFTimerDelegate> {

	id<HMFLocking> _lock;
	NSMutableArray* _operations;
	HMDHomeManager* _homeManager;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMFTimer* _saveTimer;
	NSHashTable* _observedAccessories;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) HMFTimer * saveTimer;                                  //@synthesize saveTimer=_saveTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observedAccessories;                     //@synthesize observedAccessories=_observedAccessories - In the implementation block
@property (nonatomic,readonly) NSArray * operations; 
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                     //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedManager;
+(void)setSharedManager:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(NSArray *)operations;
-(void)cancelAllOperations;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)removeOperation:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)initWithOperations:(id)arg1 ;
-(void)removeOperationWithIdentifier:(id)arg1 ;
-(HMFTimer *)saveTimer;
-(void)__registerIfNeededForReachablityChangeNotifications;
-(void)_handleRemovedOperation:(id)arg1 ;
-(void)_cleanPriorOperations:(id)arg1 ;
-(void)_handleAddedOperation:(id)arg1 ;
-(void)__save;
-(void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1 ;
-(void)__executeOperation:(id)arg1 ;
-(void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1 ;
-(void)__removeOperationAndProcessDependantOperations:(id)arg1 ;
-(id)_filteredOperationsWithDependency:(id)arg1 ;
-(id)_filteredOperationsForAccessory:(id)arg1 ;
-(NSHashTable *)observedAccessories;
-(void)_handleAccessoryIsReachable:(id)arg1 ;
-(void)_reallySave;
-(void)operationCancelled:(id)arg1 ;
-(void)operationStoppedBackingOff:(id)arg1 ;
@end

