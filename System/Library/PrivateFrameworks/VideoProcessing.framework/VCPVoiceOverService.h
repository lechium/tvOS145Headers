/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPVoiceOverClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface VCPVoiceOverService : NSObject <VCPVoiceOverClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	int _nextRequestID;

}
+(id)service;
+(id)errorWithDescription:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(id)connection;
-(int)requestProcessingViaXPC:(id)arg1 ofPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestProcessing:(id)arg1 ofPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
@end
