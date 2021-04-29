/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteTextInput/RTIInputSystemSession.h>
#import <libobjc.A.dylib/RTIInputSystemSessionProtocol.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, RTIDataPayload, NSString;

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _isPaused;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BOOL isPaused;                                           //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) RTIDataPayload * currentDataPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionWithConnection:(id)arg1 ;
-(void)dealloc;
-(BOOL)isPaused;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)handleTextActionPayload:(id)arg1 ;
-(void)setIsPaused:(BOOL)arg1 ;
-(RTIDataPayload *)currentDataPayload;
-(void)flushOperations;
-(oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3 ;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2 ;
-(oneway void)endRemoteTextInputSessionWithID:(id)arg1 ;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2 ;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3 ;
-(void)_killConnectionWithCallback;
-(void)didInitializeWithConnection:(id)arg1 ;
-(void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)flushOperationsWithResultHandler:(/*^block*/id)arg1 ;
@end

