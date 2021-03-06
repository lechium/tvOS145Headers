//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSData, NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTJoinWithVoucherOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    NSData *_voucherData;	// 32 = 0x20
    NSData *_voucherSig;	// 40 = 0x28
    NSString *_peerID;	// 48 = 0x30
    OTOperationDependencies *_deps;	// 56 = 0x38
    NSString<OctagonStateString> *_ckksConflictState;	// 64 = 0x40
    NSOperation *_finishedOp;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000adc6c
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) NSString<OctagonStateString> *ckksConflictState; // @synthesize ckksConflictState=_ckksConflictState;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString *peerID; // @synthesize peerID=_peerID;
@property(retain) NSData *voucherSig; // @synthesize voucherSig=_voucherSig;
@property(retain) NSData *voucherData; // @synthesize voucherData=_voucherData;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)proceedWithKeys:(id)arg1 pendingTLKShares:(id)arg2;	// IMP=0x00000001000ad768
- (void)groupStart;	// IMP=0x00000001000ad2d4
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 ckksConflictState:(id)arg3 errorState:(id)arg4;	// IMP=0x00000001000ad17c

@end

