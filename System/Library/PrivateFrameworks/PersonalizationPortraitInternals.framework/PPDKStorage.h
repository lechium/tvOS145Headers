/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class _PASLock, NSObject;

@interface PPDKStorage : NSObject {

	_PASLock* _entityLock;
	_PASLock* _topicLock;
	NSObject*<OS_dispatch_semaphore> _entityWriteSem;
	NSObject*<OS_dispatch_semaphore> _topicWriteSem;

}

@property (nonatomic,readonly) double topicStreamCooldownTimeRemaining; 
@property (nonatomic,readonly) double entityStreamCooldownTimeRemaining; 
+(id)sharedInstance;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(id)entityStream;
-(id)topicStream;
-(BOOL)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(id)tombstoneStream;
-(unsigned)readBatchSize;
-(unsigned)topicWriteBatchSize;
-(double)topicWriteBatchInterval;
-(unsigned)namedEntityWriteBatchSize;
-(double)namedEntityWriteBatchInterval;
-(double)topicStreamCooldownTimeRemaining;
-(double)entityStreamCooldownTimeRemaining;
-(id)_readWriteKnowledgeStore;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 error:(id*)arg5 block:(/*^block*/id)arg6 ;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 readMetaData:(BOOL)arg5 remoteOnly:(BOOL)arg6 error:(id*)arg7 block:(/*^block*/id)arg8 ;
-(BOOL)saveEvents:(id)arg1 stream:(id)arg2 maxRetries:(long long)arg3 retryInterval:(double)arg4 shouldContinueBlock:(/*^block*/id)arg5 ;
-(BOOL)_saveTopicEvents:(id)arg1 maxRetries:(long long)arg2 retryInterval:(double)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
-(BOOL)_saveTopicEvents:(id)arg1 ;
-(BOOL)_saveEntityEvents:(id)arg1 maxRetries:(long long)arg2 retryInterval:(double)arg3 shouldContinueBlock:(/*^block*/id)arg4 ;
-(BOOL)_saveEntityEvents:(id)arg1 ;
-(BOOL)deleteEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllEventsInEventStream:(id)arg1 matchingPredicate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isFutureCompatibilityVersionAttachedToEvent:(id)arg1 ;
-(id)namedEntityRecordFromEvent:(id)arg1 ;
-(id)eventForNamedEntityRecord:(id)arg1 sourceDeviceID:(id)arg2 ;
-(id)topicRecordFromEvent:(id)arg1 ;
-(id)eventForTopicRecord:(id)arg1 sourceDeviceID:(id)arg2 ;
-(id)registerForNamedEntitiesRemoteAdditionWithBlock:(/*^block*/id)arg1 ;
-(id)registerForNamedEntitiesRemoteDeletionWithBlock:(/*^block*/id)arg1 ;
-(id)registerForTopicsRemoteAdditionWithBlock:(/*^block*/id)arg1 ;
-(id)registerForTopicsRemoteDeletionWithBlock:(/*^block*/id)arg1 ;
-(void)_registerForSyncNotifications;
@end

