/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface PRRegulatoryAssistanceEndpoint : NSObject {

	NSObject*<OS_os_log> _logger;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _conn;

}
+(id)endpointWithQueue:(id)arg1 ;
-(void)invalidate;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initInternalWithQueue:(id)arg1 ;
-(void)provideIsoCode:(id)arg1 ;
@end

