/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>
#import <libobjc.A.dylib/CUReadWriteRequestable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBScalablePipe, CBScalablePipeManager, CUReadRequest, NSMutableArray, NSObject, CUWriteRequest, NSString, NSUUID;

@interface CUBluetoothScalablePipe : NSObject <CBScalablePipeManagerDelegate, CUReadWriteRequestable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	channelRef _btChannel;
	BOOL _btEndpointRegistering;
	BOOL _btEndpointRegistered;
	int _btPeerHostState;
	BOOL _btPeerKVORegistered;
	CBScalablePipe* _btPipe;
	CBScalablePipeManager* _btPipeManager;
	channel_ring_descRef _btReadRing;
	char* _btReadLeftoverBuf;
	unsigned long long _btReadLeftoverMaxLen;
	char* _btReadLeftoverPtr;
	char* _btReadLeftoverEnd;
	channel_ring_descRef _btWriteRing;
	int _channelFD;
	CUReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readSuspended;
	CUWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	NSObject*<OS_dispatch_source> _writeSource;
	BOOL _writeSuspended;
	int _peerHostState;
	int _priority;
	int _state;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _identifier;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSUUID* _peerIdentifier;
	/*^block*/id _peerHostStateChangedHandler;
	/*^block*/id _stateChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSUUID * peerIdentifier;                                   //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
@property (nonatomic,readonly) int peerHostState;                                     //@synthesize peerHostState=_peerHostState - In the implementation block
@property (nonatomic,copy) id peerHostStateChangedHandler;                            //@synthesize peerHostStateChangedHandler=_peerHostStateChangedHandler - In the implementation block
@property (assign,nonatomic) int priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) int state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                                    //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(int)state;
-(void)setInvalidationHandler:(id)arg1 ;
-(int)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(int)arg1 ;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_processWrites;
-(void)_abortReadsWithError:(id)arg1 ;
-(void)_abortWritesWithError:(id)arg1 ;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)_prepareReadRequest:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(void)writeWithRequest:(id)arg1 ;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(void)readWithRequest:(id)arg1 ;
-(void)_ensureStarted;
-(NSUUID *)peerIdentifier;
-(int)peerHostState;
-(id)peerHostStateChangedHandler;
-(id)stateChangedHandler;
-(void)_ensureStopped:(id)arg1 ;
-(void)_setupPipe;
-(void)_tearDownPipe;
-(void)_handleBTPeerHostStateChanged;
-(void)_processReads;
-(int)_readBytes:(char*)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long*)arg4 ;
-(int)_writeIOArray:(iovec*)arg1 ioCount:(int*)arg2 ;
-(unsigned long long)_writeBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)setPeerIdentifier:(NSUUID *)arg1 ;
-(void)setPeerHostStateChangedHandler:(id)arg1 ;
-(void)setStateChangedHandler:(id)arg1 ;
@end

