/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;
@class BSObjCProtocol, BSXPCServiceConnection, NSObject;

@interface BSXPCServiceConnectionProxy : NSObject {

	BSObjCProtocol* _remoteProtocol;
	BSObjCProtocol* _localProtocol;
	BSXPCServiceConnection* _connection;
	NSObject*<OS_xpc_object> _XPCConnection;
	NSObject*<OS_dispatch_queue> _XPCConnectionTargetQueue;
	id<BSServiceDispatchingQueue> _replyQueue;

}
-(void)dealloc;
@end

