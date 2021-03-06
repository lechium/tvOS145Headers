/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCListener, DiagnosticsServiceImpl, NSObject;

@interface DiagnosticsTransport : NSObject {

	NSXPCListener* listener;
	DiagnosticsServiceImpl* service;
	NSObject*<OS_dispatch_queue> transport_queue;

}
-(id)init;
-(void)shutdown;
-(void)setListeningPort:(const char*)arg1 ;
@end

