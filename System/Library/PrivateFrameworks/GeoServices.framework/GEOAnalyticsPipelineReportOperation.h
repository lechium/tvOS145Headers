/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOAnalyticsPipelineRemoteProxy;

@interface GEOAnalyticsPipelineReportOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	id _transaction;
	NSObject*<OS_dispatch_queue> _runQueue;
	GEOAnalyticsPipelineRemoteProxy* _remoteProxy;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completionBlock;

}
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_completeOperation;
@end
