/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@protocol MLCustomModel;
@class MLModelDescription, MLModel, SNSystemConfiguration, NSString;

@interface SNFeaturePrintExtractor : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	id<MLCustomModel> _logMelSpectrogramModel;
	MLModelDescription* _logMelSpectrogramModelDescription;
	MLModel* _featureEmbeddingModel;
	SNSystemConfiguration* _systemConfiguration;
	int _timeDomainBlockSize;
	int _resultsToDiscardCount;
	float _overlapFactor;
	long long _featurePrintType;

}

@property (assign,nonatomic) long long featurePrintType;                        //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (assign,nonatomic) float overlapFactor;                               //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)embeddingModel;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;
-(id)initWithFeaturePrintType:(long long)arg1 overlapFactor:(float)arg2 ;
-(long long)featurePrintType;
-(void)setFeaturePrintType:(long long)arg1 ;
-(float)overlapFactor;
-(void)setOverlapFactor:(float)arg1 ;
-(void)updateGraph;
-(id)logMelSpectrogramModel;
-(id)logMelSpectrogramModelDescription;
@end

