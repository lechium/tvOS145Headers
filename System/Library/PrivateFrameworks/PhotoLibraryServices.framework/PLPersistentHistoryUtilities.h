/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLPersistentHistoryUtilities : NSObject
+(BOOL)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)oldestTransactionWithContext:(id)arg1 ;
+(id)newestTransactionWithContext:(id)arg1 ;
+(BOOL)deleteHistoryBeforeDate:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteHistoryBeforeDate:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2 withContext:(id)arg3 error:(id*)arg4 ;
+(id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2 ;
+(long long)fetchApproximateHistoryRecordCountInLibrary:(id)arg1 error:(id*)arg2 ;
@end
