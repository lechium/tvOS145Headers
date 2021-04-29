/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SHDataStore, SHDataFetcher;
@interface SHInsightsPersistenceController : NSObject {

	id<SHDataStore> _dataStore;
	id<SHDataFetcher> _dataFetcher;

}

@property (nonatomic,readonly) id<SHDataStore> dataStore;                  //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) id<SHDataFetcher> dataFetcher;              //@synthesize dataFetcher=_dataFetcher - In the implementation block
-(id<SHDataStore>)dataStore;
-(id)initWithDataFetcher:(id)arg1 dataStore:(id)arg2 ;
-(void)queryWithCompletion:(/*^block*/id)arg1 ;
-(void)clustersForLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<SHDataFetcher>)dataFetcher;
-(void)fetchDataForCountryCode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadTargetingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAllTargeting;
@end

