/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBLocalZoneModelObserver.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDataSource.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDelegate.h>
#import <libobjc.A.dylib/HMDUserActionPredictionDataSource.h>

@protocol HMFLocking, OS_dispatch_queue, HMDUserActionPredictionDataReceiver;
@class HMBLocalZone, NSObject, HMDUserActionPredictionContainer, HMDDatabaseZoneManager, NSUUID, NSString;

@interface HMDUserActionPredictionManager : HMFObject <HMBLocalZoneModelObserver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDUserActionPredictionDataSource> {

	id<HMFLocking> _lock;
	HMBLocalZone* _localZone;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDUserActionPredictionDataReceiver> _dataReceiver;
	HMDUserActionPredictionContainer* _predictionContainer;
	HMDDatabaseZoneManager* _zoneManager;
	NSUUID* _UUID;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) id<HMDUserActionPredictionDataReceiver> dataReceiver;                                                                     //@synthesize dataReceiver=_dataReceiver - In the implementation block
@property (readonly) HMDUserActionPredictionContainer * predictionContainer;                                                                   //@synthesize predictionContainer=_predictionContainer - In the implementation block
@property (retain) HMBLocalZone * localZone;                                                                                                   //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMDDatabaseZoneManager * zoneManager;                                                                                     //@synthesize zoneManager=_zoneManager - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                                                                       //@synthesize UUID=_UUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDataAvailableForUserActionPredictionDataSource,readonly) BOOL dataAvailableForUserActionPredictionDataSource; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)UUID;
-(id)initWithHome:(id)arg1 ;
-(id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataReceiver:(id)arg3 workQueue:(id)arg4 ;
-(id<HMDUserActionPredictionDataReceiver>)dataReceiver;
-(HMDDatabaseZoneManager *)zoneManager;
-(void)handleAccessoryRemovedNotification:(id)arg1 ;
-(void)handleActionSetEmptiedNotification:(id)arg1 ;
-(void)handleServiceRemovedNotification:(id)arg1 ;
-(void)handleServiceGroupRemovedNotification:(id)arg1 ;
-(void)handleServiceGroupUpdatedNotification:(id)arg1 ;
-(void)handleMediaSystemAddedNotification:(id)arg1 ;
-(void)handleMediaSystemRemovedNotification:(id)arg1 ;
-(void)_removePredictionsWithPredictionTargetUUID:(id)arg1 ;
-(void)_removePredictionsWithTargetServiceUUID:(id)arg1 ;
-(void)_removeServiceGroupFromPredictions:(id)arg1 ;
-(void)_updatePredictionsWithServiceGroup:(id)arg1 ;
-(void)_updatePredictionsWithMediaSystem:(id)arg1 ;
-(void)_removeMediaSystemFromPredictions:(id)arg1 ;
-(BOOL)isDataAvailableForUserActionPredictionDataSource;
-(HMDUserActionPredictionContainer *)predictionContainer;
-(id)_addOrUpdateUserActionPredictions:(id)arg1 ;
-(id)_addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)arg1 ;
-(id)_removeUserActionPredictions:(id)arg1 ;
-(id)_removeZones;
-(HMBLocalZone *)localZone;
-(void)_handleCreatedOrUpdatedModel:(id)arg1 ;
-(void)_handleDeletedModel:(id)arg1 ;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(id)localZone:(id)arg1 didProcessModelCreation:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2 ;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(void)zoneManagerDidStart:(id)arg1 ;
-(void)zoneManagerDidStop:(id)arg1 ;
-(id)fetchPredictionsWithLimitForUserActionPredictionDataSource:(unsigned long long)arg1 ;
-(id)addOrUpdateUserActionPredictions:(id)arg1 ;
-(id)addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)arg1 ;
-(id)removeUserActionPredictions:(id)arg1 ;
-(void)configureWithHome:(id)arg1 notificationCenter:(id)arg2 ;
-(void)encodePredictionsWithCoder:(id)arg1 ;
-(void)removeZones;
@end

