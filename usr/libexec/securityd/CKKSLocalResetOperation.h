//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSResultOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CKKSOperationDependencies, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSLocalResetOperation : CKKSResultOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_nextState;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    CKKSOperationDependencies *_deps;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000af69c
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)onqueuePerformLocalReset;	// IMP=0x00000001000ae7b8
- (void)main;	// IMP=0x00000001000ae70c
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x00000001000ae60c

@end

