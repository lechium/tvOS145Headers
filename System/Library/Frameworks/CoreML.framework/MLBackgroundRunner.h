/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DASExtensionRunner.h>

@protocol NSObject, OS_dispatch_queue;
@class _DASActivity, MLBackgroundTask, NSObject, NSString;

@interface MLBackgroundRunner : NSObject <_DASExtensionRunner> {

	BOOL _shouldStop;
	_DASActivity* _activity;
	MLBackgroundTask* _task;
	id<NSObject> _dataSource;
	NSObject*<OS_dispatch_queue> _watchdogQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign) BOOL shouldStop;                                         //@synthesize shouldStop=_shouldStop - In the implementation block
@property (nonatomic,retain) _DASActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) MLBackgroundTask * task;                       //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) id<NSObject> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> watchdogQueue;              //@synthesize watchdogQueue=_watchdogQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned char)start;
-(void)stop;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(_DASActivity *)activity;
-(void)setActivity:(_DASActivity *)arg1 ;
-(id<NSObject>)dataSource;
-(MLBackgroundTask *)task;
-(void)setTask:(MLBackgroundTask *)arg1 ;
-(void)setDataSource:(id<NSObject>)arg1 ;
-(BOOL)prepareForActivity:(id)arg1 ;
-(BOOL)createExtensionDataSourceWithInfoKey:(id)arg1 conformingToProtocol:(id)arg2 ;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)watchdogQueue;
-(void)setWatchdogQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

