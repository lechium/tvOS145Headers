/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class NSDictionary, NSString, NSMutableArray, NSMutableDictionary, MLModelConfiguration, NSURL, NSNumber, NSUserDefaults;

@interface _PSPersonalizationEvaluation : NSObject {

	NSDictionary* _recipe;
	NSString* _adaptableModelDeployPath;
	long long _adaptationStrategy;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableArray* _featureDateForAllShareEvents;
	NSMutableArray* _featureDateForShareEventsSinceLastAdaptation;
	NSMutableDictionary* _featureNameDict;
	NSMutableArray* _featureMatricesForAllShareEvents;
	NSMutableArray* _sampledFeatureVectors;
	NSMutableDictionary* _sampledFeatureVectorsForSplits;
	NSDictionary* _selectedFeaturesConfig;
	NSMutableArray* _results;
	MLModelConfiguration* _adaptableModelConfiguration;
	NSURL* _intermediateCompiledModelURL;
	NSNumber* _trainDataCount;
	NSNumber* _testDataCount;
	NSNumber* _batchSize;
	NSNumber* _topN;
	NSNumber* _epoc;
	NSNumber* _evaluationIterationCount;
	NSNumber* _testSplitPercent;
	NSNumber* _swapOK;
	NSNumber* _accuracyGainThresholdForSwap;
	NSNumber* _engagementRateGainThresholdForSwap;
	NSNumber* _minimumTestDataSizeForSwap;
	NSNumber* _numClasses;
	NSNumber* _numTrees;
	NSNumber* _maxDepth;
	NSNumber* _learningRate;
	NSNumber* _minChildWeight;
	NSNumber* _recipeID;
	NSNumber* _minSampleCountForAdaptation;
	NSUserDefaults* _psAdaptationDefaults;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                                    //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * featureDateForAllShareEvents;                              //@synthesize featureDateForAllShareEvents=_featureDateForAllShareEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * featureDateForShareEventsSinceLastAdaptation;              //@synthesize featureDateForShareEventsSinceLastAdaptation=_featureDateForShareEventsSinceLastAdaptation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * featureNameDict;                                      //@synthesize featureNameDict=_featureNameDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * featureMatricesForAllShareEvents;                          //@synthesize featureMatricesForAllShareEvents=_featureMatricesForAllShareEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * sampledFeatureVectors;                                     //@synthesize sampledFeatureVectors=_sampledFeatureVectors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sampledFeatureVectorsForSplits;                       //@synthesize sampledFeatureVectorsForSplits=_sampledFeatureVectorsForSplits - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedFeaturesConfig;                                      //@synthesize selectedFeaturesConfig=_selectedFeaturesConfig - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                                                   //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * adaptableModelConfiguration;                         //@synthesize adaptableModelConfiguration=_adaptableModelConfiguration - In the implementation block
@property (nonatomic,retain) NSURL * intermediateCompiledModelURL;                                       //@synthesize intermediateCompiledModelURL=_intermediateCompiledModelURL - In the implementation block
@property (nonatomic,retain) NSNumber * trainDataCount;                                                  //@synthesize trainDataCount=_trainDataCount - In the implementation block
@property (nonatomic,retain) NSNumber * testDataCount;                                                   //@synthesize testDataCount=_testDataCount - In the implementation block
@property (nonatomic,retain) NSNumber * batchSize;                                                       //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSNumber * topN;                                                            //@synthesize topN=_topN - In the implementation block
@property (nonatomic,retain) NSNumber * epoc;                                                            //@synthesize epoc=_epoc - In the implementation block
@property (nonatomic,retain) NSNumber * evaluationIterationCount;                                        //@synthesize evaluationIterationCount=_evaluationIterationCount - In the implementation block
@property (nonatomic,retain) NSNumber * testSplitPercent;                                                //@synthesize testSplitPercent=_testSplitPercent - In the implementation block
@property (nonatomic,retain) NSNumber * swapOK;                                                          //@synthesize swapOK=_swapOK - In the implementation block
@property (nonatomic,retain) NSNumber * accuracyGainThresholdForSwap;                                    //@synthesize accuracyGainThresholdForSwap=_accuracyGainThresholdForSwap - In the implementation block
@property (nonatomic,retain) NSNumber * engagementRateGainThresholdForSwap;                              //@synthesize engagementRateGainThresholdForSwap=_engagementRateGainThresholdForSwap - In the implementation block
@property (nonatomic,retain) NSNumber * minimumTestDataSizeForSwap;                                      //@synthesize minimumTestDataSizeForSwap=_minimumTestDataSizeForSwap - In the implementation block
@property (nonatomic,retain) NSNumber * numClasses;                                                      //@synthesize numClasses=_numClasses - In the implementation block
@property (nonatomic,retain) NSNumber * numTrees;                                                        //@synthesize numTrees=_numTrees - In the implementation block
@property (nonatomic,retain) NSNumber * maxDepth;                                                        //@synthesize maxDepth=_maxDepth - In the implementation block
@property (nonatomic,retain) NSNumber * learningRate;                                                    //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,retain) NSNumber * minChildWeight;                                                  //@synthesize minChildWeight=_minChildWeight - In the implementation block
@property (nonatomic,retain) NSNumber * recipeID;                                                        //@synthesize recipeID=_recipeID - In the implementation block
@property (nonatomic,retain) NSNumber * minSampleCountForAdaptation;                                     //@synthesize minSampleCountForAdaptation=_minSampleCountForAdaptation - In the implementation block
@property (nonatomic,retain) NSUserDefaults * psAdaptationDefaults;                                      //@synthesize psAdaptationDefaults=_psAdaptationDefaults - In the implementation block
@property (nonatomic,readonly) NSDictionary * recipe;                                                    //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,retain) NSString * adaptableModelDeployPath;                                        //@synthesize adaptableModelDeployPath=_adaptableModelDeployPath - In the implementation block
@property (assign,nonatomic) long long adaptationStrategy;                                               //@synthesize adaptationStrategy=_adaptationStrategy - In the implementation block
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSNumber *)batchSize;
-(void)setBatchSize:(NSNumber *)arg1 ;
-(void)setLearningRate:(NSNumber *)arg1 ;
-(NSNumber *)learningRate;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(NSNumber *)recipeID;
-(void)setRecipeID:(NSNumber *)arg1 ;
-(NSNumber *)maxDepth;
-(NSNumber *)numTrees;
-(NSNumber *)numClasses;
-(NSNumber *)minChildWeight;
-(void)setNumClasses:(NSNumber *)arg1 ;
-(NSDictionary *)recipe;
-(void)setAdaptableModelConfiguration:(MLModelConfiguration *)arg1 ;
-(MLModelConfiguration *)adaptableModelConfiguration;
-(NSUserDefaults *)psAdaptationDefaults;
-(void)setAdaptableModelDeployPath:(NSString *)arg1 ;
-(NSString *)adaptableModelDeployPath;
-(id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)arg1 adaptableModelDeployPath:(id)arg2 ;
-(void)setEvaluationIterationCount:(NSNumber *)arg1 ;
-(void)setTestSplitPercent:(NSNumber *)arg1 ;
-(void)setTopN:(NSNumber *)arg1 ;
-(void)setEpoc:(NSNumber *)arg1 ;
-(void)setSwapOK:(NSNumber *)arg1 ;
-(void)setAccuracyGainThresholdForSwap:(NSNumber *)arg1 ;
-(void)setEngagementRateGainThresholdForSwap:(NSNumber *)arg1 ;
-(void)setMinimumTestDataSizeForSwap:(NSNumber *)arg1 ;
-(void)setMinSampleCountForAdaptation:(NSNumber *)arg1 ;
-(void)setAdaptationStrategy:(long long)arg1 ;
-(void)setNumTrees:(NSNumber *)arg1 ;
-(void)setMaxDepth:(NSNumber *)arg1 ;
-(void)setMinChildWeight:(NSNumber *)arg1 ;
-(void)setParametersFromRecipe;
-(id)loadDefaultModel;
-(void)setSelectedFeaturesConfig:(NSDictionary *)arg1 ;
-(void)processData;
-(NSMutableArray *)featureMatricesForAllShareEvents;
-(BOOL)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)arg1 ;
-(NSNumber *)evaluationIterationCount;
-(id)loadAdaptableModelUnderDirectory:(id)arg1 ;
-(void)sampleFromDataWithSeed:(int)arg1 ;
-(NSMutableArray *)sampledFeatureVectors;
-(NSNumber *)minSampleCountForAdaptation;
-(void)getSamplesWithTestSplitPercentWithSeed:(int)arg1 ;
-(NSMutableDictionary *)sampledFeatureVectorsForSplits;
-(void)setTestDataCount:(NSNumber *)arg1 ;
-(void)setTrainDataCount:(NSNumber *)arg1 ;
-(NSNumber *)testDataCount;
-(NSNumber *)trainDataCount;
-(NSURL *)intermediateCompiledModelURL;
-(id)updateMLModelWithURL:(id)arg1 overDataSplit:(id)arg2 ;
-(id)evaluateClassicMLModel:(id)arg1 ;
-(id)engagementSimulationWithMLModel:(id)arg1 mlModelType:(id)arg2 labelName:(id)arg3 ;
-(NSNumber *)swapOK;
-(NSNumber *)accuracyGainThresholdForSwap;
-(NSNumber *)engagementRateGainThresholdForSwap;
-(NSNumber *)minimumTestDataSizeForSwap;
-(BOOL)cloneAdaptableModel:(id)arg1 toFilePath:(id)arg2 originalXgboostModelName:(id)arg3 clonedXgboostModelName:(id)arg4 ;
-(long long)adaptationStrategy;
-(void)updateAdaptableModelConfigWithUpdateType:(long long)arg1 numTrees:(id)arg2 ;
-(void)setIntermediateCompiledModelURL:(NSURL *)arg1 ;
-(void)setFeatureMatricesForAllShareEvents:(NSMutableArray *)arg1 ;
-(void)setFeatureDateForAllShareEvents:(NSMutableArray *)arg1 ;
-(NSDictionary *)selectedFeaturesConfig;
-(void)setFeatureNameDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)featureNameDict;
-(NSMutableArray *)featureDateForAllShareEvents;
-(void)setSampledFeatureVectors:(NSMutableArray *)arg1 ;
-(unsigned long long)bucketedValue:(unsigned long long)arg1 ;
-(void)setSampledFeatureVectorsForSplits:(NSMutableDictionary *)arg1 ;
-(NSNumber *)testSplitPercent;
-(id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1 forMLModel:(id)arg2 ;
-(NSNumber *)topN;
-(id)createMLFeatureProviderInstanceForMLModelType:(id)arg1 forFeatureVector:(id)arg2 ;
-(id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2 ;
-(id)measureTestAccuracyOf:(id)arg1 againstTrueValuesOf:(id)arg2 labelName:(id)arg3 ;
-(NSNumber *)epoc;
-(void)adaptMLModel:(id)arg1 overDataSplit:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4 ;
-(id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4 ;
-(void)adaptMLModel:(id)arg1 withTrainingData:(id)arg2 ;
-(id)initWithRecipe:(id)arg1 knowledgeStore:(id)arg2 ;
-(void)setLastDayOfAdaptation:(id)arg1 ;
-(id)runAdaptationAndEvaluation;
-(NSMutableArray *)featureDateForShareEventsSinceLastAdaptation;
-(void)setFeatureDateForShareEventsSinceLastAdaptation:(NSMutableArray *)arg1 ;
-(void)setPsAdaptationDefaults:(NSUserDefaults *)arg1 ;
@end
