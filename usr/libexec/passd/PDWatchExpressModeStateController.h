//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDXPCEventStreamObserver-Protocol.h"

@class NSSet, NSString;
@protocol PDWatchExpressModeStateControllerDelegate;

@interface PDWatchExpressModeStateController : NSObject <PDXPCEventStreamObserver>
{
    _Bool _inLostMode;	// 8 = 0x8
    NSSet *_expressPassInformation;	// 16 = 0x10
    id <PDWatchExpressModeStateControllerDelegate> _delegate;	// 24 = 0x18
    unsigned long long _expressModeAllowed;	// 32 = 0x20
    unsigned long long _lastSuggestedExpressState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100220990
@property(nonatomic) unsigned long long lastSuggestedExpressState; // @synthesize lastSuggestedExpressState=_lastSuggestedExpressState;
@property(nonatomic, getter=isExpressModeAllowed) unsigned long long expressModeAllowed; // @synthesize expressModeAllowed=_expressModeAllowed;
@property(nonatomic) __weak id <PDWatchExpressModeStateControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_inLostMode;
@property(retain, nonatomic) NSSet *expressPassInformation; // @synthesize expressPassInformation=_expressPassInformation;
- (void)receivedXPCEvent:(id)arg1 forEventStream:(id)arg2;	// IMP=0x0000000100220708
- (void)_requestEnableExpressMode:(_Bool)arg1;	// IMP=0x0000000100220588
- (void)_logControllerState;	// IMP=0x000000010022044c
- (void)_unregisterForExpressAvailabilityChanges;	// IMP=0x00000001002203bc
- (void)_registerForExpressAvailabilityChanges;	// IMP=0x00000001002202fc
- (id)initWithExpressPassInformation:(id)arg1 inLostMode:(_Bool)arg2;	// IMP=0x000000010021ff18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

