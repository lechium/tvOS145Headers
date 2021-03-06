/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class IDSXPCConnection, NSObject, NSMutableDictionary, NSMapTable;

@interface IDSXPCDaemonController : NSObject {

	IDSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _collaboratorPromiseDictionary;
	BOOL _sync;
	NSMutableDictionary* _syncCollaboratorDictionary;
	NSMapTable* _interruptionHandlerByTarget;

}

@property (nonatomic,retain) IDSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * collaboratorPromiseDictionary;              //@synthesize collaboratorPromiseDictionary=_collaboratorPromiseDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * syncCollaboratorDictionary;                 //@synthesize syncCollaboratorDictionary=_syncCollaboratorDictionary - In the implementation block
@property (nonatomic,retain) NSMapTable * interruptionHandlerByTarget;                         //@synthesize interruptionHandlerByTarget=_interruptionHandlerByTarget - In the implementation block
+(id)weakSharedInstance;
+(void)performDaemonControllerTask:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSXPCConnection *)connection;
-(void)setConnection:(IDSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)pairingCollaboratorWithErrorHandler:(/*^block*/id)arg1 ;
-(void)performTask:(/*^block*/id)arg1 ;
-(id)pairedDeviceManagerCollaboratorWithErrorHandler:(/*^block*/id)arg1 ;
-(id)registrationCollaboratorWithErrorHandler:(/*^block*/id)arg1 ;
-(id)reunionSyncCollaboratorWithErrorHandler:(/*^block*/id)arg1 ;
-(id)pairingCollaboratorWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)_initWithQueue:(id)arg1 isSync:(BOOL)arg2 ;
-(NSMutableDictionary *)collaboratorPromiseDictionary;
-(NSMutableDictionary *)syncCollaboratorDictionary;
-(NSMapTable *)interruptionHandlerByTarget;
-(id)_daemonProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_collaboratorWithIdentifier:(id)arg1 interface:(id)arg2 timeout:(double)arg3 errorHandler:(/*^block*/id)arg4 resolverBlock:(/*^block*/id)arg5 ;
-(id)_sync_collaboratorWithIdentifier:(id)arg1 errorHandler:(/*^block*/id)arg2 resolverBlock:(/*^block*/id)arg3 ;
-(id)_timingOutDaemonProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initSyncControllerWithQueue:(id)arg1 ;
-(id)opportunisticCollaboratorWithErrorHandler:(/*^block*/id)arg1 ;
-(id)activityMonitorCollaboratorWithErrorHandler:(/*^block*/id)arg1 ;
-(id)interalTestingCollaboratorWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addInterruptionHandler:(/*^block*/id)arg1 forTarget:(id)arg2 ;
-(void)removeInterruptionHandlerForTarget:(id)arg1 ;
-(void)setCollaboratorPromiseDictionary:(NSMutableDictionary *)arg1 ;
-(void)setSyncCollaboratorDictionary:(NSMutableDictionary *)arg1 ;
-(void)setInterruptionHandlerByTarget:(NSMapTable *)arg1 ;
@end

