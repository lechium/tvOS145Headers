/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_nw_path_evaluator;
@class NSObject, NSHashTable, SiriCoreWiFiManagerClient, NSNumber;

@interface SiriCoreNetworkManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	int _pathStatus;
	BOOL _pathUsesCellular;
	SiriCoreWiFiManagerClient* _wiFiManagerClient;
	BOOL _hasSymptomsBasedInstantCellQuality;
	BOOL _symptomsBasedInstantCellQualityIsGood;
	BOOL _hasSymptomsBasedInstantWiFiQuality;
	BOOL _symptomsBasedInstantWiFiQualityIsGood;
	BOOL _hasSymptomsBasedHistoricalCellQuality;
	BOOL _symptomsBasedHistoricalCellQualityIsGood;
	BOOL _hasSymptomsBasedHistoricalWiFiQuality;
	BOOL _symptomsBasedHistoricalWiFiQualityIsGood;
	BOOL _lastFetchInProgress;
	double _lastSuccessfulSymptomsFetch;
	NSNumber* _lastSignalStrength;
	unsigned long long _subscriptionCount;

}
+(id)sharedInstance;
+(long long)connectionSubTypeForCellularInterface;
+(void)_ifnameTypeForName:(char*)arg1 isWiFi:(BOOL*)arg2 isCellular:(BOOL*)arg3 ;
+(void)getCarrierName:(id*)arg1 signalStrength:(id*)arg2 subscriptionCount:(id*)arg3 ;
+(id)connectionTypeForInterfaceName:(id)arg1 isCellular:(BOOL)arg2 ;
+(long long)connectionTypeForInterface:(id)arg1 ;
+(void)acquireDormancySuspendAssertion:(const void*)arg1 ;
+(void)releaseDormancySuspendAssertion:(void*)arg1 ;
-(void)dealloc;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_stopMonitoringNetwork;
-(void)_pathUpdated:(id)arg1 ;
-(void)_getNetworkPerformanceFeed;
-(long long)_reportCellularInstantQuality;
-(long long)_reportCellularHistoricalQuality;
-(long long)_reportWiFiInstantQuality;
-(long long)_reportWiFiHistoricalQuality;
-(void)getSignalStrength:(id*)arg1 subscriptionCount:(unsigned long long*)arg2 ;
-(void)releaseWiFiAssertion;
-(id)_wiFiManagerClient;
-(void)acquireWiFiAssertion:(long long)arg1 ;
-(void)startMonitoringNetworkForHost:(id)arg1 ;
-(void)stopMonitoringNetwork;
-(void)getNetworkPerformanceFeed;
-(long long)cellularNetworkQuality;
-(long long)wifiNetworkQuality;
-(long long)anyNetworkQuality;
-(void)getQualityReport:(/*^block*/id)arg1 ;
-(void)forceFastDormancy;
-(BOOL)_defaultBTLinkRecommendation;
-(BOOL)_defaultWiFiLinkRecommendation;
-(BOOL)_getConnectionSuccessRate:(id)arg1 hasMetric:(BOOL*)arg2 ;
@end

