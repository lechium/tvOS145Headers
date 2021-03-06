//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "TVCacheDeleteManagerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener, TVAppCachePolicyManager, TVCacheDeleteManager;
@protocol OS_dispatch_queue;

@interface TVCacheDeleteService : NSObject <NSXPCListenerDelegate, TVCacheDeleteManagerDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    NSMutableSet *_activeConnections;	// 24 = 0x18
    TVCacheDeleteManager *_cacheDeleteManager;	// 32 = 0x20
    TVAppCachePolicyManager *_policyManager;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100004178
- (void).cxx_destruct;	// IMP=0x0000000100004d70
@property(retain, nonatomic) TVAppCachePolicyManager *policyManager; // @synthesize policyManager=_policyManager;
@property(retain, nonatomic) TVCacheDeleteManager *cacheDeleteManager; // @synthesize cacheDeleteManager=_cacheDeleteManager;
@property(retain, nonatomic) NSMutableSet *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic, setter=setXPCListener:) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (id)manager:(id)arg1 purgeTasksForUrgency:(long long)arg2;	// IMP=0x0000000100004c84
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100004634
- (void)start;	// IMP=0x0000000100004560
- (void)dealloc;	// IMP=0x00000001000044fc
- (id)_init;	// IMP=0x00000001000041f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

