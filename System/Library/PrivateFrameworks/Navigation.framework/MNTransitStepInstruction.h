/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction : MNTransitInstruction {

	GEOComposedRouteStep* _step;
	NSDictionary* _overridenInstructionsMapping;

}

@property (nonatomic,readonly) GEOComposedRouteStep * step;                              //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) NSDictionary * overridenInstructionsMapping;              //@synthesize overridenInstructionsMapping=_overridenInstructionsMapping - In the implementation block
+(id)instructionForStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3 ;
+(id)instructionForStep:(id)arg1 context:(long long)arg2 ;
-(GEOComposedRouteStep *)step;
-(id)instructionSet;
-(NSDictionary *)overridenInstructionsMapping;
-(id)initWithStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3 ;
@end

