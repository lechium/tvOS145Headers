/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSInvocation, NSObject;

@interface PHAServiceCancelableOperation : NSObject {

	NSInvocation* _invocation;
	long long _operationId;
	BOOL _cancelRequested;
	/*^block*/id _cancellationBlock;
	NSObject*<OS_dispatch_group> _completionGroup;

}
+(id)currentOperation;
+(id)operationNotFoundError:(long long)arg1 ;
-(id)description;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(long long)operationId;
-(void)setCancellationBlock:(/*^block*/id)arg1 ;
-(id)operationCanceledError:(BOOL)arg1 ;
-(id)initWithOperationId:(long long)arg1 invocation:(id)arg2 ;
-(void)enqueueOnQueue:(id)arg1 ;
-(void)endAsyncWork;
-(void)beginAsyncWork;
-(void)_startWork;
@end

