/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationBicycleMapMatcher : GEONavigationMapMatcher {

	unsigned long long _numProgressionsOffRoute;
	BOOL _useMatchedCoordinateForMatching;

}

@property (assign,nonatomic) BOOL useMatchedCoordinateForMatching;              //@synthesize useMatchedCoordinateForMatching=_useMatchedCoordinateForMatching - In the implementation block
-(int)transportType;
-(BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2 ;
-(double)_courseFromLocation:(id)arg1 ;
-(BOOL)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(void)setUseMatchedCoordinateForMatching:(BOOL)arg1 ;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_GE73*)arg1 ;
-(GEOCoarseLocationLatLng)_coordinateFromLocation:(id)arg1 ;
-(id)_routeMatcherForRoute:(id)arg1 ;
-(BOOL)useMatchedCoordinateForMatching;
@end

