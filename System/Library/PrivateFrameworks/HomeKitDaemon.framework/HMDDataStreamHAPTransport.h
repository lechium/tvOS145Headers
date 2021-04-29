/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamTransport.h>

@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, HMDCharacteristic, NSNumber, HMDDataStreamFrameReader, NSString, NSMutableArray;

@interface HMDDataStreamHAPTransport : NSObject <HMFLogging, HMDDataStreamTransport> {

	BOOL _isWriteInProgress;
	BOOL _lastAccessoryRequestToSendFlag;
	id<HMDDataStreamTransportDelegate> delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	HMDCharacteristic* _transportCharacteristic;
	HMDCharacteristic* _interruptCharacteristic;
	NSNumber* _sessionIdentifier;
	unsigned long long _maxControllerTransportMTU;
	HMDDataStreamFrameReader* _byteReader;
	NSString* _logIdentifier;
	NSString* _notificationClientIdentifier;
	NSMutableArray* _pendingWrites;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                      //@synthesize accessory=_accessory - In the implementation block
@property (retain) HMDCharacteristic * transportCharacteristic;                               //@synthesize transportCharacteristic=_transportCharacteristic - In the implementation block
@property (retain) HMDCharacteristic * interruptCharacteristic;                               //@synthesize interruptCharacteristic=_interruptCharacteristic - In the implementation block
@property (readonly) NSNumber * sessionIdentifier;                                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long maxControllerTransportMTU;                            //@synthesize maxControllerTransportMTU=_maxControllerTransportMTU - In the implementation block
@property (readonly) HMDDataStreamFrameReader * byteReader;                                   //@synthesize byteReader=_byteReader - In the implementation block
@property (readonly) NSString * logIdentifier;                                                //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSString * notificationClientIdentifier;                                 //@synthesize notificationClientIdentifier=_notificationClientIdentifier - In the implementation block
@property (readonly) NSMutableArray * pendingWrites;                                          //@synthesize pendingWrites=_pendingWrites - In the implementation block
@property (assign) BOOL isWriteInProgress;                                                    //@synthesize isWriteInProgress=_isWriteInProgress - In the implementation block
@property (assign) BOOL lastAccessoryRequestToSendFlag;                                       //@synthesize lastAccessoryRequestToSendFlag=_lastAccessoryRequestToSendFlag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HMDDataStreamTransportDelegate> delegate; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDDataStreamTransportDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<HMDDataStreamTransportDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)connect;
-(BOOL)_isRunning;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(NSNumber *)sessionIdentifier;
-(HMDHAPAccessory *)accessory;
-(void)_handleReceivedData:(id)arg1 ;
-(NSString *)logIdentifier;
-(void)_stopWithError:(id)arg1 ;
-(NSMutableArray *)pendingWrites;
-(void)_registerForMessages;
-(unsigned long long)maxControllerTransportMTU;
-(id)initWithAccessory:(id)arg1 sessionIdentifier:(long long)arg2 maxControllerTransportMTU:(unsigned long long)arg3 workQueue:(id)arg4 logIdentifier:(id)arg5 ;
-(void)sendRawFrame:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleCharacteristicsValueUpdated:(id)arg1 ;
-(HMDCharacteristic *)transportCharacteristic;
-(void)_teardownSessionWithError:(id)arg1 ;
-(void)setTransportCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)setInterruptCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)_notifyDelegateDidOpen;
-(void)_deregisterForMessages;
-(void)_cancelAllPendingWritesWithError:(id)arg1 ;
-(void)setIsWriteInProgress:(BOOL)arg1 ;
-(void)_notifyDelegateDidClose;
-(void)_notifyDelegateDidFailWithError:(id)arg1 ;
-(id)_buildWriteRequestWithError:(id*)arg1 shouldForceClose:(BOOL)arg2 ;
-(NSString *)notificationClientIdentifier;
-(HMDCharacteristic *)interruptCharacteristic;
-(void)_doNextWriteOperation;
-(id)_getPendingWritesUpToLength:(unsigned long long)arg1 ;
-(BOOL)lastAccessoryRequestToSendFlag;
-(BOOL)isWriteInProgress;
-(void)_stopTransportForWriteFailureError:(id)arg1 ;
-(void)_removeAndMarkCompleteAllCompletedWrites;
-(void)_handleCompletionWithResponseTuples:(id)arg1 ;
-(void)setLastAccessoryRequestToSendFlag:(BOOL)arg1 ;
-(void)_notifyWriteOperation:(id)arg1 didCompleteWithError:(id)arg2 ;
-(HMDDataStreamFrameReader *)byteReader;
-(void)_notifyDelegateDidReceiveFrame:(id)arg1 ;
-(void)_handleInterruptCharacteristicValue:(id)arg1 ;
@end

