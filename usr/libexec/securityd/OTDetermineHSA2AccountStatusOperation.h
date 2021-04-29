//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTDetermineHSA2AccountStatusOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSString<OctagonStateString> *_stateIfNotHSA2;	// 40 = 0x28
    NSString<OctagonStateString> *_stateIfNoAccount;	// 48 = 0x30
    NSOperation *_finishedOp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001445e0
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) NSString<OctagonStateString> *stateIfNoAccount; // @synthesize stateIfNoAccount=_stateIfNoAccount;
@property(retain) NSString<OctagonStateString> *stateIfNotHSA2; // @synthesize stateIfNotHSA2=_stateIfNotHSA2;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x000000010014404c
- (id)initWithDependencies:(id)arg1 stateIfHSA2:(id)arg2 stateIfNotHSA2:(id)arg3 stateIfNoAccount:(id)arg4 errorState:(id)arg5;	// IMP=0x0000000100143f04

@end
