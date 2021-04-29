/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCConvolutionDescriptor : NSObject <NSCopying> {

	int _convolutionType;
	int _paddingPolicy;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _inputFeatureChannelCount;
	unsigned long long _outputFeatureChannelCount;
	unsigned long long _strideInX;
	unsigned long long _strideInY;
	unsigned long long _dilationRateInX;
	unsigned long long _dilationRateInY;
	unsigned long long _groupCount;
	unsigned long long _paddingSizeInX;
	unsigned long long _paddingSizeInY;

}

@property (assign,nonatomic) int paddingPolicy;                                           //@synthesize paddingPolicy=_paddingPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long paddingSizeInX;                           //@synthesize paddingSizeInX=_paddingSizeInX - In the implementation block
@property (assign,nonatomic) unsigned long long paddingSizeInY;                           //@synthesize paddingSizeInY=_paddingSizeInY - In the implementation block
@property (nonatomic,readonly) int convolutionType;                                       //@synthesize convolutionType=_convolutionType - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;                            //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;                           //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long inputFeatureChannelCount;               //@synthesize inputFeatureChannelCount=_inputFeatureChannelCount - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannelCount;              //@synthesize outputFeatureChannelCount=_outputFeatureChannelCount - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInX;                              //@synthesize strideInX=_strideInX - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInY;                              //@synthesize strideInY=_strideInY - In the implementation block
@property (nonatomic,readonly) unsigned long long dilationRateInX;                        //@synthesize dilationRateInX=_dilationRateInX - In the implementation block
@property (nonatomic,readonly) unsigned long long dilationRateInY;                        //@synthesize dilationRateInY=_dilationRateInY - In the implementation block
@property (nonatomic,readonly) unsigned long long groupCount;                             //@synthesize groupCount=_groupCount - In the implementation block
@property (nonatomic,readonly) BOOL isConvolutionTranspose; 
@property (nonatomic,readonly) BOOL usesDepthwiseConvolution; 
+(id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannelCount:(unsigned long long)arg3 outputFeatureChannelCount:(unsigned long long)arg4 ;
+(id)descriptorWithType:(int)arg1 kernelSizes:(id)arg2 inputFeatureChannelCount:(unsigned long long)arg3 outputFeatureChannelCount:(unsigned long long)arg4 groupCount:(unsigned long long)arg5 strides:(id)arg6 dilationRates:(id)arg7 paddingPolicy:(int)arg8 paddingSizes:(id)arg9 ;
+(id)descriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 strides:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6 ;
+(id)descriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 groupCount:(unsigned long long)arg4 strides:(id)arg5 dilationRates:(id)arg6 paddingPolicy:(int)arg7 paddingSizes:(id)arg8 ;
+(id)convolutionTransposeDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannelCount:(unsigned long long)arg3 outputFeatureChannelCount:(unsigned long long)arg4 ;
+(id)convolutionTransposeDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 strides:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6 ;
+(id)convolutionTransposeDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 groupCount:(unsigned long long)arg4 strides:(id)arg5 dilationRates:(id)arg6 paddingPolicy:(int)arg7 paddingSizes:(id)arg8 ;
+(id)depthwiseConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannelCount:(unsigned long long)arg3 channelMultiplier:(unsigned long long)arg4 ;
+(id)depthwiseConvolutionDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 channelMultiplier:(unsigned long long)arg3 strides:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6 ;
+(id)depthwiseConvolutionDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 channelMultiplier:(unsigned long long)arg3 strides:(id)arg4 dilationRates:(id)arg5 paddingPolicy:(int)arg6 paddingSizes:(id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(int)paddingPolicy;
-(void)setPaddingPolicy:(int)arg1 ;
-(unsigned long long)strideInX;
-(unsigned long long)strideInY;
-(BOOL)isConvolutionTranspose;
-(unsigned long long)groupCount;
-(unsigned long long)paddingSizeInX;
-(unsigned long long)paddingSizeInY;
-(BOOL)usesDepthwiseConvolution;
-(unsigned long long)inputFeatureChannelCount;
-(unsigned long long)outputFeatureChannelCount;
-(unsigned long long)dilationRateInX;
-(unsigned long long)dilationRateInY;
-(void)setPaddingSizeInX:(unsigned long long)arg1 ;
-(void)setPaddingSizeInY:(unsigned long long)arg1 ;
-(int)convolutionType;
-(id)initWithType:(int)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 inputFeatureChannelCount:(unsigned long long)arg4 outputFeatureChannelCount:(unsigned long long)arg5 groupCount:(unsigned long long)arg6 strideInX:(unsigned long long)arg7 strideInY:(unsigned long long)arg8 dilationRateInX:(unsigned long long)arg9 dilationRateInY:(unsigned long long)arg10 paddingPolicy:(int)arg11 paddingSizeInX:(unsigned long long)arg12 paddingSizeInY:(unsigned long long)arg13 ;
@end

