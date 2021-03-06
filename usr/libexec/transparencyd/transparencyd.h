//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "transparencyd_protocol-Protocol.h"

@class KTContextStore, KTLogClient, KTPublicKeyStore, TransparencyManagedDataStoreController, TransparencyTranscript;
@protocol OS_dispatch_workloop;

@interface transparencyd : NSObject <transparencyd_protocol>
{
    NSObject<OS_dispatch_workloop> *_workloop;	// 8 = 0x8
    KTLogClient *_ktLogClient;	// 16 = 0x10
    KTContextStore *_workloopContextStore;	// 24 = 0x18
    KTContextStore *_xpcContextStore;	// 32 = 0x20
    KTPublicKeyStore *_keyStore;	// 40 = 0x28
    TransparencyManagedDataStoreController *_dataStoreController;	// 48 = 0x30
    TransparencyTranscript *_transcript;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100008518
@property(retain) TransparencyTranscript *transcript; // @synthesize transcript=_transcript;
@property(retain) TransparencyManagedDataStoreController *dataStoreController; // @synthesize dataStoreController=_dataStoreController;
@property(retain) KTPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(retain) KTContextStore *xpcContextStore; // @synthesize xpcContextStore=_xpcContextStore;
@property(retain) KTContextStore *workloopContextStore; // @synthesize workloopContextStore=_workloopContextStore;
@property(retain) KTLogClient *ktLogClient; // @synthesize ktLogClient=_ktLogClient;
@property(retain) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
- (void)logMetric:(id)arg1 withName:(id)arg2;	// IMP=0x0000000100008400
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0000000100008348
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3;	// IMP=0x00000001000082ac
- (void)noteEventNamed:(id)arg1;	// IMP=0x000000010000823c
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x00000001000081b0
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x0000000100008124
- (void)logSuccessForEventNamed:(id)arg1;	// IMP=0x00000001000080b4
- (void)runDutyCycle:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007e64
- (void)runDutyCycleForActivity:(id)arg1;	// IMP=0x0000000100007c3c
- (void)resetRequestToPending:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007854
- (void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006f74
- (void)forceApplicationConfig:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006db4
- (void)forceApplicationKeysDownload:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006b54
- (void)forceApplicationKeysFetch:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000068b0
- (void)forceConfigUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000001000066f0
- (void)copyApplicationTranscript:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006480
- (void)copyDaemonState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006234
- (void)clearPublicKeyStoreState:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006140
- (void)clearLogClientConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006068
- (void)copyLogClientConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005eac
- (void)copyKeyStoreStateFromDisk:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005ce8
- (void)copyKeyStoreState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005b50
- (void)copyApplicationState:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000058b0
- (void)copyDataStoreStatistics:(CDUnknownBlockType)arg1;	// IMP=0x00000001000057ac
- (void)clearApplicationState:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000055cc
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100004d2c
- (void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004680
- (void)validateEnrollmentUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableData:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 promiseCompletionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100003edc
- (void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000036d8
- (void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100002f38
- (void)validatePeerUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableDatas:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 promiseCompletionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100002680
- (_Bool)validLoggableDatas:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100002460
- (_Bool)dataStoreFailedToLoad:(id *)arg1;	// IMP=0x0000000100002318
- (id)xpcDataStore;	// IMP=0x00000001000022c4
- (id)dataStore;	// IMP=0x0000000100002270
- (void)logFinishFailureEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000001000021e8
- (void)logFinishSuccessEvent:(id)arg1;	// IMP=0x000000010000217c
- (void)logStartEvent:(id)arg1;	// IMP=0x0000000100002110
- (void)runAsynchronousTransactionName:(const char *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100001f78
- (id)cleanseErrorForXPC:(id)arg1;	// IMP=0x0000000100001f40
- (id)initWithKTLogClient:(id)arg1 dataStoreController:(id)arg2 keyStore:(id)arg3 transcript:(id)arg4 workloop:(id)arg5;	// IMP=0x0000000100001b7c
- (id)init;	// IMP=0x0000000100001958

@end

