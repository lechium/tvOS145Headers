/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator {

	int _profile;

}
-(id)init;
-(id)initWithProfile:(int)arg1 ;
-(int)profile;
-(C3DFXProgramRef)_newProgramWithHashCode:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
@end
