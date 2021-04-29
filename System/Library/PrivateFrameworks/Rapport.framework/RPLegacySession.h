/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, CUMobileDeviceSession, NSObject, NSString, RPDevice;

@interface RPLegacySession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableArray* _messageSendQueue;
	BOOL _messagingReady;
	int _pairVerifyState;
	BOOL _secureReady;
	BOOL _mdEnabled;
	CUMobileDeviceSession* _mdSession;
	int _mdState;
	unsigned _securityFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	RPDevice* _peerDevice;
	NSString* _serviceType;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) RPDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (assign,nonatomic) unsigned securityFlags;                                  //@synthesize securityFlags=_securityFlags - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_invalidate;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_sendMessage:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_run;
-(RPDevice *)peerDevice;
-(void)setPeerDevice:(RPDevice *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)promptForPINHandler;
-(void)pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)pairSetupTryPIN:(id)arg1 ;
-(void)_pairSetupTryPIN:(id)arg1 ;
-(void)pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)unpairWithCompletion:(/*^block*/id)arg1 ;
-(void)_unpairWithCompletion:(/*^block*/id)arg1 ;
-(void)setPromptForPINHandler:(id)arg1 ;
-(int)_runPairVerify;
-(void)setSecurityFlags:(unsigned)arg1 ;
-(void)requestSystemInfoWithCompletion:(/*^block*/id)arg1 ;
-(int)_runMobileDeviceStart;
-(void)_sendQueuedMessages;
-(unsigned)securityFlags;
@end

