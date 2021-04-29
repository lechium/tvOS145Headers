/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayer.h>

@class MLCActivationDescriptor;

@interface MLCActivationLayer : MLCLayer {

	MLCActivationDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MLCActivationDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
+(id)reluLayer;
+(id)relu6Layer;
+(id)leakyReLULayer;
+(id)leakyReLULayerWithNegativeSlope:(float)arg1 ;
+(id)linearLayerWithScale:(float)arg1 bias:(float)arg2 ;
+(id)sigmoidLayer;
+(id)hardSigmoidLayer;
+(id)tanhLayer;
+(id)absoluteLayer;
+(id)softPlusLayer;
+(id)softPlusLayerWithBeta:(float)arg1 ;
+(id)softSignLayer;
+(id)eluLayer;
+(id)eluLayerWithA:(float)arg1 ;
+(id)relunLayerWithA:(float)arg1 b:(float)arg2 ;
+(id)logSigmoidLayer;
+(id)seluLayer;
+(id)celuLayer;
+(id)celuLayerWithA:(float)arg1 ;
+(id)hardShrinkLayer;
+(id)hardShrinkLayerWithA:(float)arg1 ;
+(id)softShrinkLayer;
+(id)softShrinkLayerWithA:(float)arg1 ;
+(id)tanhShrinkLayer;
+(id)thresholdLayerWithThreshold:(float)arg1 replacement:(float)arg2 ;
+(id)geluLayer;
+(id)hardSwishLayer;
+(id)clampLayerWithMinValue:(float)arg1 maxValue:(float)arg2 ;
-(id)description;
-(MLCActivationDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
@end
