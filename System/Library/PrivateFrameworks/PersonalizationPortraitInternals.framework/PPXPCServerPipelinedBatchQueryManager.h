/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableDictionary;

@interface PPXPCServerPipelinedBatchQueryManager : NSObject {

	long long _pipelineDepth;
	unsigned long long _pipelinedCallTimeoutNsec;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSem;
	NSMutableDictionary* _queryReplyThrottleSemaphores;
	AB _isInterrupted;

}
-(void)unblockPendingQueries;
-(id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3 ;
-(void)_unblockQueryReplyThrottleSemaphore:(id)arg1 ;
-(void)runConcurrentlyWithRequestThrottle:(/*^block*/id)arg1 ;
-(void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(/*^block*/id)arg3 sendError:(/*^block*/id)arg4 sendBatch:(/*^block*/id)arg5 ;
@end

