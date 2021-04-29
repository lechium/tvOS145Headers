//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

@class NSMapTable;

@interface GEOETAServiceRequester : GEOServiceRequester
{
    NSMapTable *_pendingRequests;	// 8 = 0x8
    struct os_unfair_lock_s _pendingRequestsLock;	// 16 = 0x10
}

+ (id)sharedRequester;	// IMP=0x000000010003bcac
- (void).cxx_destruct;	// IMP=0x000000010003d15c
- (void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(_Bool)arg3 connectionProperties:(id)arg4 willSendRequest:(CDUnknownBlockType)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;	// IMP=0x000000010003c9dc
- (void)cancelRequest:(id)arg1;	// IMP=0x000000010003c904
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c6f4
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 willSendRequest:(CDUnknownBlockType)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;	// IMP=0x000000010003c480
- (void)cancelSimpleETARequest:(id)arg1;	// IMP=0x000000010003c474
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 finished:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x000000010003bda8
- (id)init;	// IMP=0x000000010003bd18

@end

