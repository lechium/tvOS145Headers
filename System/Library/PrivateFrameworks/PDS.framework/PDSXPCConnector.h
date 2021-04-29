/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDS/PDS-Structs.h>
#import <PDS/PDSRemoteVendor.h>

@protocol PDSXPCConnection, PDSXPCHandshakeNSXPCProxyCreating, PDSRemoteNSXPCProxyCreating, PDSRemote, PDSRemoteInternalNSXPCProxyCreating, PDSRemoteInternal, PDSXPCInterfaceVendor, PDSXPCConnectionVendor;
@class NSString, NSError;

@interface PDSXPCConnector : NSObject <PDSRemoteVendor> {

	os_unfair_lock_s _lock;
	NSString* _clientID;
	id<PDSXPCConnection> _XPCConnection;
	id<PDSXPCHandshake><NSXPCProxyCreating> _handshakeProxy;
	id<PDSRemote><NSXPCProxyCreating> _remoteObject;
	id<PDSRemote> _syncRemoteObject;
	id<PDSRemoteInternal><NSXPCProxyCreating> _internalRemoteObject;
	id<PDSRemoteInternal> _syncInternalRemoteObject;
	NSError* _connectionError;
	id<PDSXPCInterfaceVendor> _interfaceVendor;
	id<PDSXPCConnectionVendor> _connectionVendor;

}

@property (nonatomic,retain) NSString * clientID;                                                         //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) id<PDSXPCConnection> XPCConnection;                                          //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<PDSXPCHandshake><NSXPCProxyCreating> handshakeProxy;                      //@synthesize handshakeProxy=_handshakeProxy - In the implementation block
@property (nonatomic,retain) id<PDSRemote><NSXPCProxyCreating> remoteObject;                              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) id<PDSRemote> syncRemoteObject;                                              //@synthesize syncRemoteObject=_syncRemoteObject - In the implementation block
@property (nonatomic,retain) id<PDSRemoteInternal><NSXPCProxyCreating> internalRemoteObject;              //@synthesize internalRemoteObject=_internalRemoteObject - In the implementation block
@property (nonatomic,retain) id<PDSRemoteInternal> syncInternalRemoteObject;                              //@synthesize syncInternalRemoteObject=_syncInternalRemoteObject - In the implementation block
@property (nonatomic,retain) NSError * connectionError;                                                   //@synthesize connectionError=_connectionError - In the implementation block
@property (nonatomic,retain) id<PDSXPCInterfaceVendor> interfaceVendor;                                   //@synthesize interfaceVendor=_interfaceVendor - In the implementation block
@property (nonatomic,retain) id<PDSXPCConnectionVendor> connectionVendor;                                 //@synthesize connectionVendor=_connectionVendor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(os_unfair_lock_s)lock;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id<PDSXPCConnection>)XPCConnection;
-(NSString *)clientID;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(id<PDSRemote><NSXPCProxyCreating>)remoteObject;
-(void)setRemoteObject:(id<PDSRemote><NSXPCProxyCreating>)arg1 ;
-(NSError *)connectionError;
-(void)setConnectionError:(NSError *)arg1 ;
-(id)initWithClientID:(id)arg1 ;
-(void)setXPCConnection:(id<PDSXPCConnection>)arg1 ;
-(id)initWithClientID:(id)arg1 interfaceVendor:(id)arg2 connectionVendor:(id)arg3 ;
-(id)_lockedRemoteObject;
-(id)_genericSyncProxyWithErrorHandler:(/*^block*/id)arg1 localStorage:(id*)arg2 remoteBlock:(/*^block*/id)arg3 ;
-(id)_genericProxyWithError:(id*)arg1 remoteBlock:(/*^block*/id)arg2 ;
-(id)_lockedRemoteInternalObject;
-(id)_lockedPerformConnectWithBlock:(/*^block*/id)arg1 ;
-(id)_lockedXPCConnection;
-(BOOL)validateConnectionWithError:(id*)arg1 ;
-(id)remoteObjectProxyWithError:(id*)arg1 ;
-(id)synchronousInternalRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)internalRemoteObjectProxyWithError:(id*)arg1 ;
-(id<PDSXPCHandshake><NSXPCProxyCreating>)handshakeProxy;
-(void)setHandshakeProxy:(id<PDSXPCHandshake><NSXPCProxyCreating>)arg1 ;
-(id<PDSRemote>)syncRemoteObject;
-(void)setSyncRemoteObject:(id<PDSRemote>)arg1 ;
-(id<PDSRemoteInternal><NSXPCProxyCreating>)internalRemoteObject;
-(void)setInternalRemoteObject:(id<PDSRemoteInternal><NSXPCProxyCreating>)arg1 ;
-(id<PDSRemoteInternal>)syncInternalRemoteObject;
-(void)setSyncInternalRemoteObject:(id<PDSRemoteInternal>)arg1 ;
-(id<PDSXPCInterfaceVendor>)interfaceVendor;
-(void)setInterfaceVendor:(id<PDSXPCInterfaceVendor>)arg1 ;
-(id<PDSXPCConnectionVendor>)connectionVendor;
-(void)setConnectionVendor:(id<PDSXPCConnectionVendor>)arg1 ;
@end

