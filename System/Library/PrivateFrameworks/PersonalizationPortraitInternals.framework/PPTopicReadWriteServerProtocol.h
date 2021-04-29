/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PPTopicReadWriteServerProtocol
@required
-(void)clearWithCompletion:(/*^block*/id)arg1;
-(void)cloudSyncWithCompletion:(/*^block*/id)arg1;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deleteAllTopicsWithTopicId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(/*^block*/id)arg3;
-(void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 completion:(/*^block*/id)arg7;

@end

