/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class PGManager, NSObject, PGTrialSession, NSMutableDictionary, NSUbiquitousKeyValueStore;

@interface PHAQuestionController : NSObject {

	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	PGTrialSession* _trialSession;
	NSMutableDictionary* _questionTypeImportanceByQuestionType;
	NSUbiquitousKeyValueStore* _store;

}

@property (nonatomic,retain) PGManager * graphManager;                                                //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;                                //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,retain) NSUbiquitousKeyValueStore * store;                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) PGTrialSession * trialSession;                                           //@synthesize trialSession=_trialSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * questionTypeImportanceByQuestionType;              //@synthesize questionTypeImportanceByQuestionType=_questionTypeImportanceByQuestionType - In the implementation block
-(void)setStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(NSUbiquitousKeyValueStore *)store;
-(NSObject*<OS_os_log>)loggingConnection;
-(PGManager *)graphManager;
-(void)setGraphManager:(PGManager *)arg1 ;
-(id)initWithGraphManager:(id)arg1 ;
-(BOOL)generateQuestionsWithOptions:(long long)arg1 limit:(unsigned long long)arg2 progress:(/*^block*/id)arg3 ;
-(BOOL)generateQuestionsWithOptions:(long long)arg1 progress:(/*^block*/id)arg2 ;
-(void)removeCurrentKVSData;
-(id)currentQuestionsKVSData;
-(PGTrialSession *)trialSession;
-(NSMutableDictionary *)questionTypeImportanceByQuestionType;
-(id)selectedQuestionsFromSortedQuestionsByQuestionType:(id)arg1 withLimit:(unsigned long long)arg2 ;
-(void)assignScoreToQuestions:(id)arg1 ;
-(BOOL)persistQuestions:(id)arg1 ;
-(double)importanceOfQuestionType:(id)arg1 ;
-(id)questionFactoriesForOptions:(long long)arg1 ;
-(id)allQuestionFactories;
-(void)_updateInvalidQuestionsWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_syncAnsweredQuestionsWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_handleKVSQuestionsUpdateIfNeededWithProgressBlock:(/*^block*/id)arg1 ;
-(void)setTrialSession:(PGTrialSession *)arg1 ;
-(void)setQuestionTypeImportanceByQuestionType:(NSMutableDictionary *)arg1 ;
@end

