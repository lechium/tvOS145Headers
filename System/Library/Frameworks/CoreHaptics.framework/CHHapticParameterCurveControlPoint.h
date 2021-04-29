/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CHHapticParameterCurveControlPoint : NSObject {

	float _value;
	double _time;

}

@property (assign) double relativeTime;              //@synthesize time=_time - In the implementation block
@property (assign) float value;                      //@synthesize value=_value - In the implementation block
-(id)init;
-(float)value;
-(void)setValue:(float)arg1 ;
-(double)relativeTime;
-(id)initWithRelativeTime:(double)arg1 value:(float)arg2 ;
-(void)setRelativeTime:(double)arg1 ;
@end

