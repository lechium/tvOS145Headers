/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPOIBusynessHelper : NSObject
+(id)_tileKeysFor:(int)arg1 zoom:(unsigned char)arg2 radius:(int)arg3 location:(id)arg4 ;
+(void)_fetchTiles:(id)arg1 withOptions:(unsigned long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)_checkAvailablePOIForLocation:(id)arg1 radius:(int)arg2 minZoom:(unsigned char)arg3 maxZoom:(unsigned char)arg4 tiles:(id)arg5 error:(id*)arg6 ;
+(void)_fetchTilesFor:(int)arg1 zoom:(unsigned char)arg2 radius:(int)arg3 location:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)_generateDPPOIBusynessForLocation:(id)arg1 radii:(id)arg2 maxRadius:(int)arg3 minZoom:(unsigned char)arg4 maxZoom:(unsigned char)arg5 dpBusynessTiles:(id)arg6 error:(id*)arg7 ;
+(id)_generateDPPOIBusynessForCoordinate:(GEOCoarseLocationLatLng)arg1 tileId:(unsigned long long)arg2 dpBusynessTileURL:(id)arg3 dayOfWeek:(unsigned)arg4 hourOfDay:(unsigned)arg5 radii:(id)arg6 minZoom:(unsigned char)arg7 maxZoom:(unsigned char)arg8 tileIds:(set<gloria::TileId, std::__1::less<gloria::TileId>, std::__1::allocator<gloria::TileId>>*)arg9 error:(id*)arg10 ;
+(void)checkIsEnabledForLocation:(id)arg1 radius:(int)arg2 workQueue:(id)arg3 result:(/*^block*/id)arg4 ;
+(id)dpClientVersionHashWithMCPOIBusynessVersion:(id)arg1 ;
+(void)generateDPPOIBusynessForLocation:(id)arg1 radii:(id)arg2 workQueue:(id)arg3 result:(/*^block*/id)arg4 ;
-(id)init;
@end
