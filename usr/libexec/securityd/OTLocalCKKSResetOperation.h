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
@interface OTLocalCKKSResetOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    OTOperationDependencies *_operationDependencies;	// 32 = 0x20
    NSOperation *_finishedOp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100190308
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)groupStart;	// IMP=0x000000010019006c
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x000000010018ff84

@end

