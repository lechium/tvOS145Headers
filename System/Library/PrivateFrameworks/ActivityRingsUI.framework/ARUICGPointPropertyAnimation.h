/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <ActivityRingsUI/ARUIAnimatableObjectPropertyAnimation.h>

@interface ARUICGPointPropertyAnimation : ARUIAnimatableObjectPropertyAnimation {

	CGPoint _startValue;
	CGPoint _endValue;
	CGPoint _currentValue;

}

@property (nonatomic,readonly) CGPoint startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) CGPoint endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) CGPoint currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(id)animationWithEndingCGPointValue:(CGPoint)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_currentValue;
-(CGPoint)currentValue;
-(id)_startValue;
-(id)_endValue;
-(CGPoint)startValue;
-(CGPoint)endValue;
-(void)_updateWithProgress:(float)arg1 ;
-(void)_setStartValue:(id)arg1 ;
-(void)_setEndValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
@end

