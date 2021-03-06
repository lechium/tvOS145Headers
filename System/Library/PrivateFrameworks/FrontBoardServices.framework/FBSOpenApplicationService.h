/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection;

@interface FBSOpenApplicationService : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	BSServiceConnection* _connection;

}
+(id)new;
+(id)serviceName;
+(id)serviceWithDefaultShellEndpoint;
+(id)serviceWithEndpoint:(id)arg1 ;
+(BOOL)currentProcessServicesDefaultShellEndpoint;
-(id)init;
-(void)dealloc;
-(BOOL)canOpenApplication:(id)arg1 reason:(long long*)arg2 ;
-(id)_initWithEndpoint:(id)arg1 ;
-(void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteTarget;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

