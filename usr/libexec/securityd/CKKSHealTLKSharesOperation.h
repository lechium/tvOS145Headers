//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CKKSKeychainView, CKKSOperationDependencies, NSBlockOperation, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSHealTLKSharesOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    CKKSKeychainView *_ckks;	// 40 = 0x28
    NSBlockOperation *_cloudkitModifyOperationFinished;	// 48 = 0x30
}

+ (id)createMissingKeyShares:(id)arg1 peers:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100168248
+ (id)createMissingKeyShares:(id)arg1 trustStates:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100167f38
+ (_Bool)areNewSharesSufficient:(id)arg1 trustStates:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100167ba0
- (void).cxx_destruct;	// IMP=0x0000000100167208
@property(retain) NSBlockOperation *cloudkitModifyOperationFinished; // @synthesize cloudkitModifyOperationFinished=_cloudkitModifyOperationFinished;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)cancel;	// IMP=0x00000001001670fc
- (void)groupStart;	// IMP=0x0000000100165d88
- (id)initWithOperationDependencies:(id)arg1 ckks:(id)arg2;	// IMP=0x0000000100165cac
- (id)init;	// IMP=0x0000000100165c94

@end

