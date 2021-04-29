/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString, NSArray, MLAppleImageFeatureExtractorParameters;

@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader> {

	NSString* _inputFeatureName;
	NSArray* _outputFeatureName;
	long long _outputDataType;
	int _extractorType;
	MLAppleImageFeatureExtractorParameters* _parameters;

}

@property (readonly) MLAppleImageFeatureExtractorParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(MLAppleImageFeatureExtractorParameters *)parameters;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 featureExtractorType:(int)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(id)computeScenePrintFeatures:(CVBufferRef)arg1 handle:(id)arg2 useCPUOnly:(BOOL)arg3 error:(id*)arg4 ;
-(id)featureValueFromObjectPrint:(id)arg1 key:(id)arg2 shape:(id)arg3 ;
@end
