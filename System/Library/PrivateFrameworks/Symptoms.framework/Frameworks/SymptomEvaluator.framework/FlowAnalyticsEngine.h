/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>
#import <libobjc.A.dylib/ProxyAnalyticsDelegate.h>
#import <libobjc.A.dylib/NWUsageManagerDelegate.h>
#import <libobjc.A.dylib/CellThroughputAdviserDelegate.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@protocol OS_dispatch_source;
@class UsageAnalytics, ProcessAnalytics, AppAnalytics, ObjectAnalytics, NSMutableDictionary, NWUsageManager, NSDate, NWUsageTargetSelector, NSString, NSObject, CellThroughputAdviser, NSDictionary, RepeatedConnFailureDetector, CoreTelephonyShim, CellularStateRelay, NetworkAnalyticsStateRelay, ProxyAnalytics;

@interface FlowAnalyticsEngine : AnalyticsEngineCore <ProxyAnalyticsDelegate, NWUsageManagerDelegate, CellThroughputAdviserDelegate, ManagedEventInfoProtocol> {

	UsageAnalytics* uspace;
	ProcessAnalytics* pspace;
	AppAnalytics* aspace;
	ObjectAnalytics* calspace;
	NSMutableDictionary* processCache;
	NSMutableDictionary* appState;
	NSMutableDictionary* appCompactState;
	BOOL trackingRequiredForBaseband;
	NSMutableDictionary* pluginToBundleCache;
	NSMutableDictionary* audioBundleCache;
	NWUsageManager* nstatUsageManager;
	BOOL nstatUsageManagerConfigured;
	int cellularInterfaceIndex;
	NSDate* lastCellularThresholdRefreshTime;
	NWUsageTargetSelector* cellThresholdTargetSelector;
	NWUsageTargetSelector* cellRNFPeriodEndTargetSelector;
	NSString* networkUsageTraceFileRootName;
	int networkUsageTraceFileFD;
	unsigned long long logStateHandle;
	NSObject*<OS_dispatch_source> siginfo;
	unsigned pdpBitmap;
	/*^block*/id dataUsageRefreshCompletionBlock;
	int dataUsageRefreshCompletionNumWaiting;
	NSDate* lastFullRefreshTime;
	id tetherObserver;
	BOOL isTetherActive;
	id appStateChangeObserver;
	id cellTCCapabilityObserver;
	id transferSizeObserver;
	id assetDownloadObserver;
	id cellThroughputAdvisoryReqObserver;
	CellThroughputAdviser* cellThroughputAdviser;
	NSString* throughputAdviserTraceFileRootName;
	NSDictionary* throughputAdviserConfigurationParameters;
	NSObject*<OS_dispatch_source> throughputAdvicePollingTimer;
	NWUsageTargetSelector* throughputAdviceTargetSelector;
	double throughputAdvicePollingInterval;
	unsigned long long assetDownloadProcessId;
	RepeatedConnFailureDetector* repeatedConnFailureDetector;
	NSMutableDictionary* flowCache;
	NSMutableDictionary* flowInstant;
	id flowObserver;
	id relayReadyObserver;
	ObjectAnalytics* fspace;
	ObjectAnalytics* lfpspace;
	ObjectAnalytics* domspace;
	ObjectAnalytics* expspace;
	NSObject*<OS_dispatch_source> flushOldFlowRecordsTimer;
	BOOL isScreenDark;
	NSDate* screenDarkTimestamp;
	BOOL isScreenLocked;
	char _nrFrequencyBand;
	unsigned long long usageCoalescingSpanSecs;
	unsigned long long usageWindowUnitsCount;
	unsigned long long outcomeArrayLogEntryCount;
	BOOL flowCountExceededThreshold;
	BOOL thunderingHerdFlowCountExceededThreshold;
	NSMutableDictionary* estAwdMetricsDict;
	unsigned long long trackedFlowCountSincePrimaryInterfaceChanged;
	CoreTelephonyShim* ctShim;
	BOOL _haveCalendar;
	BOOL _haveTypicalUsage;
	BOOL _delegateToProxyAnalytics;
	NSMutableDictionary* _flowWatchers;
	CellularStateRelay* _cellRelay;
	NetworkAnalyticsStateRelay* _wifiRelay;
	NetworkAnalyticsStateRelay* _mostRecentPrimaryRelay;
	ProxyAnalytics* _proxyAnalytics;

}

@property (retain) CellularStateRelay * cellRelay;                                   //@synthesize cellRelay=_cellRelay - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * wifiRelay;                           //@synthesize wifiRelay=_wifiRelay - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * mostRecentPrimaryRelay;              //@synthesize mostRecentPrimaryRelay=_mostRecentPrimaryRelay - In the implementation block
@property (assign,nonatomic) BOOL delegateToProxyAnalytics;                          //@synthesize delegateToProxyAnalytics=_delegateToProxyAnalytics - In the implementation block
@property (nonatomic,retain) ProxyAnalytics * proxyAnalytics;                        //@synthesize proxyAnalytics=_proxyAnalytics - In the implementation block
@property (assign) BOOL haveCalendar;                                                //@synthesize haveCalendar=_haveCalendar - In the implementation block
@property (assign) BOOL haveTypicalUsage;                                            //@synthesize haveTypicalUsage=_haveTypicalUsage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * flowWatchers;                   //@synthesize flowWatchers=_flowWatchers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queue;
+(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
+(BOOL)hasAnyForegroundApp;
+(id)foregroundAppKeys;
+(id)_appBundleIdentifierFromBundleRecord:(id)arg1 ;
+(void)performAppPeriodicActivityWithReply:(/*^block*/id)arg1 ;
+(void)checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)endRNFPeriod;
+(void)refreshDataUsageFor:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)appsWithFlowsPassingTest:(/*^block*/id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)identifierForUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)appBundleIdentifierFromAuditToken:(SCD_Struct_Ev10)arg1 ;
+(id)appBundleIdentifierFromBundleIdentifier:(id)arg1 ;
+(void)performAppExperiencePeriodicActivityWithReply:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_dumpState;
-(id)setOption:(id)arg1 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)getOption:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(CellularStateRelay *)cellRelay;
-(NetworkAnalyticsStateRelay *)wifiRelay;
-(BOOL)_initializeLocalCache;
-(BOOL)delegateToProxyAnalytics;
-(ProxyAnalytics *)proxyAnalytics;
-(void)setProxyAnalytics:(ProxyAnalytics *)arg1 ;
-(void)_performAppPeriodicTasksWithReply:(/*^block*/id)arg1 ;
-(void)_changedForegroundState:(BOOL)arg1 forBundle:(id)arg2 ;
-(void)_startFlowMonitoring;
-(void)_updateTetheringUsage:(BOOL)arg1 ;
-(void)_newFlowData:(id)arg1 ;
-(void)_removeOldFlowRecords;
-(void)_newExpectedTransfer:(id)arg1 ;
-(void)_newCoreMediaAssetDownloadEvent:(id)arg1 ;
-(void)setHaveTypicalUsage:(BOOL)arg1 ;
-(void)setHaveCalendar:(BOOL)arg1 ;
-(void)_refreshFullDataUsage;
-(void)_didReceiveSnapshot:(id)arg1 ;
-(void)_refreshFullDataUsageComplete;
-(void)_logExcessCellUsage:(long long)arg1 snapshot:(id)arg2 ;
-(void)_generateFlowAnomalySymptom:(unsigned)arg1 currentUsage:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(void)_reportThresholdedFlowCount:(unsigned long long)arg1 threshold:(unsigned long long)arg2 ;
-(BOOL)_bundleBackgroundAudioCapable:(id)arg1 ;
-(void)_checkCellExcessUsageActions:(unsigned long long)arg1 previous:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(id)_fetchFromProcCacheWithName:(id)arg1 ;
-(id)_processFetchForName:(id)arg1 bundle:(id)arg2 shouldFillMiss:(BOOL)arg3 ;
-(id)_liveUsageFetchForProcess:(id)arg1 ;
-(void)_updateLiveUsage:(id)arg1 wifiIn:(long long)arg2 wifiOut:(long long)arg3 cellIn:(long long)arg4 cellOut:(long long)arg5 wiredIn:(long long)arg6 wiredOut:(long long)arg7 xIn:(long long)arg8 xOut:(long long)arg9 isJumboFlow:(BOOL)arg10 closing:(BOOL)arg11 ;
-(void)_stopMonitoringNetworkInterface:(int)arg1 ;
-(void)_startMonitoringNetworkInterface:(int)arg1 usingThreshold:(unsigned long long)arg2 ;
-(void)_handleSnapshot:(id)arg1 ;
-(void)_refreshDataUsageFor:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(double)_usageFingerprintForBundleName:(id)arg1 ;
-(void)_saveAndUnloadSelectState;
-(BOOL)haveCalendar;
-(void)_calendarUsageForApp:(id)arg1 givenLastRun:(id)arg2 ;
-(void)_compactUsageForApp:(id)arg1 intervalType:(int)arg2 givenLastRun:(id)arg3 ;
-(void)_refreshFullDataUsageWithCallback:(/*^block*/id)arg1 ;
-(BOOL)_hasAnyForegroundApp;
-(void)_handleApplicationNotificationStateChangedForBundleName:(id)arg1 edgeMode:(BOOL)arg2 intervalType:(int)arg3 ;
-(void)_handleApplicationNotificationCompactForBundleName:(id)arg1 edgeMode:(BOOL)arg2 ;
-(void)_generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_removeInfoFromWorkspaceForProcess:(id)arg1 ;
-(void)_removeFromProcCache:(id)arg1 ;
-(void)_insertProcCache:(id)arg1 underName:(id)arg2 ;
-(BOOL)_isLiveUsageinScope:(id)arg1 forTime:(id)arg2 ;
-(unsigned long long)_liveUsageCountForProcess:(id)arg1 subscriberTag:(id)arg2 ;
-(void)_liveUsagePackForProcess:(id)arg1 subscriberTag:(id)arg2 ;
-(BOOL)_isLiveUsageInRollingWindow:(id)arg1 forTime:(id)arg2 ;
-(void)_applyCountsTo:(id)arg1 fromLiveUsage:(id)arg2 mustReset:(BOOL)arg3 ;
-(unsigned long long)_clearUninstalledAppEntries;
-(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
-(void)_checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_endRNFPeriod;
-(id)_foregroundAppKeys;
-(void)_recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_attemptConvertingPluginNameToContainingAppName:(id)arg1 ;
-(void)_appsWithFlowsPassingTest:(/*^block*/id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)identifierForUUID:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_trafficEnvelopeToTier:(double)arg1 ;
-(unsigned long long)_pruneAppExperienceRecords;
-(void)_performAppExperiencePeriodicTasksWithReply:(/*^block*/id)arg1 ;
-(id)_flowFetchForName:(id)arg1 ;
-(BOOL)_isLiveFlowPerfinScope:(id)arg1 forTime:(id)arg2 andTag:(id)arg3 ;
-(id)_parseEvent:(id)arg1 withGeneration:(id*)arg2 ;
-(void)_pruneFlowHistory;
-(NSMutableDictionary *)flowWatchers;
-(void)_archiveRecord:(id)arg1 ;
-(BOOL)_handlesProcEntity:(id)arg1 ;
-(BOOL)_handlesFlowEntity:(id)arg1 ;
-(BOOL)_requiresUserValidationPredicateForEntity:(id)arg1 ;
-(void)logOutcomeArray:(id)arg1 ;
-(void)performThresholdingOn:(id)arg1 forKey:(id)arg2 andValue:(id)arg3 connection:(id)arg4 createdBlock:(/*^block*/id*)arg5 hitBlock:(/*^block*/id)arg6 errorBlock:(/*^block*/id)arg7 ;
-(int)_performQueryOnEntityFromProcCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(int)_performQueryOnEntityFromInstantFlowCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(BOOL)haveTypicalUsage;
-(void)_removeAllInfoForProcess:(id)arg1 withUUID:(id)arg2 ;
-(void)performAppPeriodicTasksComplete:(id)arg1 error:(id)arg2 ;
-(void)performAppExperiencePeriodicTasksComplete:(id)arg1 error:(id)arg2 ;
-(void)usageManager:(id)arg1 didReceiveSnapshot:(id)arg2 ;
-(void)usageManager:(id)arg1 thresholdReachedOn:(unsigned)arg2 ;
-(void)relayCellThroughputAdvice:(unsigned)arg1 at:(double)arg2 ;
-(void)relayAudioVideoStatus:(unsigned)arg1 rxThroughput:(double)arg2 txThroughput:(double)arg3 at:(double)arg4 reset:(BOOL)arg5 ;
-(void)sendPowerLogReport:(id)arg1 isStart:(BOOL)arg2 ;
-(void)postAWDMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(void)setPollingRate:(double)arg1 ;
-(void)setTimerCallbackWithDelay:(double)arg1 context:(id)arg2 ;
-(id)_has1stPartyImpliedBundleNameBehavior:(id)arg1 ;
-(BOOL)_processNameIsValid:(id)arg1 ;
-(id)_appExperienceForApp:(id)arg1 forTime:(id)arg2 ;
-(id)_fetchFromFlowCacheWithName:(id)arg1 ;
-(void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setCellRelay:(CellularStateRelay *)arg1 ;
-(void)setWifiRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(NetworkAnalyticsStateRelay *)mostRecentPrimaryRelay;
-(void)setMostRecentPrimaryRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(void)setDelegateToProxyAnalytics:(BOOL)arg1 ;
@end

