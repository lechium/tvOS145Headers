/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface WLKAppInstaller : NSObject {

	NSObject*<OS_dispatch_queue> _installQueue;
	NSMutableSet* _installSessions;

}
+(id)defaultAppInstaller;
-(id)init;
-(void)installAppForInstallable:(id)arg1 offer:(id)arg2 progressHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)installAppForInstallable:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

