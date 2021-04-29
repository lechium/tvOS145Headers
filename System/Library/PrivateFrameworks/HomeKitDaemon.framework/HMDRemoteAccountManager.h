/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDAccountManager.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFUnfairLock, NSMutableSet, IDSService, NSMutableArray, HMDBackingStore, NSArray, NSString;

@interface HMDRemoteAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFObject, IDSServiceDelegate, NSFastEnumeration> {

	NSObject*<OS_dispatch_queue> _queue;
	HMFUnfairLock* _lock;
	NSMutableSet* _accounts;
	BOOL _monitoring;
	IDSService* _service;
	NSMutableArray* _resolveOperations;
	HMDBackingStore* _backingStore;

}

@property (nonatomic,readonly) IDSService * service;                              //@synthesize service=_service - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                 //@synthesize monitoring=_monitoring - In the implementation block
@property (nonatomic,readonly) NSMutableArray * resolveOperations;                //@synthesize resolveOperations=_resolveOperations - In the implementation block
@property (nonatomic,retain) NSArray * accounts; 
@property (nonatomic,retain) HMDBackingStore * backingStore;                      //@synthesize backingStore=_backingStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedManager;
+(id)logCategory;
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)start;
-(void)stop;
-(void)reset;
-(IDSService *)service;
-(BOOL)isMonitoring;
-(NSArray *)accounts;
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(id)accountForIdentifier:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(id)initWithIDSService:(id)arg1 ;
-(NSArray *)attributeDescriptions;
-(void)setMonitoring:(BOOL)arg1 ;
-(id)accountForHandle:(id)arg1 ;
-(void)_resolveAccountForHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)deviceForSenderContext:(id)arg1 ;
-(void)__handleSendMessageFailureWithError:(id)arg1 destination:(id)arg2 ;
-(id)accountForSenderContext:(id)arg1 ;
-(BOOL)shouldCacheAccount:(id)arg1 ;
-(BOOL)shouldSyncAccount:(id)arg1 ;
-(BOOL)shouldSyncDevice:(id)arg1 ;
-(BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3 ;
-(BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3 ;
-(void)processAccountModel:(id)arg1 message:(id)arg2 ;
-(void)processAccountModelRemove:(id)arg1 message:(id)arg2 ;
-(NSMutableArray *)resolveOperations;
-(id)accountForModelIdentifier:(id)arg1 ;
@end

