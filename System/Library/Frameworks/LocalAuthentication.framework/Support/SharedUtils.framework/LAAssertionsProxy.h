/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LAAssertionsXPC.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface LAAssertionsProxy : NSObject <LAAssertionsXPC> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setConnection:(id)arg1 ;
-(void)setQueue:(id)arg1 ;
-(BOOL)isConnected;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)takeTouchIdAssertion:(/*^block*/id)arg1 ;
-(void)dropTouchIdAssertion:(/*^block*/id)arg1 ;
@end

