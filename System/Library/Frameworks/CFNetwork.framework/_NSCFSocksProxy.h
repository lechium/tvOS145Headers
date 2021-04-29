/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSProxyConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, __CFN_SocksHandshake, NSProxyConnection, NSDictionary;

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	int _outPort;
	NSString* _outHost;
	__CFN_SocksHandshake* _socksHandshake;
	NSProxyConnection* _inbound;
	NSProxyConnection* _outbound;
	NSDictionary* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3 ;
-(void)dealloc;
-(void)connected:(int)arg1 ;
-(void)cleanup;
-(void)outboundConnectionReceivedData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)outboundConnectionCompleteWithError:(int)arg1 ;
@end
