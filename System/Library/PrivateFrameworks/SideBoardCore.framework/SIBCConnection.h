/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardCore.framework/SideBoardCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, SIBCConnectionDelegate, SIBCConnectionMessageCoder, SIBCConnectionRequestComparator;
@class HMConnectivityNetworkConnection, NSObject, NSString, SIBCConnectionRequestManager, NSUUID;

@interface SIBCConnection : NSObject {

	HMConnectivityNetworkConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _logPrefix;
	SIBCConnectionRequestManager* _requestManager;
	NSUUID* _endpointId;
	NSString* _applicationName;
	id<SIBCConnectionDelegate> _delegate;
	id<SIBCConnectionMessageCoder> _messageCoder;
	id<SIBCConnectionRequestComparator> _requestComparator;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) SIBCConnectionRequestManager * requestManager;                    //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,readonly) NSUUID * endpointId;                                              //@synthesize endpointId=_endpointId - In the implementation block
@property (nonatomic,readonly) NSString * applicationName;                                       //@synthesize applicationName=_applicationName - In the implementation block
@property (assign,nonatomic,__weak) id<SIBCConnectionDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SIBCConnectionMessageCoder> messageCoder;                        //@synthesize messageCoder=_messageCoder - In the implementation block
@property (nonatomic,retain) id<SIBCConnectionRequestComparator> requestComparator;              //@synthesize requestComparator=_requestComparator - In the implementation block
@property (copy) id invalidationHandler;                                                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id<SIBCConnectionDelegate>)delegate;
-(void)setDelegate:(id<SIBCConnectionDelegate>)arg1 ;
-(void)cancel;
-(void)resume;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(SIBCConnectionRequestManager *)requestManager;
-(NSString *)applicationName;
-(NSUUID *)endpointId;
-(id)_logPrefix;
-(void)sendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 endpointIdentifier:(id)arg3 applicationName:(id)arg4 ;
-(id<SIBCConnectionRequestComparator>)requestComparator;
-(void)_receiveNextMessage;
-(id<SIBCConnectionMessageCoder>)messageCoder;
-(void)sendRequestMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleConnectionReady;
-(void)_processReceivedMessage:(id)arg1 error:(id)arg2 ;
-(void)setMessageCoder:(id<SIBCConnectionMessageCoder>)arg1 ;
-(void)setRequestComparator:(id<SIBCConnectionRequestComparator>)arg1 ;
@end

