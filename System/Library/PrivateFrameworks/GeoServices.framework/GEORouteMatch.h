/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray, NSDate, GEONavigationMatchInfo, GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOComposedTransitStationRouteStep, GEOComposedRouteSegment, GEOComposedRouteLeg;

@interface GEORouteMatch : NSObject {

	GEOComposedRoute* _route;
	PolylineCoordinate _routeCoordinate;
	GEOCoarseLocationLatLng _locationCoordinate;
	unsigned long long _stepIndex;
	NSArray* _candidateSteps;
	double _matchedCourse;
	double _distanceFromRoute;
	double _modifiedHorizontalAccuracy;
	double _modifiedCourseAccuracy;
	unsigned long long _consecutiveProgressionsOffRoute;
	double _distanceTraveledOffRoute;
	BOOL _isGoodMatch;
	SCD_Struct_GE73* _road;
	double _roadWidth;
	GEORouteMatch* _projectedFrom;
	NSDate* _timestamp;
	unsigned long long _transitID;
	BOOL _isTunnelProjection;
	GEONavigationMatchInfo* _detailedMatchInfo;

}

@property (nonatomic,retain) GEOComposedRoute * route;                                               //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng locationCoordinate;                             //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;                                     //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                                           //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * step; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * transitTripStep; 
@property (nonatomic,readonly) GEOComposedTransitStationRouteStep * transitStationStep; 
@property (nonatomic,retain) NSArray * candidateSteps;                                               //@synthesize candidateSteps=_candidateSteps - In the implementation block
@property (nonatomic,readonly) unsigned long long segmentIndex; 
@property (nonatomic,readonly) GEOComposedRouteSegment * segment; 
@property (nonatomic,readonly) unsigned long long legIndex; 
@property (nonatomic,readonly) GEOComposedRouteLeg * leg; 
@property (assign,nonatomic) double matchedCourse;                                                   //@synthesize matchedCourse=_matchedCourse - In the implementation block
@property (assign,nonatomic) double distanceFromRoute;                                               //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE73* road;                                                  //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) double roadWidth;                                                     //@synthesize roadWidth=_roadWidth - In the implementation block
@property (nonatomic,readonly) BOOL isOnParkingLotRoad; 
@property (nonatomic,readonly) BOOL routeMatchedToEnd; 
@property (nonatomic,retain) GEORouteMatch * projectedFrom;                                          //@synthesize projectedFrom=_projectedFrom - In the implementation block
@property (assign,nonatomic) BOOL isTunnelProjection;                                                //@synthesize isTunnelProjection=_isTunnelProjection - In the implementation block
@property (assign,nonatomic) BOOL isGoodMatch;                                                       //@synthesize isGoodMatch=_isGoodMatch - In the implementation block
@property (assign,nonatomic) unsigned long long consecutiveProgressionsOffRoute;                     //@synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute - In the implementation block
@property (assign,nonatomic) double distanceTraveledOffRoute;                                        //@synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute - In the implementation block
@property (assign,nonatomic) double modifiedHorizontalAccuracy;                                      //@synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) double modifiedCourseAccuracy;                                          //@synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long transitID;                                           //@synthesize transitID=_transitID - In the implementation block
@property (nonatomic,retain) GEONavigationMatchInfo * detailedMatchInfo;                             //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSDate *)timestamp;
-(GEOComposedRouteStep *)step;
-(void)setTimestamp:(NSDate *)arg1 ;
-(GEOComposedRouteSegment *)segment;
-(double)roadWidth;
-(unsigned long long)transitID;
-(PolylineCoordinate)routeCoordinate;
-(GEOComposedRoute *)route;
-(unsigned long long)stepIndex;
-(GEOCoarseLocationLatLng)locationCoordinate;
-(id)initWithRoute:(id)arg1 routeCoordinate:(PolylineCoordinate)arg2 locationCoordinate:(GEOCoarseLocationLatLng)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6 ;
-(void)setRoad:(SCD_Struct_GE73*)arg1 ;
-(GEORouteMatch *)projectedFrom;
-(void)setProjectedFrom:(GEORouteMatch *)arg1 ;
-(BOOL)isGoodMatch;
-(void)setIsGoodMatch:(BOOL)arg1 ;
-(double)modifiedHorizontalAccuracy;
-(void)setModifiedHorizontalAccuracy:(double)arg1 ;
-(double)modifiedCourseAccuracy;
-(void)setModifiedCourseAccuracy:(double)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setDistanceFromRoute:(double)arg1 ;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(void)setLocationCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2 ;
-(unsigned long long)legIndex;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(double)distanceFromRoute;
-(double)matchedCourse;
-(BOOL)routeMatchedToEnd;
-(BOOL)isOnParkingLotRoad;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(NSArray *)candidateSteps;
-(void)setCandidateSteps:(NSArray *)arg1 ;
-(SCD_Struct_GE73*)road;
-(id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2 ;
-(unsigned long long)consecutiveProgressionsOffRoute;
-(void)setConsecutiveProgressionsOffRoute:(unsigned long long)arg1 ;
-(double)distanceTraveledOffRoute;
-(void)setDistanceTraveledOffRoute:(double)arg1 ;
-(BOOL)isEqualIgnoringScore:(id)arg1 ;
-(unsigned long long)segmentIndex;
-(BOOL)routeMatchBehind:(id)arg1 ;
-(double)fractionOfCurrentStepTraveled;
-(GEOComposedTransitTripRouteStep *)transitTripStep;
-(GEOComposedTransitStationRouteStep *)transitStationStep;
-(GEOComposedRouteLeg *)leg;
-(void)setMatchedCourse:(double)arg1 ;
-(void)setTransitID:(unsigned long long)arg1 ;
-(BOOL)isTunnelProjection;
-(void)setIsTunnelProjection:(BOOL)arg1 ;
@end

