/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class NSSet;

@interface PGMeaningQuestionFactory : PGSurveyQuestionFactory {

	NSSet* _meaningLabelsForWhichToGenerateQuestions;

}

@property (nonatomic,retain) NSSet * meaningLabelsForWhichToGenerateQuestions;              //@synthesize meaningLabelsForWhichToGenerateQuestions=_meaningLabelsForWhichToGenerateQuestions - In the implementation block
-(unsigned short)questionType;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_updateMeaningQuestionsIfNeededWithProgressBlock:(/*^block*/id)arg1 ;
-(id)_meaningLabelsByParentMeaningLabels;
-(id)_questionsToAddFromMomentNodes:(id)arg1 useCuratedAssets:(BOOL)arg2 localFactoryScore:(double)arg3 alreadyGeneratedQuestions:(id)arg4 limit:(unsigned long long)arg5 graph:(id)arg6 progressBlock:(/*^block*/id)arg7 ;
-(NSSet *)meaningLabelsForWhichToGenerateQuestions;
-(id)_looseMeaningLabelsForMomentNode:(id)arg1 fromCandidateLabels:(id)arg2 inGraph:(id)arg3 ;
-(id)_looseCriteriasForCriteria:(id)arg1 ;
-(id)_expandedDateNodesFromDateNodes:(id)arg1 ;
-(id)_expandedDateNodesFromDateNode:(id)arg1 ;
-(id)_dateNodesFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)setMeaningLabelsForWhichToGenerateQuestions:(NSSet *)arg1 ;
@end

