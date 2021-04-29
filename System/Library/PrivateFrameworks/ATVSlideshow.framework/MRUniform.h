/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@interface MRUniform : MUPoolObject {

	float m[16];
	long long i;
	long long length;

}
+(SCD_Struct_MR15*)poolInfo;
+(BOOL)clearVars;
-(id)initWithFloat:(double)arg1 ;
-(id)initWithI:(long long)arg1 ;
-(id)initWithVec2:(double)arg1 :(double)arg2 ;
-(id)initWithVec3:(double)arg1 :(double)arg2 :(double)arg3 ;
-(id)initWithVec4:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4 ;
-(id)initWithMat4ForMat3:(float)arg1 ;
-(id)initWithMat4:(float)arg1 ;
@end

