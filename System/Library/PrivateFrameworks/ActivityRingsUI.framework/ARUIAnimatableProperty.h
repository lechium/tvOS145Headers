/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface ARUIAnimatableProperty : NSObject {

	/*^block*/id _getter;
	/*^block*/id _setter;
	NSMutableArray* _animations;
	id _currentValue;
	id _startValue;
	id _endValue;

}

@property (nonatomic,retain) id startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,retain) id endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,retain) id currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(void)update:(double)arg1 ;
-(void)setStartValue:(id)arg1 ;
-(void)setEndValue:(id)arg1 ;
-(id)startValue;
-(id)endValue;
-(BOOL)isFinishedAnimating;
-(void)removeAllPropertyAnimations;
-(id)initWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
-(void)setValueImmediate:(id)arg1 ;
-(void)addPropertyAnimation:(id)arg1 ;
@end

