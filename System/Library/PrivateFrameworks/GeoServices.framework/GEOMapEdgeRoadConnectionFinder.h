/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeConnectionFinder.h>

@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder
-(BOOL)_isRoadEdgeEqual:(const SCD_Struct_GE82*)arg1 other:(const SCD_Struct_GE82*)arg2 ;
-(void)_findConnectedEdges:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
@end

