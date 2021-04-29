//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MLDClientImportService : NSObject <NSXPCListenerDelegate>
{
    NSMutableArray *_activeSessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x0000000100015d38
- (void).cxx_destruct;	// IMP=0x00000001000165ac
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100015e58
- (id)init;	// IMP=0x0000000100015da4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

