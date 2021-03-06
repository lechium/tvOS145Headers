/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEEarthquake, NSMutableArray;

@interface PAEBadFilm : PAEFilterDefaultBase {

	PAEEarthquake* _jitterer;
	int _cachedSeed;
	NSMutableArray* _scratches;
	PCMutex* _scratchMutex;

}
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA83*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA83*)arg1 inputInfo:(SCD_Struct_PA82)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(BOOL)variesOverTime;
-(double)autoRandomize:(double)arg1 withVariance:(double)arg2 andFrequency:(int)arg3 atTime:(/*function pointer*/void**)arg4 randCount:(int*)arg5 ;
-(void)setupScratchArrayWithAutoRandomizeFrequency:(int)arg1 andSeed:(int)arg2 withWidth:(int)arg3 andHeight:(int)arg4 atTime:(/*function pointer*/void**)arg5 ;
-(void)getBrightness:(double*)arg1 saturation:(double*)arg2 dust:(int*)arg3 scratches:(int*)arg4 scratchColor:(double*)arg5 hair:(int*)arg6 randomSeed:(int*)arg7 jitter:(double*)arg8 focus:(double*)arg9 grain:(double*)arg10 autoRandFreq:(int*)arg11 withParmsAPI:(id)arg12 atTime:(/*function pointer*/void**)arg13 ;
-(void)createDust:(int)arg1 scratches:(int)arg2 scratchColor:(double*)arg3 hair:(int)arg4 randomSeed:(int)arg5 autoRandFreq:(int)arg6 buffer:(HGBitmap*)arg7 atTime:(/*function pointer*/void**)arg8 pixelTransform:(const PCMatrix44Tmpl<double>*)arg9 ;
@end

