/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRoute, GEOComposedETARoute, GEOETATrafficUpdateResponse, MNDisplayETAInfo, MNRouteDistanceInfo, NSUUID, GEOComposedRouteTraffic, GEOTransitRouteUpdateRequest;

@interface MNActiveRouteInfo : NSObject <NSSecureCoding> {

	GEOComposedRoute* _route;
	GEOComposedETARoute* _etaRoute;
	GEOETATrafficUpdateResponse* _etaResponse;
	MNDisplayETAInfo* _displayETAInfo;
	MNRouteDistanceInfo* _remainingDistanceInfo;
	unsigned long long _alternateRouteIndex;

}

@property (nonatomic,readonly) NSUUID * routeID; 
@property (nonatomic,retain) GEOComposedRoute * route;                                                //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEOComposedETARoute * etaRoute;                                          //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateResponse * etaResponse;                               //@synthesize etaResponse=_etaResponse - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteTraffic * traffic; 
@property (nonatomic,retain) MNDisplayETAInfo * displayETAInfo;                                       //@synthesize displayETAInfo=_displayETAInfo - In the implementation block
@property (nonatomic,retain) MNRouteDistanceInfo * remainingDistanceInfo;                             //@synthesize remainingDistanceInfo=_remainingDistanceInfo - In the implementation block
@property (assign,nonatomic) unsigned long long alternateRouteIndex;                                  //@synthesize alternateRouteIndex=_alternateRouteIndex - In the implementation block
@property (nonatomic,readonly) GEOTransitRouteUpdateRequest * transitRouteUpdateRequest; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedRouteTraffic *)traffic;
-(NSUUID *)routeID;
-(id)initWithRoute:(id)arg1 ;
-(GEOComposedRoute *)route;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(GEOTransitRouteUpdateRequest *)transitRouteUpdateRequest;
-(GEOETATrafficUpdateResponse *)etaResponse;
-(void)setEtaResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(GEOComposedETARoute *)etaRoute;
-(void)setAlternateRouteIndex:(unsigned long long)arg1 ;
-(void)setEtaRoute:(GEOComposedETARoute *)arg1 ;
-(MNDisplayETAInfo *)displayETAInfo;
-(MNRouteDistanceInfo *)remainingDistanceInfo;
-(unsigned long long)alternateRouteIndex;
-(void)setDisplayETAInfo:(MNDisplayETAInfo *)arg1 ;
-(void)setRemainingDistanceInfo:(MNRouteDistanceInfo *)arg1 ;
-(id)initWithRoute:(id)arg1 trafficRoute:(id)arg2 routeInitalizerData:(id)arg3 ;
@end

