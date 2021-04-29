/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKUserNotificationServerRemoteNotificationXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSXPCConnection, NSObject, NSString;

@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject <PKUserNotificationServerRemoteNotificationXPCClient> {

	NSMutableSet* _registries;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) NSMutableSet * registries;                              //@synthesize registries=_registries - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSString *)bundleIdentifier;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)_queue_ensureConnection;
-(void)setCallOutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_interruptedConnection;
-(void)_queue_invalidatedConnection;
-(void)_queue_remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerPushRegistry:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unregisterPushRegistry:(id)arg1 ;
-(BOOL)allowsRemoteNotifications;
-(NSMutableSet *)registries;
-(void)setRegistries:(NSMutableSet *)arg1 ;
@end

