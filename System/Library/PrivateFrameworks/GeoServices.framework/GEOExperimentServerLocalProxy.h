/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>
#import <libobjc.A.dylib/GEOExperimentServerProxy.h>

@protocol GEOExperimentServerProxyDelegate;
@class GEOABAssignmentResponse, GEOABAssignmentRequest, GEOXPCActivity, NSString;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOPListStateCapturing, GEOExperimentServerProxy> {

	id<GEOExperimentServerProxyDelegate> _delegate;
	GEOABAssignmentResponse* _experimentsInfo;
	os_unfair_lock_s _experimentsInfoLock;
	GEOABAssignmentRequest* _currentRequest;
	os_unfair_lock_s _currentRequestLock;
	GEOXPCActivity* _activity;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOExperimentServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
+(void)cancelOldActivities;
-(void)dealloc;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(void)setDelegate:(id<GEOExperimentServerProxyDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)forceUpdate;
-(void)refreshDatasetABStatus:(id)arg1 ;
-(GEOABAssignmentResponse *)experimentsInfo;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)abAssignUUIDWithSyncCompletionHandler:(/*^block*/id)arg1 ;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1 ;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1 ;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1 ;
-(BOOL)_removeOldExperimentsInfoIfNecessary:(BOOL)arg1 ;
-(void)_setupRefreshActivity;
-(void)_updateIfNecessary;
-(void)_writeExperimentInfoToDisk:(id)arg1 ;
-(void)_executeRefreshWithinTime:(double)arg1 ;
-(void)_notifyExperimentsInfoChanged:(id)arg1 current:(id)arg2 ;
-(void)_loadExperimentsConfiguration:(/*^block*/id)arg1 ;
-(void)_deleteExperimentInfoFromDisk;
@end

