/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDHomeManager, NSObject, NSArray, NSString, NSUUID;

@interface HMDAssistantGather : HMFObject <HMFLogging> {

	HMDHomeManager* _manager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSArray* _currentHomekitObjects;

}

@property (assign,nonatomic,__weak) HMDHomeManager * manager;                     //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSArray * currentHomekitObjects;                     //@synthesize currentHomekitObjects=_currentHomekitObjects - In the implementation block
@property (nonatomic,readonly) NSArray * homeKitObjects; 
@property (nonatomic,readonly) long long homeCount; 
@property (nonatomic,readonly) NSString * primaryHomeName; 
@property (nonatomic,readonly) NSUUID * primaryHomeUUID; 
@property (nonatomic,readonly) NSString * currentHomeName; 
@property (nonatomic,readonly) NSUUID * currentHomeUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHomeManager *)manager;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setManager:(HMDHomeManager *)arg1 ;
-(NSString *)currentHomeName;
-(NSArray *)homeKitObjects;
-(NSUUID *)currentHomeUUID;
-(NSString *)primaryHomeName;
-(NSUUID *)primaryHomeUUID;
-(long long)homeCount;
-(void)getSyncEntityObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)gatherHomeKitObjectsWithCompletion:(/*^block*/id)arg1 ;
-(id)_getPrimaryHome;
-(id)_getCurrentHome;
-(void)setCurrentHomekitObjects:(NSArray *)arg1 ;
-(NSArray *)currentHomekitObjects;
-(id)initWithHomeManager:(id)arg1 queue:(id)arg2 ;
@end

