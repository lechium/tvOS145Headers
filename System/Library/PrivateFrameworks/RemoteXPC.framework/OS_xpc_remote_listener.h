/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_listener : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	int type;
	/*^block*/id accept_handler;
	/*^block*/id cancel_handler;
	BOOL canceled;

}
-(void)dealloc;
@end

