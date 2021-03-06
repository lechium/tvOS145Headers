/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSOrderedSet, MLFeatureDescription;

@interface MLModelInterface : NSObject <NSSecureCoding> {

	NSDictionary* _inputDescription;
	NSDictionary* _outputDescription;
	NSString* _predictedFeatureName;
	NSString* _predictedProbabilitiesName;
	NSDictionary* _trainingInputDescription;
	NSOrderedSet* _inputFeatureNames;
	NSOrderedSet* _outputFeatureNames;

}

@property (readonly) MLFeatureDescription * predictedValueFeatureDescription; 
@property (readonly) MLFeatureDescription * predictedClassFeatureDescription; 
@property (readonly) MLFeatureDescription * classProbabilityFeatureDescription; 
@property (getter=isValidRegressorInterface,readonly) BOOL validRegressorInterface; 
@property (getter=isValidClassifierInterface,readonly) BOOL validClassifierInterface; 
@property (readonly) NSDictionary * inputDescription;                                              //@synthesize inputDescription=_inputDescription - In the implementation block
@property (readonly) NSDictionary * outputDescription;                                             //@synthesize outputDescription=_outputDescription - In the implementation block
@property (readonly) NSOrderedSet * inputFeatureNames;                                             //@synthesize inputFeatureNames=_inputFeatureNames - In the implementation block
@property (readonly) NSOrderedSet * outputFeatureNames;                                            //@synthesize outputFeatureNames=_outputFeatureNames - In the implementation block
@property (readonly) NSDictionary * trainingInputDescription;                                      //@synthesize trainingInputDescription=_trainingInputDescription - In the implementation block
@property (readonly) NSString * predictedFeatureName;                                              //@synthesize predictedFeatureName=_predictedFeatureName - In the implementation block
@property (readonly) NSString * predictedProbabilitiesName;                                        //@synthesize predictedProbabilitiesName=_predictedProbabilitiesName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7 ;
+(id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 ;
+(BOOL)validateSingleFeatureInDescription:(id)arg1 withSet:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)inputDescription;
-(NSDictionary *)outputDescription;
-(NSString *)predictedFeatureName;
-(NSString *)predictedProbabilitiesName;
-(NSOrderedSet *)inputFeatureNames;
-(NSOrderedSet *)outputFeatureNames;
-(id)initWithInterfaceFormat:(MLModelDescriptionSpecification*)arg1 error:(id*)arg2 ;
-(id)initWithSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
-(id)initWithInputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7 ;
-(NSDictionary *)trainingInputDescription;
-(MLFeatureDescription *)predictedValueFeatureDescription;
-(MLFeatureDescription *)predictedClassFeatureDescription;
-(MLFeatureDescription *)classProbabilityFeatureDescription;
-(BOOL)validateRegressorInterfaceWithError:(id*)arg1 ;
-(BOOL)validateClassifierInterfaceWithError:(id*)arg1 ;
-(BOOL)isValidRegressorInterface;
-(BOOL)isValidClassifierInterface;
@end

