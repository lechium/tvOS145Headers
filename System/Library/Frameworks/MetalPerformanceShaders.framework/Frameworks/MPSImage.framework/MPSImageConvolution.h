/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@class MPSImageLaplacian;

@interface MPSImageConvolution : MPSUnaryImageKernel {

	id<MTLBuffer> wtBuffer;
	id<MTLBuffer> wtBufferh;
	float* kOrigWeights;
	float* wtArray;
	unsigned short* wtArrayh;
	unsigned long long _fWidth;
	unsigned long long _fHeight;
	float _fBias;
	BOOL separable;
	unsigned long long specialFilterType;
	MPSImageLaplacian* _laplacian;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize fHeight=_fHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize fWidth=_fWidth - In the implementation block
@property (assign,nonatomic) float bias;                                     //@synthesize fBias=_fBias - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float*)arg4 ;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(float)bias;
-(void)setBias:(float)arg1 ;
-(void)initFilterWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 weights:(const float*)arg3 ;
-(id)initWithDevice_private:(id)arg1 ;
@end

