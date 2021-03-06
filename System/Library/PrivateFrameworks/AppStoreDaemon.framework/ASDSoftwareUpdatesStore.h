/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDPromise, NSString;

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _hasUpdatesEntitlement;
	int _storeChangedNotificationToken;
	ASDPromise* _getUpdatesPromise;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(id)registerBadgeCountNotificationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_setupConnection;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)autoUpdateEnabled;
-(BOOL)hasEntitlement;
-(void)_call:(id)arg1 run:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)confirmAgentRequestedUpdateAll;
-(void)getManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithOrder:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesIncludingMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadForSettingsFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithJobResultsCompletionBlock:(/*^block*/id)arg1 ;
-(void)showApplicationUpdateBulletin;
@end

