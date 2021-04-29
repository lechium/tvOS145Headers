/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOTransitRouteMatcher, GEOComposedRoute, GEOMapFeatureAccess, GEOMotionContext;

@interface _GEORouteMatchUpdater : NSObject {

	GEOTransitRouteMatcher* _routeMatcher;
	GEOComposedRoute* _route;
	GEOMapFeatureAccess* _mapFeatureAccess;
	GEOMotionContext* _motionContext;
	double _stationRadius;

}
-(unsigned long long)priority;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_isLocation:(id)arg1 nearTransitPoint:(GEOCoarseLocationLatLng)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4 ;
-(id)initWithTransitRouteMatcher:(id)arg1 ;
-(BOOL)_isLocation:(id)arg1 nearStop:(id)arg2 ;
-(BOOL)_isLocation:(id)arg1 nearStation:(id)arg2 ;
-(double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(GEOCoarseLocationLatLng)arg3 ;
@end
