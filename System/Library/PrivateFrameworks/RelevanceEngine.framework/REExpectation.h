/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject;

@interface REExpectation : NSObject {

	NSObject*<OS_dispatch_group> _group;
	Ai _count;

}

@property (nonatomic,readonly) long long outstandingOperations; 
-(id)init;
-(void)endOperation;
-(void)beginOperation;
-(void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)outstandingOperations;
-(void)notifyOperationsCompleteOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end
