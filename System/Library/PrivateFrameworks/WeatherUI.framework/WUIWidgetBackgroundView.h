/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherUI/WeatherUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WUIWeatherConditionBackgroundView;

@interface WUIWidgetBackgroundView : UIView {

	WUIWeatherConditionBackgroundView* _condtionBackground;

}

@property (nonatomic,retain) WUIWeatherConditionBackgroundView * condtionBackground;              //@synthesize condtionBackground=_condtionBackground - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCondtionBackground:(WUIWeatherConditionBackgroundView *)arg1 ;
-(WUIWeatherConditionBackgroundView *)condtionBackground;
-(void)setConditionCode:(long long)arg1 isDay:(BOOL)arg2 ;
@end
