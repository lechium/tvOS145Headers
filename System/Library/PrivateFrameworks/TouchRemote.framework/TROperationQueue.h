/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TROperationQueue : NSOperationQueue {

	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _cancellationQ;

}

@property (getter=isCancelled) BOOL cancelled;                                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cancellationQ;              //@synthesize cancellationQ=_cancellationQ - In the implementation block
-(id)init;
-(void)invalidate;
-(void)addOperation:(id)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCancelled;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)setCancelled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)cancellationQ;
-(void)setCancellationQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

