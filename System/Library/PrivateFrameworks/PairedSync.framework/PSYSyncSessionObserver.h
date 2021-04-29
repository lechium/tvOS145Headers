/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PSYSyncSessionObserverInterface.h>

@protocol OS_dispatch_queue, PSYSyncSessionObserverDelegate;
@class PSYSyncSession, PSYSyncSessionObserverExportedObject, NSObject, NSXPCConnection, NSString;

@interface PSYSyncSessionObserver : NSObject <PSYSyncSessionObserverInterface> {

	PSYSyncSession* _currentSyncSession;
	PSYSyncSessionObserverExportedObject* _exportedObject;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	BOOL _shouldCheckinAfterInvalidationHandler;
	int _daemonDidLaunchNotifyToken;
	BOOL _resignedActive;
	id<PSYSyncSessionObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncSessionObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<PSYSyncSessionObserverDelegate>)delegate;
-(void)setDelegate:(id<PSYSyncSessionObserverDelegate>)arg1 ;
-(void)_connectionInvalidated;
-(void)willResignActive:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)_handleDaemonStarted;
-(void)_disconnectFromPairedSync;
-(void)_reconnectToPairedSync;
-(void)startObservingSyncSessionsWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)invalidateSyncSession:(id)arg1 ;
-(oneway void)updateSyncSession:(id)arg1 ;
-(oneway void)syncSessionWillStart:(id)arg1 ;
-(void)setCurrentSyncSession:(id)arg1 ;
-(id)providerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_checkin:(BOOL)arg1 ;
-(void)_queue_invalidateSyncSession:(id)arg1 ;
-(void)_queue_loadConnectionIfNeeded;
@end

