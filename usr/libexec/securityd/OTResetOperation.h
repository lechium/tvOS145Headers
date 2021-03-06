//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CuttlefishXPCWrapper, NSOperation, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTResetOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    long long _resetReason;	// 32 = 0x20
    NSString *_containerName;	// 40 = 0x28
    NSString *_contextID;	// 48 = 0x30
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 56 = 0x38
    NSOperation *_finishedOp;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100192ee0
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property long long resetReason; // @synthesize resetReason=_resetReason;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x0000000100192c0c
- (id)init:(id)arg1 contextID:(id)arg2 reason:(long long)arg3 intendedState:(id)arg4 errorState:(id)arg5 cuttlefishXPCWrapper:(id)arg6;	// IMP=0x0000000100192ab0

@end

