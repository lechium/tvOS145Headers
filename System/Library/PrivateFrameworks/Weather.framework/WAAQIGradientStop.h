/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor;

@interface WAAQIGradientStop : NSObject {

	float _location;
	UIColor* _color;

}

@property (nonatomic,readonly) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) float location;               //@synthesize location=_location - In the implementation block
+(id)gradientStopWithColor:(id)arg1 location:(float)arg2 ;
-(float)location;
-(UIColor *)color;
-(id)initWithColor:(id)arg1 location:(float)arg2 ;
@end

