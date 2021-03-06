/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/XPCClientConnectionDelegate.h>

@protocol XPCNSClientConnectionDelegate;
@class XPCClientConnection, NSString;

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate> {

	XPCClientConnection* _clientConnection;
	id<XPCNSClientConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) id<XPCNSClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<XPCNSClientConnectionDelegate>)delegate;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
-(void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(/*^block*/id)arg4 ;
@end

