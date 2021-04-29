/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject {

	NSMutableArray* _workInfosQueue;
	unsigned long long _fetchLimit;

}

@property (assign,nonatomic) unsigned long long fetchLimit;                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long queueCount; 
-(id)init;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(unsigned long long)queueCount;
@end

