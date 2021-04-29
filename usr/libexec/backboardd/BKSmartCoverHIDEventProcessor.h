//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventProcessor-Protocol.h"
#import "BSDescriptionStreamable-Protocol.h"

@class BSCompoundAssertion, NSString;

@interface BKSmartCoverHIDEventProcessor : NSObject <BSDescriptionStreamable, BKHIDEventProcessor>
{
    BSCompoundAssertion *_observerAssertion;	// 8 = 0x8
    _Bool _attachedCoverRequiresWorkaroundForOpenState;	// 16 = 0x10
    _Bool _attached;	// 17 = 0x11
    _Bool _unknownState;	// 18 = 0x12
    unsigned long long _supportedSensors;	// 24 = 0x18
    unsigned long long _disengagedSensors;	// 32 = 0x20
    unsigned long long _sensorsRequiredForOpenState;	// 40 = 0x28
    unsigned long long _sensorsRequiredForAmbiguousState;	// 48 = 0x30
    long long _state;	// 56 = 0x38
}

+ (_Bool)isSmartCoverSupported;	// IMP=0x000000010004c930
- (void).cxx_destruct;	// IMP=0x000000010004c6e4
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=isUnknownState) _Bool unknownState; // @synthesize unknownState=_unknownState;
@property(nonatomic, getter=isAttached) _Bool attached; // @synthesize attached=_attached;
@property(nonatomic) unsigned long long sensorsRequiredForAmbiguousState; // @synthesize sensorsRequiredForAmbiguousState=_sensorsRequiredForAmbiguousState;
@property(nonatomic) unsigned long long sensorsRequiredForOpenState; // @synthesize sensorsRequiredForOpenState=_sensorsRequiredForOpenState;
@property(nonatomic) unsigned long long disengagedSensors; // @synthesize disengagedSensors=_disengagedSensors;
@property(nonatomic) unsigned long long supportedSensors; // @synthesize supportedSensors=_supportedSensors;
@property(nonatomic) _Bool attachedCoverRequiresWorkaroundForOpenState; // @synthesize attachedCoverRequiresWorkaroundForOpenState=_attachedCoverRequiresWorkaroundForOpenState;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000010004c450
- (id)addSmartCoverObserver:(id)arg1;	// IMP=0x000000010004c388
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000010004bc80
@property(readonly, nonatomic, getter=isSmartCoverClosed) _Bool smartCoverClosed;
- (int)_smartCoverSensorsDidDisengage:(unsigned long long)arg1;	// IMP=0x000000010004bbe8
- (int)_smartCoverSensorsDidEngage:(unsigned long long)arg1;	// IMP=0x000000010004bbac
- (id)initWithContext:(id)arg1;	// IMP=0x000000010004b960
- (unsigned long long)_currentMaskForUsage:(unsigned int)arg1 HIDSystem:(id)arg2 mask:(unsigned long long *)arg3 maskIfEngaged:(unsigned long long *)arg4;	// IMP=0x000000010004b80c
- (id)initWithSupportedHES:(unsigned long long)arg1 disengagedHES:(unsigned long long)arg2 attached:(_Bool)arg3 unknownState:(_Bool)arg4;	// IMP=0x000000010004b528

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
