/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLModeling.h>

@class MLModelInterface, MLModelMetadata, MLFairPlayDecryptSession, MLModelDescription, MLModelConfiguration;

@interface MLModel : NSObject <MLModeling> {

	MLModelInterface* _interface;
	MLModelMetadata* _metadata;
	MLFairPlayDecryptSession* _decryptSession;
	MLModelDescription* _modelDescription;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,retain) MLModelDescription * modelDescription;                  //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MLFairPlayDecryptSession * decryptSession;              //@synthesize decryptSession=_decryptSession - In the implementation block
@property (readonly) MLModelInterface * interface;                                   //@synthesize interface=_interface - In the implementation block
@property (readonly) MLModelMetadata * metadata;                                     //@synthesize metadata=_metadata - In the implementation block
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)serializeInterfaceAndMetadata:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)predictionsFromLoopingOverBatch:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)predictionsFromSubbatchingBatch:(id)arg1 maxSubbatchLength:(long long)arg2 predictionBlock:(/*^block*/id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)compileModelWithoutAutoreleaseAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_compileModelAtURL:(id)arg1 error:(id*)arg2 ;
+(id)compileModelAtURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(MLModelInterface *)interface;
-(MLModelConfiguration *)configuration;
-(void)setConfiguration:(MLModelConfiguration *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(MLModelMetadata *)metadata;
-(id)debugQuickLookObject;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)executionSchedule;
-(void)setModelPath:(id)arg1 modelName:(id)arg2 ;
-(id)modelPath;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)objectBoundingBoxOutputDescription;
-(id)initInterfaceAndMetadataWithCompiledArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
-(id)visionFeaturePrintInfo;
-(id)initWithDescription:(id)arg1 ;
-(id)initWithDescription:(id)arg1 configuration:(id)arg2 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 ;
-(id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6 ;
-(MLFairPlayDecryptSession *)decryptSession;
-(void)setDecryptSession:(MLFairPlayDecryptSession *)arg1 ;
-(id)vectorizeInput:(id)arg1 error:(id*)arg2 ;
@end

