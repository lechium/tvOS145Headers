/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface SHInsightsBag : NSObject {

	NSDictionary* _bagContents;

}

@property (nonatomic,readonly) NSDictionary * bagContents;              //@synthesize bagContents=_bagContents - In the implementation block
+(id)amsBag;
+(void)loadBag:(/*^block*/id)arg1 ;
-(id)initWithBagContents:(id)arg1 ;
-(NSDictionary *)bagContents;
-(long long)maxGeoChartsGeohashLength;
-(long long)minGeoChartsGeohashLength;
-(id)targetingEndpointForStorefront:(id)arg1 ;
-(id)geoChartsEndpointForDate:(id)arg1 geoHash:(id)arg2 ;
@end

