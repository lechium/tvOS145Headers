/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;

}

@property (assign,getter=isMatchInfoEnabled,nonatomic) BOOL matchInfoEnabled; 
@property (assign,setter=_setGroundAltitudeEnabled:,getter=_isGroundAltitudeEnabled,nonatomic) BOOL _groundAltitudeEnabled; 
@property (assign,nonatomic) BOOL privateMode; 
@property (nonatomic,readonly) BOOL locationServicesAvailable; 
@property (nonatomic,readonly) BOOL locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) BOOL supportInfo; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,getter=isDynamicAccuracyReductionEnabled,nonatomic) BOOL dynamicAccuracyReductionEnabled; 
@property (assign,nonatomic) BOOL allowsAlteredAccessoryLocations; 
@property (nonatomic,readonly) BOOL _limitsPrecision; 
@property (nonatomic,readonly) int _authorizationStatus; 
@property (getter=isAuthorizedForPreciseLocation,nonatomic,readonly) BOOL authorizedForPreciseLocation; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) long long accuracyAuthorization; 
@property (getter=isAuthorizedForWidgetUpdates,nonatomic,readonly) BOOL authorizedForWidgetUpdates; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,readonly) BOOL locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) BOOL pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) BOOL allowsBackgroundLocationUpdates; 
@property (assign,nonatomic) BOOL showsBackgroundLocationIndicator; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,copy,readonly) NSSet * monitoredRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedBeaconConstraints; 
+(id)sharedManager;
+(int)authorizationStatus;
+(void)setLocationServicesEnabled:(BOOL)arg1 ;
+(id)setAuthorizationPromptMapDisplayEnabled:(BOOL)arg1 ;
+(BOOL)shutdownDaemon;
+(void)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1 ;
+(BOOL)locationServicesEnabled;
+(int)_authorizationStatus;
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(BOOL)locationServicesEnabled:(BOOL)arg1 ;
+(BOOL)authorizationPromptMapDisplayEnabled;
+(BOOL)headingAvailable;
+(BOOL)significantLocationChangeMonitoringAvailable;
+(BOOL)isMonitoringAvailableForClass:(Class)arg1 ;
+(BOOL)regionMonitoringAvailable;
+(BOOL)regionMonitoringEnabled;
+(BOOL)isRangingAvailable;
+(BOOL)mapCorrectionAvailable;
+(BOOL)_checkAndExerciseAuthorizationForBundleID:(id)arg1 error:(id*)arg2 ;
+(BOOL)_checkAndExerciseAuthorizationForBundle:(id)arg1 error:(id*)arg2 ;
+(BOOL)deferredLocationUpdatesAvailable;
+(BOOL)isPeerRangingAvailable;
+(id)_archivedAuthorizationDecisionsWithError:(id*)arg1 ;
+(id)_applyArchivedAuthorizationDecisions:(id)arg1 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundleIdentifier:(id)arg3 ;
+(void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundle:(id)arg3 ;
+(void)setIncidentalUseMode:(int)arg1 forBundle:(id)arg2 ;
+(void)setIncidentalUseMode:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(void)getIncidentalUseMode:(int*)arg1 forBundle:(id)arg2 ;
+(void)getIncidentalUseMode:(int*)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setTemporaryAuthorizationGranted:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setTemporaryAuthorizationGranted:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(BOOL)dumpLogsWithMessage:(id)arg1 ;
+(void)dumpDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
+(BOOL)bundleSupported:(id)arg1 ;
+(BOOL)advertiseAsBeacon:(id)arg1 withPower:(id)arg2 ;
+(id)_getClientTransientAuthorizationInfoForBundleId:(id)arg1 error:(id*)arg2 ;
+(id)_getClientTransientAuthorizationInfoForBundlePath:(id)arg1 error:(id*)arg2 ;
+(id)_setClientTransientAuthorizationInfoForBundleId:(id)arg1 data:(id)arg2 ;
+(id)_setClientTransientAuthorizationInfoForBundlePath:(id)arg1 data:(id)arg2 ;
+(unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(unsigned long long)entityAuthorizationForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 withCorrectiveCompensationType:(int)arg2 forLocationDictionary:(id)arg3 ;
+(void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned long long)arg2 ;
+(BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1 ;
+(unsigned long long)entityClassesForLocationDictionary:(id)arg1 ;
+(BOOL)isLocationActiveForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(BOOL)hasUsedBackgroundLocationServices:(id)arg1 ;
+(unsigned long long)allowableAuthorizationForLocationDictionary:(id)arg1 ;
+(BOOL)correctiveCompensationStatusForLocationDictionary:(id)arg1 ;
+(unsigned long long)incidentalUseModeForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 forLocationDictionary:(id)arg2 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 withCorrectiveCompensation:(BOOL)arg2 forLocationDictionary:(id)arg3 ;
+(BOOL)backgroundIndicatorEnabledForLocationDictionary:(id)arg1 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forLocationDictionary:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(long long)activityType;
-(void)setActivityType:(long long)arg1 ;
-(CLLocation *)location;
-(int)authorizationStatus;
-(CLHeading *)heading;
-(void)setPrivateMode:(BOOL)arg1 ;
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
-(BOOL)locationServicesEnabled;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(double)headingFilter;
-(void)setHeadingFilter:(double)arg1 ;
-(BOOL)allowsAlteredAccessoryLocations;
-(void)setAllowsAlteredAccessoryLocations:(BOOL)arg1 ;
-(void)setDynamicAccuracyReductionEnabled:(BOOL)arg1 ;
-(BOOL)pausesLocationUpdatesAutomatically;
-(void)setPausesLocationUpdatesAutomatically:(BOOL)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(BOOL)isAuthorizedForWidgetUpdates;
-(NSSet *)rangedRegions;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 silo:(id)arg4 ;
-(int)_authorizationStatus;
-(void)onLocationRequestTimeout;
-(void)startUpdatingHeading;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)onRangingRequestTimeout;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)onClientEventLocation:(id)arg1 forceMapMatching:(BOOL)arg2 type:(id)arg3 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(void)onClientEventHeading:(id)arg1 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)onClientEventError:(id)arg1 ;
-(void)onClientEventRegion:(id)arg1 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)onClientEventPeerRanging:(id)arg1 ;
-(void)onClientEventPeerRangingRequestProcessed:(id)arg1 ;
-(void)onClientEventPeerRangingError:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)onClientEventNoLocationWatchdog:(id)arg1 ;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)onClientEventSignificantLocationVisit:(id)arg1 ;
-(void)onClientEventPlaceInferenceError:(id)arg1 ;
-(void)onClientEventPlaceInferenceResult:(id)arg1 ;
-(void)callPlaceInferenceHandlerWithResult:(id)arg1 error:(id)arg2 ;
-(void)resumeLocationUpdates;
-(void)pauseLocationUpdates:(BOOL)arg1 ;
-(long long)accuracyAuthorization;
-(void)requestWhenInUseAuthorization;
-(void)_requestTemporaryFullAccuracyWithUsageDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 ;
-(void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)headingAvailable;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(id)initWithEffectiveBundle:(id)arg1 limitingBundleIdentifier:(id)arg2 delegate:(id)arg3 onQueue:(id)arg4 ;
-(id)_initWithDelegate:(id)arg1 onQueue:(id)arg2 ;
-(BOOL)_limitsPrecision;
-(BOOL)locationServicesAvailable;
-(BOOL)locationServicesApproved;
-(double)expectedGpsUpdateInterval;
-(void)setSupportInfo:(BOOL)arg1 ;
-(BOOL)supportInfo;
-(CLClientRef)internalClient;
-(BOOL)privateMode;
-(void)markAsHavingReceivedLocation;
-(void)startUpdatingLocationWithPrompt;
-(void)requestLocation;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)disallowDeferredLocationUpdates;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)dismissHeadingCalibrationDisplay;
-(void)startAppStatusUpdates;
-(void)stopAppStatusUpdates;
-(void)startTechStatusUpdates;
-(void)stopTechStatusUpdates;
-(void)startMonitoringSignificantLocationChanges;
-(void)_startMonitoringSignificantLocationChangesOfDistance:(double)arg1 withPowerBudget:(int)arg2 ;
-(void)stopMonitoringSignificantLocationChanges;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(void)requestStateForRegion:(id)arg1 ;
-(double)maximumRegionMonitoringDistance;
-(NSSet *)monitoredRegions;
-(void)startRangingBeaconsInRegion:(id)arg1 ;
-(void)stopRangingBeaconsInRegion:(id)arg1 ;
-(void)startRangingBeaconsSatisfyingConstraint:(id)arg1 ;
-(void)stopRangingBeaconsSatisfyingConstraint:(id)arg1 ;
-(NSSet *)rangedBeaconConstraints;
-(void)requestRangingToPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)respondToRangingFromPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)startRangingToPeers:(id)arg1 intervalSeconds:(unsigned long long)arg2 ;
-(void)stopRangingToPeers:(id)arg1 ;
-(void)startRangingFromPeers:(id)arg1 ;
-(void)stopRangingFromPeers:(id)arg1 ;
-(void)resetApps;
-(id)appsUsingLocation;
-(id)appsUsingLocationWithDetails;
-(id)technologiesInUse;
-(id)_zAxisStatistics;
-(BOOL)isAuthorizedForPreciseLocation;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)requestAlwaysAuthorization;
-(void)_requestTemporaryFullAccuracyWithUsageDescription:(id)arg1 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(BOOL)isDynamicAccuracyReductionEnabled;
-(void)registerAsLocationClient;
-(void)setIsActuallyAWatchKitExtension:(BOOL)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(BOOL)isMatchInfoEnabled;
-(BOOL)_isGroundAltitudeEnabled;
-(void)_setGroundAltitudeEnabled:(BOOL)arg1 ;
-(id)_groundAltitudeAtLocation:(id)arg1 ;
-(BOOL)_isFusionInfoEnabled;
-(void)_setFusionInfoEnabled:(BOOL)arg1 ;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
-(void)_startLeechingVisits;
-(id)_startPlaceInferencesCommonLogic:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchContinuousPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopFetchingContinuousPlaceInferences;
-(void)_updateVLLocalizationResult:(id)arg1 ;
-(void)_updateARSessionState:(unsigned long long)arg1 ;
-(void)_updateVIOEstimation:(id)arg1 ;
@end

