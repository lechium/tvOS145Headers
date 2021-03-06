/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUReadWriteRequestable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, CUReadRequest, NSMutableArray, CUWriteRequest, NSString, CBL2CAPChannel;

@interface CUBluetoothClassicConnection : NSObject <CUReadWriteRequestable> {

	/*^block*/id _activateCompletion;
	BOOL _btConnected;
	char _btDeviceAddrStr[32];
	BTSessionImplRef _btSession;
	BOOL _btSessionAttaching;
	BOOL _btSessionNeeded;
	BOOL _btSessionStarted;
	BOOL _btServiceAddCallbacks;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _readSource;
	unsigned char _readSuspended;
	CUReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	int _socketFD;
	int _state;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_source> _writeSource;
	unsigned char _writeSuspended;
	CUWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	LogCategory* _ucat;
	unsigned _connectionFlags;
	unsigned _requiredServices;
	NSString* _destinationPeer;
	NSString* _destinationService;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	CBL2CAPChannel* _l2capChannel;
	/*^block*/id _serverInvalidationHandler;

}

@property (nonatomic,retain) CBL2CAPChannel * l2capChannel;                           //@synthesize l2capChannel=_l2capChannel - In the implementation block
@property (nonatomic,copy) id serverInvalidationHandler;                              //@synthesize serverInvalidationHandler=_serverInvalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned connectionFlags;                                //@synthesize connectionFlags=_connectionFlags - In the implementation block
@property (nonatomic,copy) NSString * destinationPeer;                                //@synthesize destinationPeer=_destinationPeer - In the implementation block
@property (nonatomic,copy) NSString * destinationService;                             //@synthesize destinationService=_destinationService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned requiredServices;                               //@synthesize requiredServices=_requiredServices - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(BOOL)_setupIOAndReturnError:(id*)arg1 ;
-(BOOL)_startConnectingAndReturnError:(id*)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_run;
-(void)_processReads:(BOOL)arg1 ;
-(void)_processWrites;
-(void)_abortReadsWithError:(id)arg1 ;
-(void)_abortWritesWithError:(id)arg1 ;
-(BOOL)_runConnectStart;
-(BOOL)_runSetupChannel;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(BOOL)_processReadStatus;
-(void)_prepareReadRequest:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(void)writeWithRequest:(id)arg1 ;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(void)readWithRequest:(id)arg1 ;
-(void)writeEndOfDataWithCompletion:(/*^block*/id)arg1 ;
-(CBL2CAPChannel *)l2capChannel;
-(void)setL2capChannel:(CBL2CAPChannel *)arg1 ;
-(id)serverInvalidationHandler;
-(void)setServerInvalidationHandler:(id)arg1 ;
-(unsigned)connectionFlags;
-(NSString *)destinationPeer;
-(NSString *)destinationService;
-(unsigned)requiredServices;
-(BOOL)_runBTSessionStart;
-(BOOL)_runOpenChannelStart;
-(BTDeviceImplRef)_btDeviceWithID:(id)arg1 error:(id*)arg2 ;
-(void)_btEnsureStopped;
-(void)setConnectionFlags:(unsigned)arg1 ;
-(void)setDestinationPeer:(NSString *)arg1 ;
-(void)setDestinationService:(NSString *)arg1 ;
-(void)setRequiredServices:(unsigned)arg1 ;
@end

