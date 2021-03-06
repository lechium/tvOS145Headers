/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSCondition;

@interface PFAsyncTaskBarrier : NSObject {

	NSString* _label;
	long long _remainingTaskCount;
	/*^block*/id _completionBlock;
	NSArray* _errors;
	NSCondition* _conditionLock;

}

@property (readonly) NSCondition * conditionLock;               //@synthesize conditionLock=_conditionLock - In the implementation block
@property (retain) NSArray * errors;                            //@synthesize errors=_errors - In the implementation block
@property (readonly) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (readonly) long long remainingTaskCount;              //@synthesize remainingTaskCount=_remainingTaskCount - In the implementation block
@property (copy,readonly) id completionBlock;                   //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)description;
-(id)completionBlock;
-(NSString *)label;
-(NSArray *)errors;
-(void)waitUntilCompleted;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithLabel:(id)arg1 taskCount:(long long)arg2 ;
-(id)initWithLabel:(id)arg1 taskCount:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)waitUntilCompletedOrError;
-(void)taskCompleted;
-(void)taskCompletedWithCriticalBlock:(/*^block*/id)arg1 ;
-(void)taskCompletedWithError:(id)arg1 ;
-(void)taskCompletedWithError:(id)arg1 criticalBlock:(/*^block*/id)arg2 ;
-(void)taskCompletedWithErrors:(id)arg1 ;
-(void)taskCompletedWithErrors:(id)arg1 criticalBlock:(/*^block*/id)arg2 ;
-(void)changeRemainingTaskCount:(long long)arg1 ;
-(void)setRemainingTaskCount:(long long)arg1 ;
-(void)executeCriticalBlock:(/*^block*/id)arg1 ;
-(long long)remainingTaskCount;
-(NSCondition *)conditionLock;
@end

