/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFTemperature;

@interface WADayForecast : NSObject <NSCopying> {

	BOOL _isYesterday;
	WFTemperature* _high;
	WFTemperature* _low;
	double _percentPrecipitation;
	unsigned long long _icon;
	unsigned long long _dayOfWeek;
	unsigned long long _dayNumber;

}

@property (nonatomic,copy) WFTemperature * high;                        //@synthesize high=_high - In the implementation block
@property (nonatomic,copy) WFTemperature * low;                         //@synthesize low=_low - In the implementation block
@property (assign,nonatomic) double percentPrecipitation;               //@synthesize percentPrecipitation=_percentPrecipitation - In the implementation block
@property (assign,nonatomic) unsigned long long icon;                   //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long dayOfWeek;              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) unsigned long long dayNumber;              //@synthesize dayNumber=_dayNumber - In the implementation block
@property (assign,nonatomic) BOOL isYesterday;                          //@synthesize isYesterday=_isYesterday - In the implementation block
+(id)dayForecastForLocation:(id)arg1 conditions:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)dayOfWeek;
-(unsigned long long)icon;
-(void)setIcon:(unsigned long long)arg1 ;
-(void)setDayOfWeek:(unsigned long long)arg1 ;
-(void)setHigh:(WFTemperature *)arg1 ;
-(void)setLow:(WFTemperature *)arg1 ;
-(WFTemperature *)high;
-(WFTemperature *)low;
-(BOOL)isYesterday;
-(double)percentPrecipitation;
-(long long)compareDayNumberToDayForecast:(id)arg1 ;
-(void)setPercentPrecipitation:(double)arg1 ;
-(void)setDayNumber:(unsigned long long)arg1 ;
-(void)setIsYesterday:(BOOL)arg1 ;
-(unsigned long long)dayNumber;
@end

