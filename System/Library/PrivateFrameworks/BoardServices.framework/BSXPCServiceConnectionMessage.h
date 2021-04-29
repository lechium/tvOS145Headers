/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSXPCCoder.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessage.h>

@protocol BSXPCServiceConnectionMessage <BSXPCEncoding,BSXPCDecoding>
@required
-(BOOL)send;
-(id)createReply;
-(BOOL)sendSynchronously;
-(BOOL)expectsReply;

@end

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, BSServiceDispatchingQueue;
@class NSObject, NSString;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {

	int _sendFlag;
	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _completion;
	id<BSServiceDispatchingQueue> _replyQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)send;
-(id)createReply;
-(BOOL)sendSynchronously;
-(BOOL)expectsReply;
-(id)sendSynchronouslyWithError:(out id*)arg1 ;
@end

