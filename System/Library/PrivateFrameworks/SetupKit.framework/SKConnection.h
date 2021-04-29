/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUAuthenticatableClient.h>
#import <libobjc.A.dylib/CUAuthenticatableServer.h>
#import <libobjc.A.dylib/CULabelable.h>

@protocol CUReadWriteRequestable, OS_dispatch_source, OS_dispatch_queue;
@class NSString, CUPairingStream, CUPairingSession, NSMutableDictionary, NSMutableArray, NSObject, NSError, CUBLEConnection, SKDevice;

@interface SKConnection : NSObject <CUActivatable, CUAuthenticatableClient, CUAuthenticatableServer, CULabelable> {

	BOOL _activateCalled;
	SCD_Struct_SK0 _frameHeader;
	id<CUReadWriteRequestable> _requestable;
	int _runState;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned long long _mainAuthTagLength;
	CUPairingStream* _mainStream;
	CUPairingSession* _pairSetupSession;
	BOOL _readRequested;
	BOOL _receivingHeader;
	NSMutableDictionary* _requests;
	NSMutableArray* _sendArray;
	BOOL _showPasswordCalled;
	NSObject*<OS_dispatch_source> _startTimer;
	BOOL _stepDone;
	NSError* _stepError;
	LogCategory* _ucat;
	unsigned _xidLast;
	BOOL _clientMode;
	int _passwordType;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _authHidePasswordHandler;
	/*^block*/id _authShowPasswordHandler;
	/*^block*/id _authPromptForPasswordHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	NSString* _password;
	CUBLEConnection* _bleConnection;
	SKDevice* _blePeerDevice;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _receivedEventHandler;
	/*^block*/id _receivedRequestHandler;
	/*^block*/id _sendDataHandler;

}

@property (nonatomic,retain) CUBLEConnection * bleConnection;                         //@synthesize bleConnection=_bleConnection - In the implementation block
@property (nonatomic,retain) SKDevice * blePeerDevice;                                //@synthesize blePeerDevice=_blePeerDevice - In the implementation block
@property (assign,nonatomic) BOOL clientMode;                                         //@synthesize clientMode=_clientMode - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id receivedEventHandler;                                   //@synthesize receivedEventHandler=_receivedEventHandler - In the implementation block
@property (nonatomic,copy) id receivedRequestHandler;                                 //@synthesize receivedRequestHandler=_receivedRequestHandler - In the implementation block
@property (nonatomic,copy) id sendDataHandler;                                        //@synthesize sendDataHandler=_sendDataHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                  //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id authPromptForPasswordHandler;                           //@synthesize authPromptForPasswordHandler=_authPromptForPasswordHandler - In the implementation block
@property (nonatomic,copy) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id authHidePasswordHandler;                                //@synthesize authHidePasswordHandler=_authHidePasswordHandler - In the implementation block
@property (nonatomic,copy) id authShowPasswordHandler;                                //@synthesize authShowPasswordHandler=_authShowPasswordHandler - In the implementation block
@property (assign,nonatomic) int passwordType;                                        //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)password;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setPassword:(NSString *)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_run;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_abortRequestsWithError:(id)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_invalidateWithError:(id)arg1 ;
-(id)sendDataHandler;
-(void)receivedData:(id)arg1 ;
-(void)setSendDataHandler:(id)arg1 ;
-(int)passwordType;
-(void)setReceivedRequestHandler:(id)arg1 ;
-(void)_clientRun;
-(id)receivedRequestHandler;
-(void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2 ;
-(void)tryPassword:(id)arg1 ;
-(void)setPasswordType:(int)arg1 ;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)_invalidateCore:(id)arg1 ;
-(void)_pairSetupInvalidate;
-(void)_serverRun;
-(void)_clientConnectStart;
-(void)_clientPairSetupStart;
-(void)_processSends;
-(void)_clientError:(id)arg1 ;
-(void)_clientConnectStartBLE;
-(void)_clientConnectCompleted:(id)arg1 ;
-(void)_clientPairSetupPromptWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 handler:(/*^block*/id)arg3 ;
-(void)_clientPairSetupCompleted:(id)arg1 ;
-(void)_serverAccept;
-(void)_serverError:(id)arg1 ;
-(void)_serverAcceptBLE;
-(void)_serverPairSetupCompleted:(id)arg1 ;
-(void)_timeoutForSendEntry:(id)arg1 ;
-(void)_timeoutForXID:(id)arg1 ;
-(void)_sendFrameType:(unsigned char)arg1 body:(id)arg2 ;
-(void)_serverPairSetupWithData:(id)arg1 start:(BOOL)arg2 ;
-(void)_clientPairSetupWithData:(id)arg1 ;
-(CUBLEConnection *)bleConnection;
-(void)setBleConnection:(CUBLEConnection *)arg1 ;
-(BOOL)clientMode;
-(void)setClientMode:(BOOL)arg1 ;
-(id)receivedEventHandler;
-(void)setReceivedEventHandler:(id)arg1 ;
-(id)authHidePasswordHandler;
-(void)setAuthHidePasswordHandler:(id)arg1 ;
-(id)authShowPasswordHandler;
-(void)setAuthShowPasswordHandler:(id)arg1 ;
-(id)authPromptForPasswordHandler;
-(void)setAuthPromptForPasswordHandler:(id)arg1 ;
-(void)sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 sendEntry:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)_sendResponse:(id)arg1 error:(id)arg2 xid:(id)arg3 requestID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_sendHeaderData:(id)arg1 bodyData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_receiveStart:(id)arg1 ;
-(void)_receiveCompletion:(id)arg1 ;
-(void)_receivedHeader:(const SCD_Struct_SK0*)arg1 body:(id)arg2 ;
-(void)_receivedHeader:(const SCD_Struct_SK0*)arg1 encryptedObjectData:(id)arg2 ;
-(void)_receivedObject:(id)arg1 ;
-(void)_receivedEvent:(id)arg1 ;
-(void)_receivedRequest:(id)arg1 ;
-(void)_receivedResponse:(id)arg1 ;
-(SKDevice *)blePeerDevice;
-(void)setBlePeerDevice:(SKDevice *)arg1 ;
@end

