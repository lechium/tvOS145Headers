/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DDSManaging.h>
#import <libobjc.A.dylib/DDSManagingDelegate.h>

@protocol DDSManagingDelegate, DDSManaging, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate> {

	id<DDSManagingDelegate> _delegate;
	id<DDSManaging> _serverOverride;
	NSXPCConnection* _remoteServer;
	DDSInterface* _sharedInstance;
	id<DDSManagingDelegate> _mDelegate;
	NSObject*<OS_dispatch_queue> _connectionUsageQueue;

}

@property (nonatomic,retain) id<DDSManaging> serverOverride;                                   //@synthesize serverOverride=_serverOverride - In the implementation block
@property (nonatomic,retain) NSXPCConnection * remoteServer;                                   //@synthesize remoteServer=_remoteServer - In the implementation block
@property (nonatomic,readonly) DDSInterface * sharedInstance;                                  //@synthesize sharedInstance=_sharedInstance - In the implementation block
@property (nonatomic,retain) id<DDSManagingDelegate> mDelegate;                                //@synthesize mDelegate=_mDelegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionUsageQueue;              //@synthesize connectionUsageQueue=_connectionUsageQueue - In the implementation block
@property (nonatomic,retain) id<DDSManagingDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
+(unsigned long long)xpcConnectionOptionsForServer;
-(id)init;
-(void)dealloc;
-(id<DDSManagingDelegate>)delegate;
-(void)setDelegate:(id<DDSManagingDelegate>)arg1 ;
-(DDSInterface *)sharedInstance;
-(id)server;
-(void)createConnectionIfNecessary;
-(NSXPCConnection *)remoteServer;
-(void)setRemoteServer:(NSXPCConnection *)arg1 ;
-(id<DDSManagingDelegate>)mDelegate;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(void)removeAssertionWithID:(id)arg1 ;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)triggerDump;
-(void)triggerUpdate;
-(NSObject*<OS_dispatch_queue>)connectionUsageQueue;
-(id)syncServer;
-(void)teardownXPCConnection;
-(id<DDSManaging>)serverOverride;
-(id)serviceObjectProxy;
-(id)syncServiceObjectProxy;
-(void)setServerOverride:(id<DDSManaging>)arg1 ;
-(void)setMDelegate:(id<DDSManagingDelegate>)arg1 ;
@end

