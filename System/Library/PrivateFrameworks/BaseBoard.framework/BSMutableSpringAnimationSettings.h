/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSSpringAnimationSettings.h>
#import <libobjc.A.dylib/BSAnimationSettingsMutating.h>

@class CAMediaTimingFunction, NSString;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings <BSAnimationSettingsMutating>

@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double epsilon; 
@property (assign,nonatomic) double initialVelocity; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelay:(double)arg1 ;
-(void)setSpeed:(float)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setInitialVelocity:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(void)setEpsilon:(double)arg1 ;
@end

