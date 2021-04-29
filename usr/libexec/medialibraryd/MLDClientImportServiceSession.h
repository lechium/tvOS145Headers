//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ML3ClientImportServiceSessionXPCInterface-Protocol.h"

@class ML3ActiveTransaction, ML3ClientImportResult, ML3ClientImportServiceSession, ML3ClientImportSessionConfiguration, NSThread, NSXPCConnection;

@interface MLDClientImportServiceSession : NSObject <ML3ClientImportServiceSessionXPCInterface>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    ML3ClientImportSessionConfiguration *_configuration;	// 16 = 0x10
    NSThread *_importSessionThread;	// 24 = 0x18
    ML3ActiveTransaction *_transaction;	// 32 = 0x20
    ML3ClientImportServiceSession *_importSession;	// 40 = 0x28
    _Bool _success;	// 48 = 0x30
    _Bool _active;	// 49 = 0x31
    unsigned long long _totalOperationCount;	// 56 = 0x38
    unsigned long long _completedOperationCount;	// 64 = 0x40
    ML3ClientImportResult *_currentResult;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000152cc
- (void)_reportProgress;	// IMP=0x000000010001512c
- (void)_adjustProgressForIncomingOperationCount:(unsigned long long)arg1;	// IMP=0x0000000100015114
- (void)_removeItems:(id)arg1;	// IMP=0x0000000100014b20
- (void)_updateItems:(id)arg1;	// IMP=0x0000000100014524
- (void)_addItems:(id)arg1;	// IMP=0x0000000100013f18
- (void)_endSessionCommittingChanges:(id)arg1;	// IMP=0x0000000100013c54
- (void)_beginSessionWithConfiguration:(id)arg1;	// IMP=0x00000001000138c8
- (void)_startImportThread;	// IMP=0x00000001000137d4
- (void)removeItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000136c0
- (void)updateItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000135ac
- (void)addItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013498
- (void)cancelSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001341c
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013330
- (void)beginSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013228
- (void)dealloc;	// IMP=0x00000001000131f0
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000130f4

@end

