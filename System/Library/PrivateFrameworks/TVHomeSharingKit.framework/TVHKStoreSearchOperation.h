/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class NSDictionary, NSError, NSString, NSOperation;

@interface TVHKStoreSearchOperation : TVHKAsynchronousOperation {

	NSDictionary* _results;
	NSError* _error;
	NSString* _searchTerm;
	unsigned long long _searchType;
	NSOperation* _connectionRequestOperation;

}

@property (nonatomic,copy,readonly) NSString * searchTerm;                          //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) unsigned long long searchType;                       //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,retain) NSOperation * connectionRequestOperation;              //@synthesize connectionRequestOperation=_connectionRequestOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * results;                                //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
+(id)new;
+(id)_clientApplicationParameterValueForSearchType:(unsigned long long)arg1 ;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(unsigned long long)searchType;
-(NSString *)searchTerm;
-(void)_handleResponse:(id)arg1 ;
-(void)executionDidBegin;
-(id)initWithSearchTerm:(id)arg1 andType:(unsigned long long)arg2 ;
-(void)setConnectionRequestOperation:(NSOperation *)arg1 ;
-(NSOperation *)connectionRequestOperation;
@end

