/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHorizontalCelestialBodyData : NSObject {

	double _altitude;
	double _azimuth;

}

@property (nonatomic,readonly) double altitude;              //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double azimuth;               //@synthesize azimuth=_azimuth - In the implementation block
-(double)altitude;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 ;
-(double)azimuth;
@end

