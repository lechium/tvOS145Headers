/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MTLTexture;
@class MPSImageBox3D, MPSImageBilinearScale, NSArray;

@interface MPSImageSpatioTemporalGuidedFilter : MPSKernel {

	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _arrayLength;
	unsigned long long _kernelSpatialDiameter;
	unsigned long long _kernelTemporalDiameter;
	float _epsilon;
	unsigned long long _sourceChannels;
	unsigned long long _guideChannels;
	BOOL _preallocateIntermediates;
	BOOL _useFloatIntermediates;
	BOOL _supportsReadWriteTextures;
	MPSImageBox3D* _boxFilter;
	MPSImageBilinearScale* _bilinearScaler;
	id<MTLTexture> _guideStack;
	NSArray* _sourceStackArray;
	id<MTLTexture> _mean_guideStack;
	id<MTLTexture> _mean_sourceStack;
	NSArray* _var_I;
	id<MTLTexture> _constraints;
	NSArray* _coefficientsTextureArray;
	unsigned long long _preallocatedSize;

}

@property (nonatomic,readonly) unsigned long long preallocatedSize;              //@synthesize preallocatedSize=_preallocatedSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)allocateResourcesWithDevice:(id)arg1 ;
-(id)allocateIntermediateTextureWithDevice:(id)arg1 textureDescriptor:(id)arg2 ;
-(void)validateCoefficientsTextures:(id)arg1 ;
-(void)encodeShiftOn:(id)arg1 textureArray:(id)arg2 by:(unsigned long long)arg3 ;
-(void)encodeDownsamplingOn:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 constraintsTexture:(id)arg3 coefficientsTextureArray:(id)arg4 destinationTexture:(id)arg5 ;
-(id)newTemporaryIntermediate:(id)arg1 texture:(id)arg2 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTextureArray:(id)arg3 destinationTextureArray:(id)arg4 ;
-(void)encodeRegressionToCommandBuffer:(id)arg1 sourceTextureArray:(id)arg2 guidanceTexture:(id)arg3 constraintsTextureArray:(id)arg4 numberOfIterations:(unsigned long long)arg5 destinationCoefficientsTextureArray:(id)arg6 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 constraintsTextureArray:(id)arg3 coefficientsTextureArray:(id)arg4 destinationTextureArray:(id)arg5 ;
-(id)initWithDevice:(id)arg1 filterDescriptor:(id)arg2 ;
-(void)compileKernels;
-(void)encodeToCommandBuffer:(id)arg1 sourceTextureArray:(id)arg2 guidanceTexture:(id)arg3 constraintsTextureArray:(id)arg4 numberOfIterations:(unsigned long long)arg5 destinationTextureArray:(id)arg6 ;
-(unsigned long long)preallocatedSize;
@end

