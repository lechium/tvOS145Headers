/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNNullDetector : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	BOOL _graphIsDeadEnded;
	BOOL _shouldThrowException;
	unsigned _blockSize;
	double _sampleRate;
	double _computationalDutyCycle;

}

@property (assign,nonatomic) double sampleRate;                                 //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned blockSize;                                //@synthesize blockSize=_blockSize - In the implementation block
@property (assign,nonatomic) double computationalDutyCycle;                     //@synthesize computationalDutyCycle=_computationalDutyCycle - In the implementation block
@property (assign,nonatomic) BOOL graphIsDeadEnded;                             //@synthesize graphIsDeadEnded=_graphIsDeadEnded - In the implementation block
@property (assign,nonatomic) BOOL shouldThrowException;                         //@synthesize shouldThrowException=_shouldThrowException - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(double)sampleRate;
-(void)setSampleRate:(double)arg1 ;
-(unsigned)blockSize;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(void)setBlockSize:(unsigned)arg1 ;
-(id)initWithSampleRate:(double)arg1 blockSize:(unsigned)arg2 computationalDutyCycle:(double)arg3 graphIsDeadEnded:(BOOL)arg4 shouldThrowException:(BOOL)arg5 ;
-(double)computationalDutyCycle;
-(void)setComputationalDutyCycle:(double)arg1 ;
-(BOOL)graphIsDeadEnded;
-(void)setGraphIsDeadEnded:(BOOL)arg1 ;
-(BOOL)shouldThrowException;
-(void)setShouldThrowException:(BOOL)arg1 ;
@end

