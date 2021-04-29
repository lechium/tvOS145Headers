/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol NAScheduler;
@class MTXPCConnectionInfo, NSString, NSMutableSet, NSXPCListener, NSArray;

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate> {

	MTXPCConnectionInfo* _info;
	id<NAScheduler> _serializer;
	NSString* _requiredEntitlement;
	/*^block*/id _errorHandler;
	NSMutableSet* _clients;
	NSXPCListener* _connectionListener;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,copy) NSString * requiredEntitlement;                    //@synthesize requiredEntitlement=_requiredEntitlement - In the implementation block
@property (nonatomic,retain) MTXPCConnectionInfo * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id errorHandler;                                   //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                          //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSXPCListener * connectionListener;              //@synthesize connectionListener=_connectionListener - In the implementation block
@property (nonatomic,readonly) NSArray * connectedClients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSString *)description;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSMutableSet *)clients;
-(void)setClients:(NSMutableSet *)arg1 ;
-(MTXPCConnectionInfo *)info;
-(void)startListening;
-(void)stopListening;
-(id)currentClient;
-(void)setInfo:(MTXPCConnectionInfo *)arg1 ;
-(NSString *)requiredEntitlement;
-(id)_connectedClients;
-(void)setRequiredEntitlement:(NSString *)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)_didInterruptConnection;
-(id)initWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_didInvalidateConnection:(id)arg1 ;
-(void)addClientConnection:(id)arg1 clientLink:(id)arg2 ;
-(void)removeClientConnection:(id)arg1 ;
-(id)_currentClientForConnection:(id)arg1 ;
-(void)performBlockOnAllClients:(/*^block*/id)arg1 excludingCurrent:(BOOL)arg2 ;
-(void)performBlockOnClientInfos:(/*^block*/id)arg1 excludeCurrent:(BOOL)arg2 ;
-(void)_performBlockOnClientInfos:(/*^block*/id)arg1 excludingClient:(id)arg2 ;
-(NSArray *)connectedClients;
-(void)performBlockOnCurrentClient:(/*^block*/id)arg1 ;
-(void)performBlockOnAllClients:(/*^block*/id)arg1 ;
-(void)performBlockOnAllClients:(/*^block*/id)arg1 excludingClient:(id)arg2 ;
-(NSXPCListener *)connectionListener;
-(void)setConnectionListener:(NSXPCListener *)arg1 ;
@end

