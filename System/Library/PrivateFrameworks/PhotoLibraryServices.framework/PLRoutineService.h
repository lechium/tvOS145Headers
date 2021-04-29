/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateInterval, PLLocationOfInterestCache, NSMutableSet, NSSet;

@interface PLRoutineService : NSObject {

	BOOL _routineIsAvailable;
	NSDateInterval* _fetchDateInterval;
	PLLocationOfInterestCache* _visitsCache;
	NSMutableSet* _pendingPinningVisitIdentifiers;

}

@property (nonatomic,retain) NSDateInterval * fetchDateInterval;                         //@synthesize fetchDateInterval=_fetchDateInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPinningVisitIdentifiers;              //@synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers - In the implementation block
@property (nonatomic,retain) PLLocationOfInterestCache * visitsCache;                    //@synthesize visitsCache=_visitsCache - In the implementation block
@property (nonatomic,readonly) NSSet * allLocationsOfInterest; 
@property (nonatomic,readonly) NSSet * homeLocations; 
@property (nonatomic,readonly) NSSet * workLocations; 
@property (nonatomic,readonly) BOOL routineIsAvailable;                                  //@synthesize routineIsAvailable=_routineIsAvailable - In the implementation block
-(BOOL)routineIsAvailable;
-(void)fetchLocationsOfInterestIfNeeded;
-(id)lastLocationOfInterestVisit;
-(NSSet *)allLocationsOfInterest;
-(id)initWithFetchDateInterval:(id)arg1 ;
-(PLLocationOfInterestCache *)visitsCache;
-(NSSet *)homeLocations;
-(NSSet *)workLocations;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(void)setVisitsCache:(PLLocationOfInterestCache *)arg1 ;
-(NSDateInterval *)fetchDateInterval;
-(NSMutableSet *)pendingPinningVisitIdentifiers;
-(void)invalidateLocationsOfInterest;
-(void)postProcessLocationsOfInterest;
-(BOOL)hasLocationsOfInterestInformation;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1 ;
-(double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1 ;
-(void)_buildLocationsOfInterestCache;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1 ;
-(void)_pinPendingVisits;
-(void)setFetchDateInterval:(NSDateInterval *)arg1 ;
-(void)setPendingPinningVisitIdentifiers:(NSMutableSet *)arg1 ;
@end

