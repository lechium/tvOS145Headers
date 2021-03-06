/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MNLocationProviderDelegate.h>

@protocol MNLocationProvider, MNLocationRecorder;
@class NSBundle, NSString, NSHashTable, NSLock, MNLocation, GEOLocationShifter, CLInUseAssertion, CLHeading, NSDate, NSError;

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate> {

	unsigned long long _locationProviderType;
	id<MNLocationProvider> _locationProvider;
	id<MNLocationRecorder> _locationRecorder;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	NSHashTable* _accessRequesters;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _headingObservers;
	NSLock* _observersLock;
	NSLock* _lastLocationLock;
	MNLocation* _lastLocation;
	GEOLocationShifter* _locationShifter;
	double _lastLocationUpdateTime;
	double _lastLocationReportTime;
	double _locationUpdateStartTime;
	double _expectedGpsUpdateInterval;
	CLInUseAssertion* _locationAssertion;
	CLHeading* _heading;
	NSDate* _lastUpdatedHeadingDate;
	BOOL _hasCustomDesiredAccuracy;
	BOOL _trackingLocation;
	BOOL _logStartStopLocationUpdates;
	BOOL _isLastLocationStale;
	BOOL _lastLocationPushed;
	BOOL _useCourseForHeading;
	BOOL _trackingHeading;
	/*^block*/id _locationCorrector;
	NSError* _locationError;

}

@property (nonatomic,copy) id locationCorrector;                                     //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,readonly) BOOL isHeadingServicesAvailable; 
@property (nonatomic,readonly) CLHeading * heading;                                  //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) MNLocation * lastLocation; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,readonly) BOOL isLastLocationStale;                             //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) BOOL coarseModeEnabled; 
@property (nonatomic,readonly) NSError * locationError;                              //@synthesize locationError=_locationError - In the implementation block
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) double timeScale; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,retain) id<MNLocationRecorder> locationRecorder;                //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) unsigned long long locationProviderType;              //@synthesize locationProviderType=_locationProviderType - In the implementation block
@property (nonatomic,retain) id<MNLocationProvider> locationProvider;                //@synthesize locationProvider=_locationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLocationManager;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)_reset;
-(CLHeading *)heading;
-(BOOL)hasLocation;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(MNLocation *)lastLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)setLocationRecorder:(id<MNLocationRecorder>)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(BOOL)coarseModeEnabled;
-(double)timeScale;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(void)locationProvider:(id)arg1 didChangeCoarseMode:(BOOL)arg2 ;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(id<MNLocationProvider>)locationProvider;
-(void)addLocationListener:(id)arg1 ;
-(void)removeLocationListener:(id)arg1 ;
-(void)_setTrackingLocation:(BOOL)arg1 ;
-(void)setLocationProviderType:(unsigned long long)arg1 ;
-(void)setLocationProvider:(id<MNLocationProvider>)arg1 ;
-(void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)_setTrackingHeading:(BOOL)arg1 ;
-(void)_reportLocationSuccess;
-(void)_createLocationAssertion;
-(void)_clearLocationAssertion;
-(void)_reportLocationReset;
-(BOOL)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(BOOL)isLocationServicesDenied;
-(BOOL)isLocationServicesRestricted;
-(BOOL)isLocationServicesPossiblyAvailable;
-(BOOL)isLocationServicesApproved;
-(BOOL)isLocationServicesAvailable;
-(void)_updateForNewLocation:(id)arg1 rawLocation:(id)arg2 ;
-(id<MNLocationRecorder>)locationRecorder;
-(void)setLocationCorrector:(id)arg1 ;
-(BOOL)isHeadingServicesAvailable;
-(void)useGPSLocationProviderWithCLParameters:(id)arg1 ;
-(void)useLeechedLocationProvider;
-(void)useHybridLocationProvider;
-(void)useTraceLocationProvider:(id)arg1 ;
-(void)useSimulationLocationProvider:(id)arg1 ;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(void)pushLocation:(id)arg1 ;
-(void)_setLastLocationReceivedFromMaps:(id)arg1 ;
-(BOOL)_hasLocationAssertion;
-(void)requestLocationAccessFor:(id)arg1 ;
-(void)removeLocationAccessFor:(id)arg1 ;
-(void)removeLocationAccessForAll;
-(BOOL)isLocationServicesAuthorizationNeeded;
-(id)locationCorrector;
-(BOOL)isLastLocationStale;
-(NSError *)locationError;
-(unsigned long long)locationProviderType;
@end

