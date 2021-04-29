/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationRandomUniform : MPSNDArrayInitialization {

	float _minimum;
	float _maximum;

}

@property (nonatomic,readonly) float minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) float maximum;              //@synthesize maximum=_maximum - In the implementation block
-(float)minimum;
-(float)maximum;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)initWithDevice:(id)arg1 minimum:(float)arg2 maximum:(float)arg3 seed:(unsigned long long)arg4 ;
@end

