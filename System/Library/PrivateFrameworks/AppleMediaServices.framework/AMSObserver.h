/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSObserver : NSObject {

	/*^block*/id _completionBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _resultBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                 //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id resultBlock;                  //@synthesize resultBlock=_resultBlock - In the implementation block
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(id)initWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)setFailureBlock:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)failureBlock;
-(id)resultBlock;
-(void)_sendCompletionUsingQueue:(id)arg1 ;
-(void)_sendFailure:(id)arg1 usingQueue:(id)arg2 ;
-(void)_sendResult:(id)arg1 usingQueue:(id)arg2 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 ;
@end

