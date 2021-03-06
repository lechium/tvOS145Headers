/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapItem, NSDate, NSArray, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, GEOCyclingOptions;

@interface MKDirectionsRequest : NSObject <NSCopying> {

	MKMapItem* _source;
	MKMapItem* _destination;
	unsigned long long _transportType;
	BOOL _requestsAlternateRoutes;
	BOOL _includeTravelTimes;
	BOOL _includeTrafficIncidents;
	BOOL _includeZilchRoutePoints;
	BOOL _includeBasicRoutePoints;
	BOOL _includeEntryPoints;
	BOOL _resolveExtraAutomobileOptions;
	BOOL _includeDistanceInETA;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	NSArray* _additionalTransportTypesRequested;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	GEOCyclingOptions* _cyclingOptions;

}

@property (assign,setter=_setIncludeDistanceInETA:,getter=_includeDistanceInETA,nonatomic) BOOL includeDistanceInETA;                                                          //@synthesize includeDistanceInETA=_includeDistanceInETA - In the implementation block
@property (setter=_setAdditionalTransportTypesRequested:,getter=_additionalTransportTypesRequested,nonatomic,retain) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
@property (nonatomic,readonly) BOOL _includeTypicalRouteDuration; 
@property (nonatomic,readonly) BOOL _includeTravelTimes;                                                                                                                       //@synthesize includeTravelTimes=_includeTravelTimes - In the implementation block
@property (nonatomic,readonly) BOOL _includeTrafficIncidents;                                                                                                                  //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (nonatomic,readonly) BOOL _includeZilchRoutePoints;                                                                                                                  //@synthesize includeZilchRoutePoints=_includeZilchRoutePoints - In the implementation block
@property (nonatomic,readonly) BOOL _includeBasicRoutePoints;                                                                                                                  //@synthesize includeBasicRoutePoints=_includeBasicRoutePoints - In the implementation block
@property (nonatomic,readonly) BOOL _includeEntryPoints;                                                                                                                       //@synthesize includeEntryPoints=_includeEntryPoints - In the implementation block
@property (nonatomic,readonly) BOOL _resolveExtraAutomobileOptions;                                                                                                            //@synthesize resolveExtraAutomobileOptions=_resolveExtraAutomobileOptions - In the implementation block
@property (setter=_setAutomobileOptions:,getter=_automobileOptions,nonatomic,retain) GEOAutomobileOptions * automobileOptions;                                                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (setter=_setTransitOptions:,getter=_transitOptions,nonatomic,retain) GEOTransitOptions * transitOptions;                                                             //@synthesize transitOptions=_transitOptions - In the implementation block
@property (setter=_setWalkingOptions:,getter=_walkingOptions,nonatomic,retain) GEOWalkingOptions * walkingOptions;                                                             //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (setter=_setCyclingOptions:,getter=_cyclingOptions,nonatomic,retain) GEOCyclingOptions * cyclingOptions;                                                             //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * source;                                                                                                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) MKMapItem * destination;                                                                                                                          //@synthesize destination=_destination - In the implementation block
+(BOOL)isDirectionsRequestURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 ;
-(MKMapItem *)source;
-(void)setSource:(MKMapItem *)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(void)setDestination:(MKMapItem *)arg1 ;
-(MKMapItem *)destination;
-(unsigned long long)transportType;
-(void)setTransportType:(unsigned long long)arg1 ;
-(unsigned long long)_transportType;
-(id)arrivalDate;
-(void)setArrivalDate:(id)arg1 ;
-(id)_arrivalDate;
-(id)_automobileOptions;
-(id)_cyclingOptions;
-(id)_transitOptions;
-(id)_walkingOptions;
-(BOOL)_includeTrafficIncidents;
-(BOOL)_includeEntryPoints;
-(id)departureDate;
-(id)_departureDate;
-(id)_additionalTransportTypesRequested;
-(void)setDepartureDate:(id)arg1 ;
-(BOOL)_includeBasicRoutePoints;
-(BOOL)_includeZilchRoutePoints;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8 resolveExtraAutomobileOptions:(BOOL)arg9 ;
-(void)_setIncludeDistanceInETA:(BOOL)arg1 ;
-(void)_setAdditionalTransportTypesRequested:(id)arg1 ;
-(void)_setAutomobileOptions:(id)arg1 ;
-(void)_setTransitOptions:(id)arg1 ;
-(void)_setCyclingOptions:(id)arg1 ;
-(BOOL)requestsAlternateRoutes;
-(BOOL)_includeDistanceInETA;
-(BOOL)_resolveExtraAutomobileOptions;
-(BOOL)_includeTravelTimes;
-(void)setRequestsAlternateRoutes:(BOOL)arg1 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 ;
-(id)_mapkit_initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)_includeTypicalRouteDuration;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 ;
-(void)_setWalkingOptions:(id)arg1 ;
@end

