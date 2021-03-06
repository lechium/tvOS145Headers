/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REHTTPConnectionDelegate.h>

@protocol OS_dispatch_queue, REHTTPServerDelegate;
@class NSObject, NSMutableArray;

@interface REHTTPServer : NSObject <REHTTPConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CFHTTPServerRef _server;
	NSMutableArray* _connections;
	unsigned short _port;
	id<REHTTPServerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned short port;                            //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) id<REHTTPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<REHTTPServerDelegate>)delegate;
-(unsigned short)port;
-(BOOL)_valid;
-(void)invalidated;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didRecievedError:(id)arg1 ;
-(void)didOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)didCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
@end

