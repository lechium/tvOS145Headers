/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject {

	GEOPDPriceDescription* _geoPriceDescription;

}

@property (nonatomic,retain) GEOPDPriceDescription * geoPriceDescription;              //@synthesize geoPriceDescription=_geoPriceDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,readonly) NSString * priceDescription; 
-(NSString *)priceDescription;
-(BOOL)hasPriceDescription;
-(id)initWithGEOPDPriceDescription:(id)arg1 ;
-(GEOPDPriceDescription *)geoPriceDescription;
-(void)setGeoPriceDescription:(GEOPDPriceDescription *)arg1 ;
@end

