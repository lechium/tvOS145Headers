/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class MLCTensor, MPSCNNConvolutionDescriptor, MLCConvolutionDescriptor, MLCActivationDescriptor, NSString;

@interface _MLCGPUWeightsConvolution : NSObject <NSCopying, MPSCNNConvolutionDataSource> {

	MLCTensor* _weight;
	MLCTensor* _localWeight;
	MLCTensor* _localBiasTerm;
	MPSCNNConvolutionDescriptor* _descMPS;
	MLCConvolutionDescriptor* _desc;
	MLCActivationDescriptor* _neuronDesc;
	MLCTensor* _biasTerm;

}

@property (nonatomic,readonly) MPSCNNConvolutionDescriptor * descMPS;              //@synthesize descMPS=_descMPS - In the implementation block
@property (nonatomic,readonly) MLCConvolutionDescriptor * desc;                    //@synthesize desc=_desc - In the implementation block
@property (nonatomic,readonly) MLCActivationDescriptor * neuronDesc;               //@synthesize neuronDesc=_neuronDesc - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * biasTerm;                        //@synthesize biasTerm=_biasTerm - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * weight;                          //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) MLCTensor * localWeight;                              //@synthesize localWeight=_localWeight - In the implementation block
@property (nonatomic,retain) MLCTensor * localBiasTerm;                            //@synthesize localBiasTerm=_localBiasTerm - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weightWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 neuronDescriptor:(id)arg4 ;
+(id)weightWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 ;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)label;
-(id)descriptor;
-(MLCTensor *)weight;
-(unsigned)dataType;
-(void)purge;
-(void*)weights;
-(float*)biasTerms;
-(unsigned)weightsLayout;
-(unsigned)kernelWeightsDataType;
-(MLCConvolutionDescriptor *)desc;
-(id)initWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 neuronDescriptor:(id)arg4 ;
-(MPSCNNConvolutionDescriptor *)descMPS;
-(MLCTensor *)biasTerm;
-(MLCActivationDescriptor *)neuronDesc;
-(MLCTensor *)localWeight;
-(void)setLocalWeight:(MLCTensor *)arg1 ;
-(MLCTensor *)localBiasTerm;
-(void)setLocalBiasTerm:(MLCTensor *)arg1 ;
@end

