/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HMIPersonManager.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIHomePersonManagerSettings, NSOperationQueue, HMFTimer, HMFUnfairLock, NSMutableDictionary, NSString;

@interface HMIHomePersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging> {

	id<HMIHomePersonManagerDataSource> _dataSource;
	HMIHomePersonManagerSettings* _settings;
	NSOperationQueue* _operationQueue;
	HMFTimer* _watchdogTimer;
	HMFTimer* _analyticsTimer;
	HMFUnfairLock* _lock;
	NSMutableDictionary* _unknownFacesSavedCounts;

}

@property (readonly) NSOperationQueue * operationQueue;                                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) HMFTimer * watchdogTimer;                                                  //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (readonly) HMFTimer * analyticsTimer;                                                 //@synthesize analyticsTimer=_analyticsTimer - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (readonly) NSMutableDictionary * unknownFacesSavedCounts;                             //@synthesize unknownFacesSavedCounts=_unknownFacesSavedCounts - In the implementation block
@property (readonly) HMIHomePersonManagerSettings * settings;                                   //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMFUnfairLock *)lock;
-(NSOperationQueue *)operationQueue;
-(HMIHomePersonManagerSettings *)settings;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(void)setDataSource:(id<HMIHomePersonManagerDataSource>)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)handleUpdatedPerson:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 ;
-(void)handleUpdatedFaceprint:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 ;
-(void)handleUpdatedSettings:(id)arg1 ;
-(id)initWithUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg1 ;
-(void)handleMisclassifiedPersonForFaceCrop:(id)arg1 ;
-(void)_updateSettings:(id)arg1 ;
-(HMFTimer *)watchdogTimer;
-(NSMutableDictionary *)unknownFacesSavedCounts;
-(void)storeUnassociatedFaceCrop:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeFaceprint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMFTimer *)analyticsTimer;
-(void)handleNewFaceEvents:(id)arg1 ;
@end

