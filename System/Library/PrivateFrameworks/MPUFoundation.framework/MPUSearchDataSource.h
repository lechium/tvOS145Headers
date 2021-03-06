/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSOperationQueue, _MPUSearchOperation, NSArray, MPUQueryDataSource, NSString;

@interface MPUSearchDataSource : MPUQueryDataSource {

	NSOperationQueue* _operationQueue;
	_MPUSearchOperation* _searchOperation;
	NSArray* _searchResults;
	MPUQueryDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,readonly) MPUQueryDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * searchString;                      //@synthesize searchString=_searchString - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(id)entities;
-(MPUQueryDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(NSString *)searchString;
-(id)initWithDataSource:(id)arg1 operationQueue:(id)arg2 ;
-(void)filterResultsUsingSearchString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_searchPropertiesForGroupingType:(long long)arg1 ;
-(void)filterResultsUsingSearchString:(id)arg1 ;
-(void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2 ;
@end

