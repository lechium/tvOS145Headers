/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor;

@interface WUIGradient : NSObject {

	UIColor* _firstColor;
	UIColor* _secondColor;
	UIColor* _thirdColor;

}

@property (nonatomic,retain) UIColor * firstColor;               //@synthesize firstColor=_firstColor - In the implementation block
@property (nonatomic,retain) UIColor * secondColor;              //@synthesize secondColor=_secondColor - In the implementation block
@property (nonatomic,retain) UIColor * thirdColor;               //@synthesize thirdColor=_thirdColor - In the implementation block
-(UIColor *)secondColor;
-(void)setSecondColor:(UIColor *)arg1 ;
-(UIColor *)firstColor;
-(void)setFirstColor:(UIColor *)arg1 ;
-(UIColor *)thirdColor;
-(void)setThirdColor:(UIColor *)arg1 ;
@end
