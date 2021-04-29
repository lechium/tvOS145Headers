/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitAccessPoint.h>

@protocol GEOMapTransitStation;
@class GEOMapAccess, NSString;

@interface GEOMapAccessTransitAccessPoint : NSObject <GEOMapTransitAccessPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapAccessPointFeature>* _accessPoint;
	id<GEOMapTransitStation> _station;

}

@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOCoarseLocationLatLng)coordinate;
-(unsigned short)accessType;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1 ;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE36)boundingRect;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(long long)polygonPointsCount;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)stationID;
-(double)groundRadius;
-(unsigned char)entranceExitType;
-(id)initWithMap:(id)arg1 accessPoint:(shared_ptr<geo::MapAccessPointFeature>*)arg2 ;
@end

