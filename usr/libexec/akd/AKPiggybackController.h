//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAppleIDPushHelperServiceDelegate-Protocol.h"

@class AKPiggybackRequestingController, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface AKPiggybackController : NSObject <AKAppleIDPushHelperServiceDelegate>
{
    NSMutableDictionary *_acceptingControllers;	// 8 = 0x8
    NSMutableDictionary *_pendingReplies;	// 16 = 0x10
    AKPiggybackRequestingController *_requestingController;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_piggybackingRequestQueue;	// 32 = 0x20
    NSOperationQueue *_circleRequestProcessingQueue;	// 40 = 0x28
    _Bool _requiresHSA2Repair;	// 48 = 0x30
}

+ (void)tearDown;	// IMP=0x0000000100072484
+ (id)sharedController;	// IMP=0x00000001000722fc
- (void).cxx_destruct;	// IMP=0x0000000100075018
- (double)_processingTimeOut;	// IMP=0x000000010007500c
- (id)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000734c0
- (id)serviceControllerForContext:(id)arg1;	// IMP=0x0000000100073444
- (void)startRequestSessionWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000732fc
- (void)_removeAcceptingControllerForTransaction:(id)arg1;	// IMP=0x0000000100073254
- (id)_acceptingControllerForTransactionId:(id)arg1;	// IMP=0x0000000100073068
- (_Bool)_processPendingCompletionsForPayload:(id)arg1;	// IMP=0x0000000100072df8
- (_Bool)_hasPrimaryiCloudAccountForPayload:(id)arg1;	// IMP=0x0000000100072d54
- (void)_processPiggybackPayload:(id)arg1;	// IMP=0x0000000100072940
- (void)processPushMessage:(id)arg1;	// IMP=0x00000001000727f4
- (_Bool)shouldSuppressPushMessage:(id)arg1;	// IMP=0x000000010007253c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

