/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@interface MURandom : MUPoolObject {

	long long _state[31];
	long long* _frontPtr;
	long long* _rearPtr;
	long long* _endPtr;

}
+(id)randomGeneratorWithSeed:(unsigned long long)arg1 ;
+(SCD_Struct_MR15*)poolInfo;
+(BOOL)clearVars;
-(long long)randomInt;
-(double)randomFloatInRange:(double)arg1 :(double)arg2 ;
-(void)_seed:(unsigned long long)arg1 ;
@end

