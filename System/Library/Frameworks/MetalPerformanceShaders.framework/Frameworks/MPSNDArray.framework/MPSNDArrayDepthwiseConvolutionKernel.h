/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayBinaryKernel.h>

@interface MPSNDArrayDepthwiseConvolutionKernel : MPSNDArrayBinaryKernel {

	MPSNDArrayConv3dOffsets_s _windowOffsets;
	MPSNDArrayConv3dSizes_s _convStrides;
	MPSNDArrayConv3dSizes_s _convDilationRates;

}

@property (assign,nonatomic) MPSNDArrayConv3dOffsets_s windowOffsets;                //@synthesize windowOffsets=_windowOffsets - In the implementation block
@property (assign,nonatomic) MPSNDArrayConv3dSizes_s convStrides;                    //@synthesize convStrides=_convStrides - In the implementation block
@property (assign,nonatomic) MPSNDArrayConv3dSizes_s convDilationRates;              //@synthesize convDilationRates=_convDilationRates - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(BOOL)supportsGradientForSourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(1)dimensionsToBeRetained;
-(MPSNDArrayConv3dOffsets_s)windowOffsets;
-(void)setWindowOffsets:(MPSNDArrayConv3dOffsets_s)arg1 ;
-(MPSNDArrayConv3dSizes_s)convStrides;
-(void)setConvStrides:(MPSNDArrayConv3dSizes_s)arg1 ;
-(MPSNDArrayConv3dSizes_s)convDilationRates;
-(void)setConvDilationRates:(MPSNDArrayConv3dSizes_s)arg1 ;
@end

