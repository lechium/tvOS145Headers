/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RTTokenBucket : NSObject {

	double _fillRate;
	double _capacity;
	double _operationCost;
	double _tokenBucket;
	double _lastArrivalTime;
	double _totalInterArrivalTime;
	double _wastedTokens;
	double _totalTokensGenerated;
	double _totalTokensConsumed;
	unsigned long long _totalOperations;
	unsigned long long _operationsAllowed;
	double _interArrivalTime;
	double _lastBucketFill;

}

@property (assign,nonatomic) double lastBucketFill;                //@synthesize lastBucketFill=_lastBucketFill - In the implementation block
@property (assign,nonatomic) double interArrivalTime;              //@synthesize interArrivalTime=_interArrivalTime - In the implementation block
-(id)init;
-(void)reset;
-(id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3 ;
-(void)_replenishTokens;
-(BOOL)_consumeTokens:(unsigned long long)arg1 ;
-(BOOL)operationAllowedWithCost:(double)arg1 ;
-(double)timeIntervalUntilOperationAllowedWithCost:(double)arg1 ;
-(unsigned long long)countOfOperationsAllowedWithCost:(double)arg1 ;
-(id)initWithFillRate:(double)arg1 capacity:(double)arg2 ;
-(BOOL)operationAllowed;
-(double)timeIntervalUntilOperationAllowed;
-(unsigned long long)countOfOperationsAllowed;
-(id)dumpStatistics;
-(double)interArrivalTime;
-(void)setInterArrivalTime:(double)arg1 ;
-(double)lastBucketFill;
-(void)setLastBucketFill:(double)arg1 ;
@end

