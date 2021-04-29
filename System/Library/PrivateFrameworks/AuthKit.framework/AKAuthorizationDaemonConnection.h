/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AKAuthorizationClientProtocol;
#import <AuthKit/AuthKit-Structs.h>
@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AKAuthorizationDaemonConnection : NSObject {

	os_unfair_lock_s _unfairLock;
	NSXPCConnection* _connection;
	id<AKAuthorizationClientProtocol> _contextManager;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2 ;
-(void)_connectionInterruptionHandler;
-(void)_connectionInvalidationHandler;
@end

