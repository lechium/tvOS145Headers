/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPContactClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPContactClient : NSObject <PPContactClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(id)init;
-(id)_remoteObjectProxy;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unblockPendingQueries;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)rankedContactsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)contactHandlesForTopicsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)contactHandlesForSourceBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)contactNameRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)contactNameRecordChangesBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(BOOL)contactHandlesForTopics:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(BOOL)contactHandlesForSource:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(BOOL)contactNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
@end

