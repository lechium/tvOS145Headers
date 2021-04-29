/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceFiltersManagerDelegate.h>
#import <libobjc.A.dylib/GEODataStateCapturing.h>
#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_dispatch_source, NSObject;
@class GEOActiveTileGroup, GEOResourceManifestDownloadTask, NSObject, NSOperationQueue, GEOResourceManifestConfiguration, GEOResourceManifestDownload, NSString, NSError, NSMutableArray, GEOResourceFiltersManager, NSArray, _GEOResourceManifestServerLocalProxyMigrationState, NSProgress;

@interface GEOResourceManifestServerLocalProxy : NSObject <GEOResourceFiltersManagerDelegate, GEODataStateCapturing, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOConfigChangeListenerDelegate, GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	GEOResourceManifestDownloadTask* _manifestDownloadTask;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSOperationQueue* _workOperationQueue;
	GEOResourceManifestConfiguration* _configuration;
	BOOL _wantsManifestUpdateOnReachabilityChange;
	NSObject*<OS_dispatch_source> _manifestUpdateTimer;
	BOOL _wantsTileGroupUpdateOnReachabilityChange;
	NSObject*<OS_dispatch_source> _tileGroupUpdateTimer;
	GEOResourceManifestDownload* _resourceManifest;
	GEOActiveTileGroup* _activeTileGroup;
	id<NSObject> _newActiveTileGroupTransaction;
	BOOL _started;
	unsigned long long _manifestRetryCount;
	double _lastManifestRetryTimestamp;
	unsigned long long _tileGroupRetryCount;
	double _lastTileGroupRetryTimestamp;
	NSString* _authToken;
	os_unfair_lock_s _authTokenLock;
	NSError* _lastResourceManifestLoadError;
	NSMutableArray* _manifestUpdateCompletionHandlers;
	NSMutableArray* _opportunisticManifestUpdateCompletionHandlers;
	long long _currentManifestUpdateType;
	GEOResourceFiltersManager* _filtersManager;
	NSArray* _tileGroupMigrators;
	unsigned long long _stateCaptureHandle;
	_GEOResourceManifestServerLocalProxyMigrationState* _tileGroupMigrationState;
	NSProgress* _updateProgress;
	NSProgress* _currentUpdateProgress;

}

@property (nonatomic,retain) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(id)configuration;
-(id)updateProgress;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_GE84*)arg1 ;
-(id)authToken;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(void)filtersManagerDidChangeActiveFilters:(id)arg1 ;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)openConnection;
-(void)closeConnection;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)resetActiveTileGroup;
-(void)_createMigrators;
-(void)_loadFromDisk;
-(void)_cancelManifestUpdate;
-(void)_cancelMigrationTasks;
-(void)_startServer;
-(void)_networkDefaultsDidChange:(id)arg1 ;
-(void)_terminationRequested:(id)arg1 ;
-(BOOL)_updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(void)_scheduleUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_considerChangingActiveTileGroup;
-(void)_manifestURLDidChange:(id)arg1 ;
-(void)_activeTileGroupOverridesChanged:(id)arg1 ;
-(void)setActiveTileGroup:(GEOActiveTileGroup *)arg1 ;
-(BOOL)_writeActiveTileGroupToDisk:(id)arg1 error:(id*)arg2 ;
-(void)_notifyManifestUpdateCompletionHandlers:(id)arg1 ;
-(id)_idealTileGroupToUse;
-(void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ;
-(void)_tileGroupTimerFired;
-(id)migrationTaskOptions;
-(void)_notifyImmediateManifestUpdateCompletionHandlers:(id)arg1 ;
-(void)_startOpportunisticMigrationToTileGroup:(id)arg1 inResourceManifest:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4 dataSet:(id)arg5 ;
-(void)_notifyOpportunisticManifestUpdateCompletionHandlers:(id)arg1 ;
-(void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 dataSet:(id)arg4 migrationTasks:(id)arg5 flushTileCache:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_addOpportunisticManifestUpdateCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setCurrentUpdateType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_updateManifest;
-(id)_manifestURL;
-(void)_updateManifest:(/*^block*/id)arg1 ;
-(void)_addManifestUpdateCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleManifestUpdateError:(id)arg1 ;
-(BOOL)_writeManifestToDiskWithUpdatedMetadataForURL:(id)arg1 eTag:(id)arg2 error:(id*)arg3 ;
-(void)_changeActiveTileGroupIfNeededForManifestURL:(id)arg1 oldURL:(id)arg2 ;
-(void)_updateTimerFired;
-(BOOL)_writeManifestToDisk:(id)arg1 error:(id*)arg2 ;
-(void)_resetCurrentUpdateState;
-(id)captureStateDataWithHints:(os_state_hints_s*)arg1 ;
-(void)performOpportunisticResourceLoading;
-(id)serverOperationQueue;
@end

