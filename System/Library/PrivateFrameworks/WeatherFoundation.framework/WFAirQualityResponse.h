/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFAirQualityConditions, NSData;

@interface WFAirQualityResponse : WFResponse <NSSecureCoding> {

	BOOL _responseWasFromCache;
	WFAirQualityConditions* _airQualityConditions;
	NSData* _rawAPIData;

}

@property (assign,nonatomic) BOOL responseWasFromCache;                                  //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                                        //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;              //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFAirQualityConditions *)airQualityConditions;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(BOOL)responseWasFromCache;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
@end

