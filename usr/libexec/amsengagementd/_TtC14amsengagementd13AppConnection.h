//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC14amsengagementd13AppConnection : NSObject <NSXPCListenerDelegate>
{
    MISSING_TYPE *currentEnginePerformer;	// 8 = 0x8
    MISSING_TYPE *engineReleaseDelay;	// 64 = 0x40
    MISSING_TYPE *engineReleaseToken;	// 72 = 0x48
    MISSING_TYPE *forceSyncCoordinator;	// 88 = 0x58
    MISSING_TYPE *priorityQueue;	// 96 = 0x60
    MISSING_TYPE *syncBackoff;	// 104 = 0x68
    MISSING_TYPE *kAppleMediaServicesEntitlement;	// 112 = 0x70
}

+ (id)shared;	// IMP=0x0000000100006d28
- (void).cxx_destruct;	// IMP=0x000000010000e110
- (void)syncMetricsIdentifiers;	// IMP=0x00000001000097d0
- (void)syncWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009744
- (void)enqueueWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008e8c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100007344
- (id)init;	// IMP=0x0000000100006eb8

@end
