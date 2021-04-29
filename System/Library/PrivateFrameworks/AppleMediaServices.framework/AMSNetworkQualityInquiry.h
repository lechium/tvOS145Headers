/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, AMSPromise, NWNetworkOfInterestManager, NSObject, NSMutableSet, NSMutableArray;

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {

	NSArray* _lastKnownReports;
	long long _lastReportRefreshTimestamp;
	AMSPromise* _currentInvestigation;
	NWNetworkOfInterestManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _knownNetworks;
	NSMutableArray* _knownNetworksReadyHandlers;

}

@property (nonatomic,readonly) NWNetworkOfInterestManager * manager;                   //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * knownNetworks;                           //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * knownNetworksReadyHandlers;              //@synthesize knownNetworksReadyHandlers=_knownNetworksReadyHandlers - In the implementation block
+(id)sharedInstance;
+(BOOL)isEntitled;
+(id)reportForTask:(id)arg1 fromReports:(id)arg2 ;
+(id)lastConnectionReport;
+(void)updateLastConnectionReportWithTask:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NWNetworkOfInterestManager *)manager;
-(NSMutableSet *)knownNetworks;
-(BOOL)areKnownNetworksReady;
-(NSMutableArray *)knownNetworksReadyHandlers;
-(void)setKnownNetworksReadyHandlers:(NSMutableArray *)arg1 ;
-(void)drainKnownNetworksReadyHandlers;
-(void)didStopTrackingNOI:(id)arg1 ;
-(void)performWhenKnownNetworksReady:(/*^block*/id)arg1 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
-(id)investigateNetworks;
@end

