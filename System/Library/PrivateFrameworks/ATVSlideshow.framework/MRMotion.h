/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MRMotion : NSObject {

	NSString* _key;
	double _startValue;
	double _value;
	double _startTime;
	double _duration;
	double _easeIn;
	double _easeOut;

}

@property (readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double startValue;              //@synthesize startValue=_startValue - In the implementation block
@property (readonly) double value;                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (readonly) double easeIn;                          //@synthesize easeIn=_easeIn - In the implementation block
@property (readonly) double easeOut;                         //@synthesize easeOut=_easeOut - In the implementation block
-(void)dealloc;
-(double)startTime;
-(double)value;
-(NSString *)key;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(void)setStartValue:(double)arg1 ;
-(double)startValue;
-(double)valueAtTime:(double)arg1 ;
-(double)easeIn;
-(double)easeOut;
-(id)initWithKey:(id)arg1 value:(double)arg2 duration:(double)arg3 easeIn:(double)arg4 easeOut:(double)arg5 ;
@end

