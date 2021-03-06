/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class TVSBluetoothRemoteInfo, NSObject;

@interface SFSiriRemoteMonitor : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	TVSBluetoothRemoteInfo* _remoteInfo;
	NSObject*<OS_dispatch_source> _retriggerTimer;
	BOOL _shouldAdvertise;
	NSObject*<OS_dispatch_queue> _ioQueue;
	/*^block*/id _remoteConnectedHandler;
	/*^block*/id _remoteDisconnectedHandler;
	/*^block*/id _remoteInfoChangedHandler;

}

@property (nonatomic,copy,readonly) TVSBluetoothRemoteInfo * remote; 
@property (nonatomic,copy) id remoteConnectedHandler;                             //@synthesize remoteConnectedHandler=_remoteConnectedHandler - In the implementation block
@property (nonatomic,copy) id remoteDisconnectedHandler;                          //@synthesize remoteDisconnectedHandler=_remoteDisconnectedHandler - In the implementation block
@property (nonatomic,copy) id remoteInfoChangedHandler;                           //@synthesize remoteInfoChangedHandler=_remoteInfoChangedHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)cleanup;
-(TVSBluetoothRemoteInfo *)remote;
-(void)registerForNotifications;
-(void)activate:(/*^block*/id)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(void)unregisterForNotifications;
-(void)_advertiseNonConnectable:(BOOL)arg1 ;
-(void)setNumber:(id)arg1 forProperty:(id)arg2 ;
-(void)registerForNotificationNamed:(id)arg1 ;
-(void)handleRemoteDidConnect:(id)arg1 ;
-(void)handleRemoteDidDisconnect:(id)arg1 ;
-(void)handleRemotePowerSourceInfoDidChange:(id)arg1 ;
-(void)handleRemotePowerSourceLimitedSourceDidChange:(id)arg1 ;
-(void)handleRemotePresenceDidChange:(id)arg1 ;
-(void)advertiseNonConnectable:(BOOL)arg1 ;
-(id)deviceManagementDrivers;
-(void)advertiseNonConnectableDebug:(BOOL)arg1 ;
-(id)remoteConnectedHandler;
-(void)setRemoteConnectedHandler:(id)arg1 ;
-(id)remoteDisconnectedHandler;
-(void)setRemoteDisconnectedHandler:(id)arg1 ;
-(id)remoteInfoChangedHandler;
-(void)setRemoteInfoChangedHandler:(id)arg1 ;
@end

