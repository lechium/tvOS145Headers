/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSSoftwareUpdatesStore : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	SSXPCConnection* _connection;
	BOOL _didMigration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	void* _mobileCoreServices;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}
-(id)init;
-(void)dealloc;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
@end

