/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol TBFetchResponse, TBFetchRequest;
@class NSDate, TBRemoteFetchAndCacheDataSource;

@interface TBRemoteFetchAndCacheOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	id<TBFetchResponse> _response;
	id<TBFetchRequest> _fetchRequest;
	TBRemoteFetchAndCacheDataSource* _dataSource;

}

@property (nonatomic,retain) id<TBFetchRequest> fetchRequest;                           //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<TBFetchResponse> response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) TBRemoteFetchAndCacheDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)name;
-(void)setResponse:(id<TBFetchResponse>)arg1 ;
-(id<TBFetchResponse>)response;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isReady;
-(void)finish;
-(id<TBFetchRequest>)fetchRequest;
-(void)setFetchRequest:(id<TBFetchRequest>)arg1 ;
-(TBRemoteFetchAndCacheDataSource *)dataSource;
-(void)setDataSource:(TBRemoteFetchAndCacheDataSource *)arg1 ;
-(id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 ;
@end

