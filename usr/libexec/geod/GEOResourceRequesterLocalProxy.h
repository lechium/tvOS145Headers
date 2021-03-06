//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOResourceRequesterProxy-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOResourceRequesterLocalProxy : NSObject <GEOResourceRequesterProxy>
{
    NSMutableDictionary *_requestHandlersPending;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000400f4
- (void)_resetRequestTimeout;	// IMP=0x000000010003ffac
- (void)_failAllPendingRequests;	// IMP=0x000000010003fd28
- (void)failedToResolveResources:(id)arg1 withError:(id)arg2;	// IMP=0x000000010003fad4
- (void)didResolvePaths:(id)arg1 forResources:(id)arg2;	// IMP=0x000000010003f85c
- (void)_cleanUpFinishedHandlers:(id)arg1;	// IMP=0x000000010003f69c
- (id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3;	// IMP=0x000000010003f498
- (id)resourcesRequested:(id)arg1 forHandler:(CDUnknownBlockType)arg2 queue:(id)arg3 signpost:(unsigned long long)arg4;	// IMP=0x000000010003f1d0
- (void)dealloc;	// IMP=0x000000010003f0e4
- (void)_fetchResources:(id)arg1 force:(_Bool)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 signpostID:(unsigned long long)arg5 queue:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x000000010003e7c0
- (void)fetchResources:(id)arg1 force:(_Bool)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 signpostID:(unsigned long long)arg5 queue:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x000000010003e580
- (id)init;	// IMP=0x000000010003e4d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

