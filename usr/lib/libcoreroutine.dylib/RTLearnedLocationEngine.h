/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTPurgable.h>

@protocol RTLearnedLocationEngineProtocol, OS_dispatch_queue;
@class NSObject, RTAccountManager, RTLearnedLocationAlgorithmMetricCalculator, RTContactsManager, RTDefaultsManager, RTDiagnostics, RTEventManager, RTFingerprintManager, RTLearnedLocationStore, RTDistanceCalculator, RTLocationStore, RTLocationManager, RTMapServiceManager, RTMapsSupportManager, RTMetricManager, RTMotionActivityManager, RTPlatform, RTPersonalizationPortraitManager, RTLearnedLocationEngineTrainingMetrics, RTLearnedLocationReconcilerPerVisit, RTLearnedLocationReconcilerPerDevice, RTSettledStateTransitionStore, RTVisitManager, RTXPCActivityManager, NSString;

@interface RTLearnedLocationEngine : NSObject <RTPurgable> {

	BOOL _monitorFingerprints;
	id<RTLearnedLocationEngineProtocol> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	RTAccountManager* _accountManager;
	RTLearnedLocationAlgorithmMetricCalculator* _algorithmMetricCalculator;
	RTContactsManager* _contactsManager;
	RTDefaultsManager* _defaultsManager;
	RTDiagnostics* _diagnostics;
	RTEventManager* _eventManager;
	RTFingerprintManager* _fingerprintManager;
	RTLearnedLocationStore* _learnedLocationStore;
	RTDistanceCalculator* _distanceCalculator;
	RTLocationStore* _locationStore;
	RTLocationManager* _locationManager;
	RTMapServiceManager* _mapServiceManager;
	RTMapsSupportManager* _mapsSupportManager;
	RTMetricManager* _metricManager;
	RTMotionActivityManager* _motionActivityManager;
	RTPlatform* _platform;
	RTPersonalizationPortraitManager* _portraitManager;
	RTLearnedLocationEngineTrainingMetrics* _trainingMetrics;
	RTLearnedLocationReconcilerPerVisit* _reconcilerPerVisit;
	RTLearnedLocationReconcilerPerDevice* _reconcilerPerDevice;
	RTSettledStateTransitionStore* _settledStateTransitionStore;
	RTVisitManager* _visitManager;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTAccountManager * accountManager;                                                   //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationAlgorithmMetricCalculator * algorithmMetricCalculator;              //@synthesize algorithmMetricCalculator=_algorithmMetricCalculator - In the implementation block
@property (nonatomic,readonly) RTContactsManager * contactsManager;                                                 //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,readonly) RTDefaultsManager * defaultsManager;                                                 //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,readonly) RTDiagnostics * diagnostics;                                                         //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) RTEventManager * eventManager;                                                       //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,readonly) RTFingerprintManager * fingerprintManager;                                           //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationStore * learnedLocationStore;                                       //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;                                           //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,readonly) RTLocationStore * locationStore;                                                     //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;                                                 //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTMapServiceManager * mapServiceManager;                                             //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,readonly) RTMapsSupportManager * mapsSupportManager;                                           //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,readonly) RTMetricManager * metricManager;                                                     //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,readonly) RTMotionActivityManager * motionActivityManager;                                     //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,readonly) RTPlatform * platform;                                                               //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) RTPersonalizationPortraitManager * portraitManager;                                  //@synthesize portraitManager=_portraitManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationEngineTrainingMetrics * trainingMetrics;                              //@synthesize trainingMetrics=_trainingMetrics - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationReconcilerPerVisit * reconcilerPerVisit;                            //@synthesize reconcilerPerVisit=_reconcilerPerVisit - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationReconcilerPerDevice * reconcilerPerDevice;                          //@synthesize reconcilerPerDevice=_reconcilerPerDevice - In the implementation block
@property (nonatomic,readonly) RTSettledStateTransitionStore * settledStateTransitionStore;                         //@synthesize settledStateTransitionStore=_settledStateTransitionStore - In the implementation block
@property (nonatomic,readonly) RTVisitManager * visitManager;                                                       //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,readonly) RTXPCActivityManager * xpcActivityManager;                                           //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (assign,nonatomic) BOOL monitorFingerprints;                                                              //@synthesize monitorFingerprints=_monitorFingerprints - In the implementation block
@property (assign,nonatomic,__weak) id<RTLearnedLocationEngineProtocol> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<RTLearnedLocationEngineProtocol>)delegate;
-(void)setDelegate:(id<RTLearnedLocationEngineProtocol>)arg1 ;
-(void)_setup;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)shutdown;
-(RTPlatform *)platform;
-(void)setup;
-(RTLocationManager *)locationManager;
-(void)_registerForNotifications;
-(void)_shutdown;
-(RTDiagnostics *)diagnostics;
-(void)_unregisterForNotifications;
-(RTAccountManager *)accountManager;
-(RTEventManager *)eventManager;
-(RTLearnedLocationEngineTrainingMetrics *)trainingMetrics;
-(void)setTrainingMetrics:(RTLearnedLocationEngineTrainingMetrics *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(RTLearnedLocationStore *)learnedLocationStore;
-(RTMetricManager *)metricManager;
-(void)onVisitManagerNotification:(id)arg1 ;
-(void)_onVisitManagerNotification:(id)arg1 ;
-(RTVisitManager *)visitManager;
-(RTContactsManager *)contactsManager;
-(RTFingerprintManager *)fingerprintManager;
-(RTLocationStore *)locationStore;
-(RTMapServiceManager *)mapServiceManager;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithAccountManager:(id)arg1 algorithmMetricCalculator:(id)arg2 contactsManager:(id)arg3 defaultsManager:(id)arg4 diagnostics:(id)arg5 distanceCalculator:(id)arg6 eventManager:(id)arg7 fingerprintManager:(id)arg8 learnedLocationStore:(id)arg9 locationManager:(id)arg10 locationStore:(id)arg11 mapServiceManager:(id)arg12 mapsSupportManager:(id)arg13 metricManager:(id)arg14 motionActivityManager:(id)arg15 platform:(id)arg16 portraitManager:(id)arg17 reconcilerPerVisit:(id)arg18 reconcilerPerDevice:(id)arg19 settledStateTransitionStore:(id)arg20 visitManager:(id)arg21 xpcActivityManager:(id)arg22 ;
-(void)trainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(void)fetchFusionCandidatesForVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)queryMapItemProvider:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)trainWithHandler:(/*^block*/id)arg1 ;
-(void)_trainWithHandler:(/*^block*/id)arg1 ;
-(void)relabelWithHandler:(/*^block*/id)arg1 ;
-(void)reconcileLearnedLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)_reconcileLearnedLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)classifyPlaceTypesWithHandler:(/*^block*/id)arg1 ;
-(void)_classifyPlaceTypesWithHandler:(/*^block*/id)arg1 ;
-(void)requestTrainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RTXPCActivityManager *)xpcActivityManager;
-(RTMotionActivityManager *)motionActivityManager;
-(void)onContactsManagerNotification:(id)arg1 ;
-(RTMapsSupportManager *)mapsSupportManager;
-(void)onMapsSupportManagerNotification:(id)arg1 ;
-(void)_setupXpcActivityTrain;
-(void)_teardownXpcActivityTrain;
-(RTPersonalizationPortraitManager *)portraitManager;
-(id)_mapItemProviderForClass:(Class)arg1 error:(id*)arg2 ;
-(id)_enabledMapItemProviders;
-(id)_candidatesForVisit:(id)arg1 providers:(id)arg2 error:(id*)arg3 ;
-(id)_candidatesForInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)_bestFusedInferredMapItemForVisit:(id)arg1 fromCandidates:(id)arg2 error:(id*)arg3 ;
-(void)_submitMetricsForVisit:(id)arg1 possibleInferredMapItems:(id)arg2 selectedInferredMapItem:(id)arg3 ;
-(id)_bestInferredMapItemForVisit:(id)arg1 error:(id*)arg2 ;
-(id)_placeForMapItem:(id)arg1 error:(id*)arg2 ;
-(id)_updateLearnedPlaceWithISO3166CountryCodeAndSubdivisionCode:(id)arg1 ;
-(void)_harvestVisits:(id)arg1 places:(id)arg2 ;
-(id)_filterVisits:(id)arg1 lastLearnedVisit:(id)arg2 ;
-(id)_transitionsForVisits:(id)arg1 lastLearnedVisit:(id)arg2 creationDate:(id)arg3 ;
-(void)_updateUnlabeledVisitsWithPlaceInformation:(id)arg1 ;
-(void)submitVisitSettledStateMetricsForVisits:(id)arg1 transitions:(id)arg2 ;
-(id)_visitsFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_processVisits:(id)arg1 forLastLearnedVisit:(id)arg2 error:(id*)arg3 ;
-(BOOL)_deferTrainingDueToAvailability;
-(BOOL)_deferTrainingDueToRecentResetSync;
-(id)_lastVisitWithError:(id*)arg1 ;
-(void)_trainWithFromDate:(id)arg1 ToDate:(id)arg2 forLastLearnedVisit:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_setupTrainingMetricsFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)_logDatabasesWithReason:(id)arg1 ;
-(BOOL)_retrainVisitsWithoutPlaces:(id*)arg1 ;
-(BOOL)_trainVisitsFromDate:(id)arg1 toDate:(id)arg2 forLastLearnedVisit:(id)arg3 error:(id*)arg4 ;
-(BOOL)_trainLocationsOfInterestModelWithError:(id*)arg1 ;
-(BOOL)_removeUnusedMapItems:(id*)arg1 ;
-(void)_teardownTrainingMetrics;
-(BOOL)_deferTrainingLOIsDueToCloudStoreNotChangeSinceLastTrainingDate:(id)arg1 ;
-(void)willBeginTraining;
-(BOOL)_reconcileLearnedLocationsWithError:(id*)arg1 ;
-(void)didFinishTraining;
-(BOOL)_relabelWithError:(id*)arg1 ;
-(BOOL)_classifyPlaceTypes:(id*)arg1 ;
-(void)submitVisitMetrics;
-(BOOL)_consolidateKnownPlaceTypesWithError:(id*)arg1 ;
-(id)calculateMetricsToReplayOldHomeWorkInferenceAlgoWithStartDate:(id)arg1 endDate:(id)arg2 homeMapItem:(id)arg3 workMapItem:(id)arg4 locationsOfOthers:(id*)arg5 error:(id*)arg6 ;
-(void)calculateNewMetricsAndSubmitAlongWithTheOldMetrics:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 homeMapItem:(id)arg4 workMapItem:(id)arg5 distanceThresholdArray:(id)arg6 locationsOfOthers:(id)arg7 ;
-(void)_requestTrainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(id)_performPerVisitReconciliationWithError:(id*)arg1 ;
-(id)_performPerDeviceReconiliationWithError:(id*)arg1 ;
-(id)getNearbyCandidatesAroundLocation:(id)arg1 distance:(double)arg2 loiIdentifierToCoalescedSourceMap:(id)arg3 error:(id*)arg4 ;
-(id)extractCandidate:(id)arg1 fromNearbyCandidates:(id)arg2 extractedCandidate:(id*)arg3 error:(id*)arg4 ;
-(id)createRelabeler;
-(id)createRelabelerPersisterWithError:(id*)arg1 ;
-(BOOL)_relabelWithRelabeler:(id)arg1 relabelerPersister:(id)arg2 error:(id*)arg3 ;
-(id)getRelabeledInferredMapItemForCandidate:(id)arg1 relabeler:(id)arg2 loiIdentifierToCoalescedSourceMap:(id)arg3 submitMetrics:(BOOL)arg4 error:(id*)arg5 ;
-(void)_logLocalStoreWithReason:(id)arg1 ;
-(RTLearnedLocationAlgorithmMetricCalculator *)algorithmMetricCalculator;
-(void)_onContactsManagerNotification:(id)arg1 ;
-(void)_onMapsSupportManagerNotification:(id)arg1 ;
-(void)onFingerprintManagerNotification:(id)arg1 ;
-(void)_onFingerprintManagerNotification:(id)arg1 ;
-(void)_updateMonitorFingerprintsWithVisit:(id)arg1 ;
-(void)_fetchLatestVisitWithHandler:(/*^block*/id)arg1 ;
-(void)setMonitorFingerprints:(BOOL)arg1 ;
-(BOOL)_purgeWithReferenceDate:(id)arg1 error:(id*)arg2 ;
-(void)_logCloudStoreWithReason:(id)arg1 ;
-(void)_harvestFeedbackData;
-(BOOL)_isUpdateLearnedPlaceWithISO3166CountryCodeAndSubdivisionCodeRequired:(id)arg1 ;
-(RTLearnedLocationReconcilerPerVisit *)reconcilerPerVisit;
-(RTLearnedLocationReconcilerPerDevice *)reconcilerPerDevice;
-(RTSettledStateTransitionStore *)settledStateTransitionStore;
-(BOOL)monitorFingerprints;
@end

