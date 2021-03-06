/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue, NetDiagnosticsShimDelegate;
@class NSObject, NSString;

@interface NetDiagnosticsShim : NSObject {

	NSObject*<OS_xpc_object> _netDiagServiceConnection;
	NSObject*<OS_xpc_object> _netDiagNotificationListener;
	NSObject*<OS_xpc_object> _netDiagNotificationConnection;
	NSObject*<OS_dispatch_queue> _netDiagConnQueue;
	NSObject*<OS_dispatch_queue> _netDiagMsgQueue;
	id<NetDiagnosticsShimDelegate> _delegate;
	NSString* _taskName;

}

@property (nonatomic,retain) NSString * taskName;                                  //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,retain) id<NetDiagnosticsShimDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<NetDiagnosticsShimDelegate>)delegate;
-(void)setDelegate:(id<NetDiagnosticsShimDelegate>)arg1 ;
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(id)initWithTaskName:(id)arg1 queue:(id)arg2 ;
-(BOOL)startNetDiagnosticTaskWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateConnections;
-(BOOL)stopNetDiagnosticTaskWithReply:(/*^block*/id)arg1 ;
-(BOOL)netDiagnosticTaskStatusWithReply:(/*^block*/id)arg1 ;
-(id)_connectionForServiceNamed:(const char*)arg1 queue:(id)arg2 connectionInvalidHandler:(/*^block*/id)arg3 ;
-(id)createNotificationListener;
-(void)sendNotificationListener;
-(void)connectToNetDiagnosticsd;
@end

