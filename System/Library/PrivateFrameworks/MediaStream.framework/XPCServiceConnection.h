/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol XPCServiceConnectionDelegate, OS_xpc_object, NSObject, OS_dispatch_queue;
@class NSString, NSObject, XPCServiceListener;

@interface XPCServiceConnection : NSObject {

	NSString* _serviceName;
	id<XPCServiceConnectionDelegate> _delegate;
	NSObject*<OS_xpc_object> _client;
	id<NSObject> _context;
	XPCServiceListener* _serviceListener;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> client;                             //@synthesize client=_client - In the implementation block
@property (assign,nonatomic,__weak) XPCServiceListener * serviceListener;                   //@synthesize serviceListener=_serviceListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic,__weak) id<XPCServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NSObject> context;                                          //@synthesize context=_context - In the implementation block
-(id)debugDescription;
-(id<XPCServiceConnectionDelegate>)delegate;
-(void)setDelegate:(id<XPCServiceConnectionDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)resume;
-(NSObject*<OS_xpc_object>)client;
-(id<NSObject>)context;
-(void)setContext:(id<NSObject>)arg1 ;
-(NSString *)serviceName;
-(XPCServiceListener *)serviceListener;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceListener:(XPCServiceListener *)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithServiceName:(id)arg1 client:(id)arg2 queue:(id)arg3 ;
-(void)workQueueHandleIncomingMessage:(id)arg1 ;
-(void)workQueueShutDown;
@end

