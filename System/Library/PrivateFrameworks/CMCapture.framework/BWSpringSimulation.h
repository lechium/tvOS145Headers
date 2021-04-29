/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BWSpringSimulation : NSObject {

	double _tension;
	double _friction;
	double _convergedSpeed;
	double _inputValue;
	double _outputValue;
	double _previousForce;
	BOOL _completed;
	int _updateCount;

}

@property (assign,nonatomic) double input;                                     //@synthesize inputValue=_inputValue - In the implementation block
@property (assign,nonatomic) double tension;                                   //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                                  //@synthesize friction=_friction - In the implementation block
@property (nonatomic,readonly) double output;                                  //@synthesize outputValue=_outputValue - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) int updateCount;                                //@synthesize updateCount=_updateCount - In the implementation block
+(void)initialize;
-(id)init;
-(double)input;
-(int)updateCount;
-(void)setInput:(double)arg1 ;
-(void)update;
-(double)output;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(BOOL)isCompleted;
-(double)tension;
-(void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 ;
-(void)setTension:(double)arg1 ;
-(void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 convergedSpeed:(double)arg4 ;
@end

