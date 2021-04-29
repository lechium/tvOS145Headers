/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>
#import <libobjc.A.dylib/DatabaseChangeHandling.h>
#import <CalendarDaemon/CalActivatable.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, NSMutableSet, NSLock, NSArray, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	NSArray* _signalSensors;
	BOOL _initializationFinished;
	BOOL _active;
	NSArray* _modules;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _alarmQueue;

}

@property (nonatomic,retain) NSArray * modules;                                      //@synthesize modules=_modules - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> alarmQueue;              //@synthesize alarmQueue=_alarmQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)activate;
-(BOOL)isActive;
-(void)deactivate;
-(void)setActive:(BOOL)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)modules;
-(void)setModules:(NSArray *)arg1 ;
-(void)clientConnectionDied:(id)arg1 ;
-(id)initWithModules:(id)arg1 ;
-(void)_enableICloudBackups;
-(void)_setUpSignalHandlers;
-(void)_finishInitializationWithDataAvailable;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerMaintenanceActivities;
-(void)_tearDownSignalHandlers;
-(void)_registerForAlarmEvents;
-(void)_registerForNotifications;
-(void)_deactivateAndExitWithStatus:(int)arg1 ;
-(void)_dumpState;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)_protectedDataDidBecomeAvailable;
-(NSObject*<OS_dispatch_queue>)alarmQueue;
-(void)_registerForDatabaseCleanup;
-(void)_registerForAnalyticsCollection;
-(void)_registerForAttachmentCleanup;
-(void)_registerForChangeTableCleanup;
-(void)cleanupDatabase:(CalDatabase*)arg1 ;
-(void)_registerActivityWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(void)_cleanupChangeTablesInDatabase:(CalDatabase*)arg1 ;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_handleDatabaseChanged;
@end

