/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Osprey/OspreyRPC.h>

@protocol OS_dispatch_queue;
@class NSObject, OspreyDeferredObject, NSString;

@interface OspreyRPCPromise : NSObject <OspreyRPC> {

	NSObject*<OS_dispatch_queue> _fulfillmentQueue;
	OspreyDeferredObject* _deferredRPC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fulfill:(id)arg1 ;
-(id)initWithFulfillmentQueue:(id)arg1 ;
-(void)unaryRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(/*^block*/id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(/*^block*/id)arg2 streamingResponseHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)serverStreamingRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(/*^block*/id)arg3 streamingResponseHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)clientStreamingRequestWithMethodName:(id)arg1 requestBuilder:(/*^block*/id)arg2 responseHandler:(/*^block*/id)arg3 ;
@end
