/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MAStatisticsElapsedTime : NSObject {

	double _elapsedTime;
	double _elapsedStart;
	long long _elapsedCounter;
	double _lastBeginTransactionTime;
	double _lastEndTransactionTime;

}
-(id)init;
-(void)dealloc;
-(void)end;
-(void)begin;
-(double)elapsedTime;
-(double)elapsedTimeSinceLastBeginTransaction;
-(double)elapsedTimeSinceLastEndTransaction;
-(BOOL)isTransactionPending;
@end

