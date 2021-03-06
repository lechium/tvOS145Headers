/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeSaving_DKKnowledgeQuerying;
@interface PHACoreDuetDatasetStorage : NSObject {

	id<_DKKnowledgeSaving><_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,readonly) id<_DKKnowledgeSaving><_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id)init;
-(id<_DKKnowledgeSaving><_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)addSample:(id)arg1 toDataset:(id)arg2 ;
-(id)samplesForDataset:(id)arg1 subset:(id)arg2 ;
-(id)_getEventStreamForDatasetName:(id)arg1 ;
@end

