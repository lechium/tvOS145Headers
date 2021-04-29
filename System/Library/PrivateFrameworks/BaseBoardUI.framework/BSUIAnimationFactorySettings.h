/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface BSUIAnimationFactorySettings : PTSettings {

	BOOL _slowAnimations;
	double _slowDownFactor;

}

@property (assign,nonatomic) BOOL slowAnimations;                //@synthesize slowAnimations=_slowAnimations - In the implementation block
@property (assign,nonatomic) double slowDownFactor;              //@synthesize slowDownFactor=_slowDownFactor - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)effectiveSlowDownFactor;
-(void)setSlowAnimations:(BOOL)arg1 ;
-(void)setSlowDownFactor:(double)arg1 ;
-(BOOL)slowAnimations;
-(double)slowDownFactor;
@end

