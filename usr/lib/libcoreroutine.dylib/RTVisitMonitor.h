/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTVisitMonitorDelegate, OS_dispatch_queue;
@class RTVisitFeedBuffer, RTTimer, RTDefaultsManager, RTDeviceLocationPredictor, RTHintManager, RTLocationAwarenessManager, RTLocationManager, RTMetricManager, RTPlatform, RTTimerManager, RTVisitLabeler, RTVisitMonitorState, NSObject, NSMutableSet, NSMutableDictionary;

@interface RTVisitMonitor : NSObject {

	RTVisitFeedBuffer* _feedBuffer;
	RTTimer* _feedBufferTimer;
	BOOL _monitoringVisitIncidents;
	BOOL _monitoringLeechedVisitIncidents;
	BOOL _monitoringLowConfidenceVisitIncidents;
	id<RTVisitMonitorDelegate> _delegate;
	RTDefaultsManager* _defaultsManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTHintManager* _hintManager;
	RTLocationAwarenessManager* _locationAwarenessManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTPlatform* _platform;
	RTTimerManager* _timerManager;
	RTVisitLabeler* _visitLabeler;
	RTVisitMonitorState* _state;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _feedBufferReferenceCounter;
	unsigned long long _lowConfidencePipelineReferenceCounter;
	unsigned long long _highConfidencePipelineReferenceCounter;
	NSMutableSet* _pipelinesMonitoringRegion;
	NSMutableDictionary* _pipelines;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;                    //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                            //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLocationAwarenessManager * locationAwarenessManager;                  //@synthesize locationAwarenessManager=_locationAwarenessManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                        //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                  //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                                          //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) RTVisitLabeler * visitLabeler;                                          //@synthesize visitLabeler=_visitLabeler - In the implementation block
@property (nonatomic,retain) RTVisitMonitorState * state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long feedBufferReferenceCounter;                          //@synthesize feedBufferReferenceCounter=_feedBufferReferenceCounter - In the implementation block
@property (assign,nonatomic) unsigned long long lowConfidencePipelineReferenceCounter;               //@synthesize lowConfidencePipelineReferenceCounter=_lowConfidencePipelineReferenceCounter - In the implementation block
@property (assign,nonatomic) unsigned long long highConfidencePipelineReferenceCounter;              //@synthesize highConfidencePipelineReferenceCounter=_highConfidencePipelineReferenceCounter - In the implementation block
@property (nonatomic,retain) NSMutableSet * pipelinesMonitoringRegion;                               //@synthesize pipelinesMonitoringRegion=_pipelinesMonitoringRegion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pipelines;                                        //@synthesize pipelines=_pipelines - In the implementation block
@property (assign,nonatomic) BOOL monitoringVisitIncidents;                                          //@synthesize monitoringVisitIncidents=_monitoringVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLeechedVisitIncidents;                                   //@synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLowConfidenceVisitIncidents;                             //@synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents - In the implementation block
@property (assign,nonatomic,__weak) id<RTVisitMonitorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
+(id)hyperParameterForPipelineType:(unsigned long long)arg1 ;
+(id)regionMonitoringClientIdentifierForPipelineType:(unsigned long long)arg1 ;
+(long long)hintSourceForRegionCallbackType:(long long)arg1 ;
+(id)bucketLocations:(id)arg1 interval:(double)arg2 ;
+(double)LocationHeartbeatWhileAwake;
+(id)regionWithRegionIdentifier:(id)arg1 location:(id)arg2 shouldNotifyForEntry:(BOOL)arg3 ;
-(id)init;
-(id<RTVisitMonitorDelegate>)delegate;
-(void)setDelegate:(id<RTVisitMonitorDelegate>)arg1 ;
-(RTVisitMonitorState *)state;
-(void)setState:(RTVisitMonitorState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)_shutdown;
-(RTTimerManager *)timerManager;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(void)setPipelines:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pipelines;
-(RTDefaultsManager *)defaultsManager;
-(RTMetricManager *)metricManager;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(RTHintManager *)hintManager;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithDefaultsManager:(id)arg1 deviceLocationPredictor:(id)arg2 hintManager:(id)arg3 locationAwarenessManager:(id)arg4 locationManager:(id)arg5 metricManager:(id)arg6 platform:(id)arg7 queue:(id)arg8 state:(id)arg9 timerManager:(id)arg10 visitLabeler:(id)arg11 ;
-(RTLocationAwarenessManager *)locationAwarenessManager;
-(void)_startFeedBuffer;
-(void)_stopFeedBuffer;
-(id)_configurationForPipelineType:(unsigned long long)arg1 ;
-(id)_moduleWithName:(id)arg1 pipelineType:(unsigned long long)arg2 hyperParameter:(id)arg3 ;
-(double)maxHorizontalAccuracyOverride;
-(id)_modulesForPipelineType:(unsigned long long)arg1 hyperParameter:(id)arg2 ;
-(id)_createPipelineWithType:(unsigned long long)arg1 name:(id)arg2 lastVisit:(id)arg3 ;
-(void)_bootstrapPipeline:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)handleRegionCallback:(long long)arg1 region:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_processRealtimeVisits:(id)arg1 pipeline:(id)arg2 ;
-(void)_batchProcess:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 handler:(/*^block*/id)arg4 ;
-(unsigned long long)visitPipelineTypeOverride;
-(void)_setupRealtimePipelineWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopMonitoringAllRegionsForPipelineType:(unsigned long long)arg1 ;
-(unsigned long long)highConfidencePipelineReferenceCounter;
-(void)setHighConfidencePipelineReferenceCounter:(unsigned long long)arg1 ;
-(unsigned long long)feedBufferReferenceCounter;
-(void)setFeedBufferReferenceCounter:(unsigned long long)arg1 ;
-(unsigned long long)lowConfidencePipelineReferenceCounter;
-(void)setLowConfidencePipelineReferenceCounter:(unsigned long long)arg1 ;
-(void)setMonitoringVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLeechedVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLowConfidenceVisitIncidents:(BOOL)arg1 ;
-(void)onLeechedLocationsNotification:(id)arg1 ;
-(void)_processLeechedLocations:(id)arg1 ;
-(void)_processMatureLocations;
-(void)_startFeedBufferTimer;
-(BOOL)_setupGeoFencesForVisit:(id)arg1 pipelineType:(unsigned long long)arg2 error:(id*)arg3 ;
-(RTVisitLabeler *)visitLabeler;
-(void)handleVisitIncident:(id)arg1 ;
-(void)logHintSourceUsageWithLocation:(id)arg1 ;
-(void)handleLowConfidenceVisitIncident:(id)arg1 ;
-(BOOL)monitoringVisitIncidents;
-(BOOL)monitoringLeechedVisitIncidents;
-(BOOL)monitoringLowConfidenceVisitIncidents;
-(id)initWithDefaultsManager:(id)arg1 deviceLocationPredictor:(id)arg2 hintManager:(id)arg3 locationAwarenessManager:(id)arg4 locationManager:(id)arg5 metricManager:(id)arg6 platform:(id)arg7 queue:(id)arg8 state:(id)arg9 visitLabeler:(id)arg10 ;
-(void)shutdownWithHandler:(/*^block*/id)arg1 ;
-(void)_registerVisitMonitorForRegionEventsForPipelineType:(unsigned long long)arg1 ;
-(void)_unregisterVisitMonitorForRegionEventsForPipelineType:(unsigned long long)arg1 ;
-(void)startMonitoringVisitIncidents;
-(void)stopMonitoringVisitIncidents;
-(void)startMonitoringLeechedVisitIncidents;
-(void)stopMonitoringLeechedVisitIncidents;
-(void)startMonitoringLowConfidenceVisitIncidents;
-(void)stopMonitoringLowConfidenceVisitIncidents;
-(void)setupGeoFencesForVisit:(id)arg1 pipelineType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchVisitMonitorStatusWithHandler:(/*^block*/id)arg1 ;
-(void)fetchVisitMonitorState:(/*^block*/id)arg1 ;
-(void)setLocationAwarenessManager:(RTLocationAwarenessManager *)arg1 ;
-(void)setVisitLabeler:(RTVisitLabeler *)arg1 ;
-(NSMutableSet *)pipelinesMonitoringRegion;
-(void)setPipelinesMonitoringRegion:(NSMutableSet *)arg1 ;
@end

