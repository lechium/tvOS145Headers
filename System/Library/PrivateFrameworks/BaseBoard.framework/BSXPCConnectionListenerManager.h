/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSLock;

@interface BSXPCConnectionListenerManager : NSObject {

	NSObject*<OS_dispatch_queue> _listeningQueue;
	NSMutableDictionary* _services;
	NSLock* _servicesLock;
	NSObject*<OS_dispatch_queue> _defaultHandlerQueue;

}
+(id)defaultHandlerQueue;
+(void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3 ;
+(void)stopListeningForService:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

