/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext, UIKeyboardTaskEntry, NSArray;

@interface UIKeyboardTaskQueue : NSObject {

	BOOL _executingOnMainThread;
	NSConditionLock* _lock;
	NSMutableArray* _tasks;
	NSMutableArray* _deferredTasks;
	UIKeyboardTaskExecutionContext* _executionContext;
	UIKeyboardTaskEntry* _mainThreadContinuation;
	NSArray* _activeOriginator;

}

@property (nonatomic,retain) UIKeyboardTaskExecutionContext * executionContext;              //@synthesize executionContext=_executionContext - In the implementation block
@property (nonatomic,retain) NSArray * activeOriginator;                                     //@synthesize activeOriginator=_activeOriginator - In the implementation block
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(UIKeyboardTaskExecutionContext *)executionContext;
-(void)setExecutionContext:(UIKeyboardTaskExecutionContext *)arg1 ;
-(void)performTask:(/*^block*/id)arg1 ;
-(void)addTask:(/*^block*/id)arg1 ;
-(void)performSingleTask:(/*^block*/id)arg1 ;
-(void)waitUntilAllTasksAreFinished;
-(void)addDeferredTask:(/*^block*/id)arg1 ;
-(BOOL)isMainThreadExecutingTask;
-(id)scheduleTask:(/*^block*/id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 ;
-(void)finishExecution;
-(void)performTaskOnMainThread:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(NSArray *)activeOriginator;
-(void)continueExecutionOnMainThread;
-(BOOL)tryLockWhenReadyForMainThread;
-(void)setActiveOriginator:(NSArray *)arg1 ;
-(void)performDeferredTaskIfIdle;
-(void)lockWhenReadyForMainThread;
-(void)promoteDeferredTaskIfIdle;
-(id)addAndReturnTask:(/*^block*/id)arg1 ;
-(void)waitUntilTaskIsFinished:(id)arg1 ;
@end

