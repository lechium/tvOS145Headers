//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "CKKSKeySetContainerProtocol-Protocol.h"
#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CKKSCurrentKeySet, CKKSKeychainView, CKKSOperationDependencies, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSNewTLKOperation : CKKSGroupOperation <CKKSKeySetContainerProtocol, OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSCurrentKeySet *keyset;	// 32 = 0x20
    CKKSOperationDependencies *_deps;	// 40 = 0x28
    CKKSKeychainView *_ckks;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100142468
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) CKKSCurrentKeySet *keyset; // @synthesize keyset;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)cancel;	// IMP=0x000000010014239c
- (void)groupStart;	// IMP=0x00000001001420c4
- (id)initWithDependencies:(id)arg1 ckks:(id)arg2;	// IMP=0x0000000100141fe8
- (id)init;	// IMP=0x0000000100141fd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

