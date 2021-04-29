/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourClient.framework/SeymourClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <SeymourClient/SeymourClient.TransportServer.h>

@interface SeymourClient.XPCListener : NSObject <NSXPCListenerDelegate, SeymourClient.TransportServer> {

	 dispatchService;
	 clients;
	 listener;
	 lock;
	 requiredEntitlements;

}
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)receiveRequest:(long long)arg1 data:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)receiveEvent:(long long)arg1 data:(id)arg2 ;
-(id)init;
@end

