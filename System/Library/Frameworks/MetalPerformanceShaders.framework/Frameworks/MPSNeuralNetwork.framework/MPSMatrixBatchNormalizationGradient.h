/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixBatchNormalizationGradient : MPSMatrixBinaryKernel {

	int _neuronType;
	float _neuronA;
	float _neuronB;
	float _neuronC;
	float _epsilon;
	unsigned long long _sourceNumberOfFeatureVectors;
	unsigned long long _sourceInputFeatureChannels;

}

@property (assign,nonatomic) int neuronType;                                               //@synthesize neuronType=_neuronType - In the implementation block
@property (assign,nonatomic) float neuronA;                                                //@synthesize neuronA=_neuronA - In the implementation block
@property (assign,nonatomic) float neuronB;                                                //@synthesize neuronB=_neuronB - In the implementation block
@property (assign,nonatomic) float neuronC;                                                //@synthesize neuronC=_neuronC - In the implementation block
@property (assign,nonatomic) unsigned long long sourceNumberOfFeatureVectors;              //@synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long sourceInputFeatureChannels;                //@synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels - In the implementation block
@property (assign,nonatomic) float epsilon;                                                //@synthesize epsilon=_epsilon - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)sourceNumberOfFeatureVectors;
-(void)setSourceNumberOfFeatureVectors:(unsigned long long)arg1 ;
-(unsigned long long)sourceInputFeatureChannels;
-(void)setSourceInputFeatureChannels:(unsigned long long)arg1 ;
-(void)setNeuronType:(int)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 meanVector:(id)arg4 varianceVector:(id)arg5 gammaVector:(id)arg6 betaVector:(id)arg7 resultGradientForDataMatrix:(id)arg8 resultGradientForGammaVector:(id)arg9 resultGradientForBetaVector:(id)arg10 ;
-(int)neuronType;
-(float)neuronParameterA;
-(float)neuronParameterB;
-(float)neuronParameterC;
-(void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4 ;
-(float)neuronA;
-(void)setNeuronA:(float)arg1 ;
-(float)neuronB;
-(void)setNeuronB:(float)arg1 ;
-(float)neuronC;
-(void)setNeuronC:(float)arg1 ;
@end

