/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNGradientKernel : MPSCNNBinaryKernel {

	long long _kernelOffsetX;
	long long _kernelOffsetY;

}

@property (assign,nonatomic) long long kernelOffsetX;              //@synthesize kernelOffsetX=_kernelOffsetX - In the implementation block
@property (assign,nonatomic) long long kernelOffsetY;              //@synthesize kernelOffsetY=_kernelOffsetY - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(void)readBinaryGradientState:(id)arg1 isSecondarySourceFilter:(BOOL)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 destinationGradients:(id)arg5 ;
-(id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 ;
-(void)readGradientState:(id)arg1 ;
-(BOOL)isStateModified;
-(long long)kernelOffsetX;
-(void)setKernelOffsetX:(long long)arg1 ;
-(long long)kernelOffsetY;
-(void)setKernelOffsetY:(long long)arg1 ;
@end

