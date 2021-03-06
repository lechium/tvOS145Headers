/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder {

	GEOTileLoader* _tileLoader;

}
-(id)initWithTileLoader:(id)arg1 ;
-(id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 roadToIgnore:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_tilesAdjacentToTile:(GEOTileKey)arg1 atPoint:(SCD_Struct_GE34)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

