/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>
#import <libobjc.A.dylib/MPServerObjectDatabaseObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSMutableDictionary, MPCPlaybackEngine, NSString;

@interface _MPCFairPlayPerformanceController : NSObject <MPCPlaybackEngineEventObserving, MPServerObjectDatabaseObserver> {

	NSMutableSet* _SAPSignPrewarmingAccounts;
	NSMutableSet* _SAPSignPrewarmedAccounts;
	NSObject*<OS_dispatch_queue> _miniQueue;
	NSMutableSet* _miniSINFEndpointLoadingAccounts;
	NSMutableDictionary* _miniSINFAccounts;
	BOOL _scheduledMiniSINFs;
	MPCPlaybackEngine* _playbackEngine;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)database:(id)arg1 didFinishImportRequest:(id)arg2 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2 ;
-(void)_prewarmSAPSigningForAccount:(id)arg1 ;
-(void)_optimisticallyFetchLeaseForAccount:(id)arg1 ;
-(void)_prewarmMiniSINFEndpointForAccount:(id)arg1 ;
-(void)scheduleMiniSINFFetch;
-(void)_fetchMiniSINFsWithCompletion:(/*^block*/id)arg1 ;
@end

