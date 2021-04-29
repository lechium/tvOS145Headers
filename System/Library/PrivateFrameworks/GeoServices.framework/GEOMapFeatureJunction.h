/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject {

	GEOCoarseLocationLatLng _coordinate;
	SCD_Struct_GE195 _tilePoint;
	GEOVectorTile* _tile;

}

@property (nonatomic,readonly) GEOVectorTile * tile; 
@property (nonatomic,readonly) SCD_Struct_GE195 tilePoint; 
@property (nonatomic,readonly) SCD_Struct_GE132* connectivityJunction; 
@property (nonatomic,readonly) BOOL isOnTileBorder; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
+(id)junctionForRoadFeature:(SCD_Struct_GE197*)arg1 startJunction:(BOOL)arg2 ;
+(BOOL)_isPointOnTileBorder:(SCD_Struct_GE195)arg1 ;
-(GEOCoarseLocationLatLng)coordinate;
-(GEOVectorTile *)tile;
-(SCD_Struct_GE132*)connectivityJunction;
-(BOOL)isOnTileBorder;
-(SCD_Struct_GE195)tilePoint;
@end

