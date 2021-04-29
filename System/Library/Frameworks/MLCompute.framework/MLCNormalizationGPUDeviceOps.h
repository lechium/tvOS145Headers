/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSArray;

@interface MLCNormalizationGPUDeviceOps : MLCGPUDeviceOps {

	BOOL _isFusedWithArithmeticLayer;
	float _varianceEpsilon;
	float _momentum;
	NSArray* _normalizedShape;
	unsigned long long _groupCount;
	id _normalizationGammaGradient;
	id _normalizationBetaGradient;
	id _normalizationInverseSqrtVariance;
	id _normalizationInputNormalized;
	id _normalizationComputedMean;
	id _normalizationComputedVariance;
	id _batchNormMeanKernel;
	id _batchNormVarianceKernel;
	id _batchNormBetaGammaDeltaKernel;
	id _instanceNormMovingMeanVarianceKernel;
	id _normalizationRecomputeResultKernel;
	id _normalizationSumBetaGammaDeltaKernel;
	id _normalizationMultiGPUChildOps;

}

@property (nonatomic,retain) NSArray * normalizedShape;                            //@synthesize normalizedShape=_normalizedShape - In the implementation block
@property (assign,nonatomic) float varianceEpsilon;                                //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (assign,nonatomic) float momentum;                                       //@synthesize momentum=_momentum - In the implementation block
@property (assign,nonatomic) unsigned long long groupCount;                        //@synthesize groupCount=_groupCount - In the implementation block
@property (nonatomic,retain) id normalizationGammaGradient;                        //@synthesize normalizationGammaGradient=_normalizationGammaGradient - In the implementation block
@property (nonatomic,retain) id normalizationBetaGradient;                         //@synthesize normalizationBetaGradient=_normalizationBetaGradient - In the implementation block
@property (nonatomic,retain) id normalizationInverseSqrtVariance;                  //@synthesize normalizationInverseSqrtVariance=_normalizationInverseSqrtVariance - In the implementation block
@property (nonatomic,retain) id normalizationInputNormalized;                      //@synthesize normalizationInputNormalized=_normalizationInputNormalized - In the implementation block
@property (nonatomic,retain) id normalizationComputedMean;                         //@synthesize normalizationComputedMean=_normalizationComputedMean - In the implementation block
@property (nonatomic,retain) id normalizationComputedVariance;                     //@synthesize normalizationComputedVariance=_normalizationComputedVariance - In the implementation block
@property (nonatomic,retain) id batchNormMeanKernel;                               //@synthesize batchNormMeanKernel=_batchNormMeanKernel - In the implementation block
@property (nonatomic,retain) id batchNormVarianceKernel;                           //@synthesize batchNormVarianceKernel=_batchNormVarianceKernel - In the implementation block
@property (nonatomic,retain) id batchNormBetaGammaDeltaKernel;                     //@synthesize batchNormBetaGammaDeltaKernel=_batchNormBetaGammaDeltaKernel - In the implementation block
@property (nonatomic,retain) id instanceNormMovingMeanVarianceKernel;              //@synthesize instanceNormMovingMeanVarianceKernel=_instanceNormMovingMeanVarianceKernel - In the implementation block
@property (nonatomic,retain) id normalizationRecomputeResultKernel;                //@synthesize normalizationRecomputeResultKernel=_normalizationRecomputeResultKernel - In the implementation block
@property (nonatomic,retain) id normalizationSumBetaGammaDeltaKernel;              //@synthesize normalizationSumBetaGammaDeltaKernel=_normalizationSumBetaGammaDeltaKernel - In the implementation block
@property (nonatomic,retain) id normalizationMultiGPUChildOps;                     //@synthesize normalizationMultiGPUChildOps=_normalizationMultiGPUChildOps - In the implementation block
@property (assign,nonatomic) BOOL isFusedWithArithmeticLayer;                      //@synthesize isFusedWithArithmeticLayer=_isFusedWithArithmeticLayer - In the implementation block
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(unsigned long long)groupCount;
-(void)setGroupCount:(unsigned long long)arg1 ;
-(float)momentum;
-(void)setMomentum:(float)arg1 ;
-(float)varianceEpsilon;
-(void)setNormalizationMultiGPUChildOps:(id)arg1 ;
-(id)normalizationMultiGPUChildOps;
-(void)setVarianceEpsilon:(float)arg1 ;
-(void)setInstanceNormMovingMeanVarianceKernel:(id)arg1 ;
-(void)setNormalizationRecomputeResultKernel:(id)arg1 ;
-(void)setNormalizationSumBetaGammaDeltaKernel:(id)arg1 ;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(id)normalizationBetaGradient;
-(id)normalizationGammaGradient;
-(void)setNormalizedShape:(NSArray *)arg1 ;
-(void)setIsFusedWithArithmeticLayer:(BOOL)arg1 ;
-(void)setNormalizationGammaGradient:(id)arg1 ;
-(void)setNormalizationBetaGradient:(id)arg1 ;
-(NSArray *)normalizedShape;
-(id)normalizationInputNormalized;
-(void)setNormalizationInputNormalized:(id)arg1 ;
-(id)normalizationInverseSqrtVariance;
-(void)setNormalizationInverseSqrtVariance:(id)arg1 ;
-(id)normalizationComputedMean;
-(void)setNormalizationComputedMean:(id)arg1 ;
-(id)normalizationComputedVariance;
-(void)setNormalizationComputedVariance:(id)arg1 ;
-(id)instanceNormMovingMeanVarianceKernel;
-(id)normalizationRecomputeResultKernel;
-(id)normalizationSumBetaGammaDeltaKernel;
-(id)batchNormMeanKernel;
-(id)batchNormVarianceKernel;
-(id)batchNormBetaGammaDeltaKernel;
-(void)setBatchNormMeanKernel:(id)arg1 ;
-(void)setBatchNormVarianceKernel:(id)arg1 ;
-(void)setBatchNormBetaGammaDeltaKernel:(id)arg1 ;
-(BOOL)isFusedWithArithmeticLayer;
@end

