/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	long long _status;
	NSError* _error;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(long long)statusOfOperations:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(long long)status;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(BOOL)evaluateDependenciesAndMarkAsExecuting;
-(void)markAsCancelled;
-(void)didEnterTerminalState;
-(BOOL)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4 ;
@end
