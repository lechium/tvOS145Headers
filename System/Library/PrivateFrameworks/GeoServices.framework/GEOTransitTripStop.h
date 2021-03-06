/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSTimeZone, NSString, NSArray, GEOLatLng, GEOStyleAttributes;


@protocol GEOTransitTripStop <NSObject>
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitDeparture> departure; 
@property (nonatomic,readonly) unsigned long long stationIdentifier; 
@property (nonatomic,readonly) GEOLatLng * location; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@required
-(NSTimeZone *)timeZone;
-(NSString *)displayName;
-(GEOLatLng *)location;
-(id<GEOTransitDeparture>)departure;
-(GEOStyleAttributes *)styleAttributes;
-(unsigned long long)stationIdentifier;
-(NSArray *)labelItems;

@end

