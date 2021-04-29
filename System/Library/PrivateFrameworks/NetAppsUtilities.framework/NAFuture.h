/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NAPromise.h>

@class NSMutableArray, NSError, NSString;

@interface NAFuture : NSObject <NAPromise> {

	os_unfair_lock_s _lock;
	BOOL _finished;
	NSMutableArray* _completionBlocks;
	id _resultValue;
	NSError* _resultError;
	NSString* _descriptor;

}

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * descriptor;                    //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3 ;
+(void)_setShouldEnforceThreadSafety:(BOOL)arg1 ;
+(id)futureWithNoResult;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3 ;
+(id)_chainFuturesWithFutureStack:(id)arg1 ;
+(id)combineAllFutures:(id)arg1 ;
+(id)chainFutures:(id)arg1 ;
+(id)futureWithCompletionHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(NSString *)descriptor;
-(void)setDescriptor:(NSString *)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(void)didCancel;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)willAddCompletionBlock;
-(BOOL)_queue_isCancelled;
-(BOOL)finishWithNoResult;
-(id)reschedule:(id)arg1 ;
-(id)recoverIgnoringError;
@end

