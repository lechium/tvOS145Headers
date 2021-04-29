/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MapKit/MapKit-Structs.h>
@class GEOMapURLBuilder;

@interface _MKURLBuilder : NSObject {

	GEOMapURLBuilder* _realBuilder;

}
+(id)URLForAddress:(id)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(unsigned long long)arg3 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 transport:(unsigned long long)arg2 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(BOOL)arg7 ;
+(id)URLForSearch:(id)arg1 ;
+(id)URLForSearch:(id)arg1 near:(CLLocationCoordinate2D)arg2 ;
+(id)URLForSearch:(id)arg1 at:(CLLocationCoordinate2D)arg2 span:(CGSize)arg3 ;
+(id)URLForSearch:(id)arg1 at:(CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 ;
+(id)URLForAddress:(id)arg1 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(BOOL)arg5 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 label:(id)arg2 muid:(unsigned long long)arg3 provider:(int)arg4 transport:(unsigned long long)arg5 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 extraStorage:(id)arg6 ;
+(id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
+(id)URLForCollectionStorage:(id)arg1 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 useWebPlaceCard:(BOOL)arg4 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 useWebPlaceCard:(BOOL)arg6 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 useWebPlaceCard:(BOOL)arg6 mapItemData:(id)arg7 ;
-(id)build;
-(void)setTransportType:(unsigned long long)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)setDisplayRegion:(SCD_Struct_MK7)arg1 ;
-(id)initForSearch:(id)arg1 ;
-(id)buildForWeb;
-(void)setNear:(CLLocationCoordinate2D)arg1 ;
-(void)setSearchLocation:(CLLocationCoordinate2D)arg1 span:(CGSize)arg2 ;
-(void)setSearchLocation:(CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 ;
-(id)initForAddress:(id)arg1 label:(id)arg2 ;
-(id)initForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 ;
-(id)initForDirectionsTo:(id)arg1 ;
-(void)setStartAddress:(id)arg1 ;
-(void)setDestinationLabel:(id)arg1 ;
-(void)setDestinationMUID:(unsigned long long)arg1 provider:(int)arg2 ;
-(id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
-(void)setBusinessCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setBusinessAddress:(id)arg1 ;
-(id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
-(id)initForCoordinate:(CLLocationCoordinate2D)arg1 label:(id)arg2 ;
-(void)setContentProvider:(id)arg1 ;
@end

