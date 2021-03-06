/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MLModelDescription, MLModelInterface, MLModelMetadata;


@protocol MLModeling
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
@required
-(MLModelInterface *)interface;
-(MLModelMetadata *)metadata;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)executionSchedule;
-(void)setModelPath:(id)arg1 modelName:(id)arg2;
-(id)modelPath;
-(void)setModelDescription:(id)arg1;

@end

