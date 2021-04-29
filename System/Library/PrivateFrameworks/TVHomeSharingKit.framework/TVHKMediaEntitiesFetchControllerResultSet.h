/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface TVHKMediaEntitiesFetchControllerResultSet : NSObject {

	long long _queryReason;
	NSArray* _results;
	NSDictionary* _resultByRequestIdentifier;

}

@property (nonatomic,retain) NSDictionary * resultByRequestIdentifier;              //@synthesize resultByRequestIdentifier=_resultByRequestIdentifier - In the implementation block
@property (nonatomic,readonly) long long queryReason;                               //@synthesize queryReason=_queryReason - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requests; 
@property (nonatomic,copy,readonly) NSArray * results;                              //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaEntities; 
@property (nonatomic,readonly) BOOL hasChanges; 
+(id)new;
-(id)description;
-(id)init;
-(NSArray *)results;
-(BOOL)hasChanges;
-(NSArray *)requests;
-(id)resultForRequestIdentifier:(id)arg1 ;
-(long long)queryReason;
-(id)initWithQueryReason:(long long)arg1 results:(id)arg2 ;
-(BOOL)hasMediaEntities;
-(NSDictionary *)resultByRequestIdentifier;
-(void)setResultByRequestIdentifier:(NSDictionary *)arg1 ;
@end

