/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryKernel.h>

@interface MPSNDArrayStridedSlice : MPSNDArrayUnaryKernel {

	SCD_Struct_MP4 _strides;

}

@property (assign,nonatomic) SCD_Struct_MP4 strides;              //@synthesize strides=_strides - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(SCD_Struct_MP4)strides;
-(void)setStrides:(SCD_Struct_MP4)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
-(2)stridesAtSourceIndex:(unsigned long long)arg1 ;
@end

