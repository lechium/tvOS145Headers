/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding> {

	NSArray* _trafficColors;
	NSArray* _incidents;

}

@property (nonatomic,readonly) NSArray * trafficIncidents; 
@property (nonatomic,readonly) NSArray * trafficIncidentOffsets; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) NSArray * routeTrafficColors;                             //@synthesize trafficColors=_trafficColors - In the implementation block
@property (nonatomic,readonly) NSArray * routeIncidents;                                 //@synthesize incidents=_incidents - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRoute:(id)arg1 initializerData:(id)arg2 ;
-(id)initWithRoute:(id)arg1 etaRoute:(id)arg2 ;
-(unsigned long long)trafficColorsCount;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned*)trafficColors;
-(unsigned*)trafficColorOffsets;
-(NSArray *)routeIncidents;
-(id)_trafficColorInfosFromTrafficBuilder:(id)arg1 route:(id)arg2 ;
-(void)_buildIncidentsForRoute:(id)arg1 etaRoute:(id)arg2 initializerData:(id)arg3 ;
-(id)_incidentsForOldRoute:(id)arg1 etaRoute:(id)arg2 ;
-(id)_incidentsForOldRoute:(id)arg1 geoIncidentsFromResponse:(id)arg2 ;
-(id)_incidentsForRoute:(id)arg1 etaRoute:(id)arg2 ;
-(id)_incidentsForRoute:(id)arg1 ;
-(NSArray *)routeTrafficColors;
-(NSArray *)trafficIncidents;
-(NSArray *)trafficIncidentOffsets;
@end

