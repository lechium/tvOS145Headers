/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WeatherOpenURLHelper : NSObject
+(id)URLForWeatherCityComponents:(id)arg1 ;
+(id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)cityFromURL:(id)arg1 withContainerViewController:(id)arg2 ;
+(void)displayCity:(id)arg1 usingController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2 ;
+(id)transientCityFromURLComponents:(id)arg1 ;
+(id)URLForCity:(id)arg1 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 ;
@end
