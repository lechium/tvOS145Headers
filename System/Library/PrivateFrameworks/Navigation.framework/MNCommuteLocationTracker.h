/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>

@protocol GEOMapServiceTicket, GEODirectionServiceTicket;
@class GEOComposedWaypoint, MNLocation, MNActiveRouteInfo, GEONavigationMapMatcher, GEOETAUpdater, MNNavigationTraceManager, MNCommuteDestinationSuggestion, GEOComposedRoute, NSString;

@interface MNCommuteLocationTracker : MNLocationTracker <GEOETAUpdaterDelegate> {

	GEOComposedWaypoint* _lastOrigin;
	MNLocation* _lastLocation;
	MNActiveRouteInfo* _routeInfo;
	id<GEOMapServiceTicket> _currentLocationTicket;
	id<GEODirectionServiceTicket> _directionsRequestTicket;
	GEONavigationMapMatcher* _mapMatcher;
	GEOETAUpdater* _etaUpdater;
	MNNavigationTraceManager* _traceManager;
	BOOL _routingInProgress;
	unsigned long long _destinationID;
	MNCommuteDestinationSuggestion* _suggestion;

}

@property (assign,nonatomic) BOOL routingInProgress;                                     //@synthesize routingInProgress=_routingInProgress - In the implementation block
@property (nonatomic,readonly) MNCommuteDestinationSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (assign,nonatomic) unsigned long long destinationID;                           //@synthesize destinationID=_destinationID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(GEOComposedWaypoint *)destination;
-(int)transportType;
-(GEOComposedRoute *)route;
-(id)_routeAttributes;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 etaRoute:(id)arg3 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
-(MNCommuteDestinationSuggestion *)suggestion;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)startTracking;
-(void)stopTracking;
-(void)updateLocation:(id)arg1 ;
-(void)_setAuditToken:(id)arg1 ;
-(BOOL)routingInProgress;
-(void)setRoutingInProgress:(BOOL)arg1 ;
-(void)_handleWaypoint:(id)arg1 fromLocation:(id)arg2 error:(id)arg3 ;
-(void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2 ;
-(id)_directionsRequestFeedback;
-(void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3 ;
-(void)_requestRouteFromLocation:(id)arg1 ;
-(BOOL)_checkArrivalForLocation:(id)arg1 route:(id)arg2 destination:(id)arg3 ;
-(id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 traceManager:(id)arg2 ;
-(void)updateETA;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
@end

