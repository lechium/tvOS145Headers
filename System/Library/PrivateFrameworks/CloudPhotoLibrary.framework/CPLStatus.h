/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CPLStatusDelegate;
@class NSURL, NSMutableDictionary, NSObject, NSDate, NSData, NSArray, NSDictionary, CPLAccountFlags;

@interface CPLStatus : NSObject {

	BOOL _forCPL;
	NSURL* _statusFileURL;
	NSMutableDictionary* _status;
	NSObject*<OS_dispatch_queue> _lock;
	id<CPLStatusDelegate> _delegate;

}

@property (nonatomic,copy) NSDate * lastCompletePrefetchDate; 
@property (nonatomic,copy) NSDate * lastPruneDate; 
@property (assign,nonatomic) BOOL hasChangesToProcess; 
@property (assign,nonatomic) BOOL iCloudLibraryClientVersionTooOld; 
@property (nonatomic,copy) NSDate * lastSuccessfulSyncDate; 
@property (nonatomic,copy) NSDate * initialSyncDate; 
@property (assign,nonatomic) BOOL isExceedingQuota; 
@property (nonatomic,copy) NSDate * exitDeleteTime; 
@property (assign,nonatomic) BOOL iCloudLibraryHasBeenWiped; 
@property (assign,nonatomic) BOOL iCloudLibraryExists; 
@property (nonatomic,copy) NSData * accountFlagsData; 
@property (nonatomic,readonly) NSDate * cloudAssetCountPerTypeLastCheckDate; 
@property (assign,nonatomic) BOOL lowDiskSpace; 
@property (nonatomic,copy) NSArray * disabledFeatures; 
@property (nonatomic,readonly) BOOL hasValidSystemBudget; 
@property (nonatomic,readonly) BOOL hasCellularBudget; 
@property (nonatomic,readonly) BOOL hasBatteryBudget; 
@property (nonatomic,readonly) NSDictionary * cloudAssetCountPerType; 
@property (nonatomic,readonly) CPLAccountFlags * accountFlags; 
@property (getter=isConnectedToNetwork,nonatomic,readonly) BOOL connectedToNetwork; 
@property (getter=isCellularRestricted,nonatomic,readonly) BOOL cellularRestricted; 
@property (getter=isInAirplaneMode,nonatomic,readonly) BOOL inAirplaneMode; 
@property (nonatomic,readonly) BOOL isConstrainedNetwork; 
@property (assign,nonatomic,__weak) id<CPLStatusDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(id<CPLStatusDelegate>)delegate;
-(void)setDelegate:(id<CPLStatusDelegate>)arg1 ;
-(NSArray *)disabledFeatures;
-(BOOL)isCellularRestricted;
-(BOOL)isInAirplaneMode;
-(id)statusDescription;
-(CPLAccountFlags *)accountFlags;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(id)initWithClientLibraryBaseURLForCPLEngine:(id)arg1 ;
-(void)_loadIfNecessary;
-(void)_save;
-(BOOL)_writeInitialSyncMarkerForDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeInitialSyncMarker:(id*)arg1 ;
-(BOOL)_deleteInitialSyncMarkerWithError:(id*)arg1 ;
-(void)checkInitialSyncMarker;
-(void)refetchFromDisk;
-(NSDate *)lastSuccessfulSyncDate;
-(void)setLastSuccessfulSyncDate:(NSDate *)arg1 ;
-(NSDate *)lastCompletePrefetchDate;
-(void)setLastCompletePrefetchDate:(NSDate *)arg1 ;
-(NSDate *)lastPruneDate;
-(void)setLastPruneDate:(NSDate *)arg1 ;
-(NSDate *)initialSyncDate;
-(void)setInitialSyncDate:(NSDate *)arg1 ;
-(BOOL)hasChangesToProcess;
-(void)setHasChangesToProcess:(BOOL)arg1 ;
-(BOOL)isExceedingQuota;
-(void)setIsExceedingQuota:(BOOL)arg1 ;
-(NSDate *)exitDeleteTime;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(BOOL)iCloudLibraryHasBeenWiped;
-(void)setICloudLibraryHasBeenWiped:(BOOL)arg1 ;
-(BOOL)iCloudLibraryExists;
-(void)setICloudLibraryExists:(BOOL)arg1 ;
-(BOOL)iCloudLibraryClientVersionTooOld;
-(void)setICloudLibraryClientVersionTooOld:(BOOL)arg1 ;
-(NSDictionary *)cloudAssetCountPerType;
-(void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(BOOL)arg2 ;
-(NSDate *)cloudAssetCountPerTypeLastCheckDate;
-(void)_statusDidChange;
-(void)setHasCellularBudget:(BOOL)arg1 hasBatteryBudget:(BOOL)arg2 isConstrainedNetwork:(BOOL)arg3 isBudgetValid:(BOOL)arg4 ;
-(BOOL)hasValidSystemBudget;
-(BOOL)hasCellularBudget;
-(BOOL)hasBatteryBudget;
-(BOOL)isConnectedToNetwork;
-(BOOL)isConstrainedNetwork;
-(void)setConnectedToNetwork:(BOOL)arg1 cellularIsRestricted:(BOOL)arg2 inAirplaneMode:(BOOL)arg3 ;
-(BOOL)lowDiskSpace;
-(void)setLowDiskSpace:(BOOL)arg1 ;
-(NSData *)accountFlagsData;
-(void)setAccountFlagsData:(NSData *)arg1 ;
-(void)setDisabledFeatures:(NSArray *)arg1 ;
@end

