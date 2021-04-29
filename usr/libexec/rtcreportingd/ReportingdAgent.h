//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "ReportingdSessionDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, RTCActivityScheduler, RTCActivitySchedulerOptions, RTCSelfReporter;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface ReportingdAgent : NSObject <NSXPCListenerDelegate, ReportingdSessionDelegate>
{
    NSMutableDictionary *_processActiveSessions;	// 8 = 0x8
    NSMutableArray *_sessionList;	// 16 = 0x10
    NSMutableDictionary *_cachedStorebags;	// 24 = 0x18
    NSMutableDictionary *_correlatedSessions;	// 32 = 0x20
    NSMutableArray *_emphemeralSessions;	// 40 = 0x28
    NSMutableDictionary *_sharedData;	// 48 = 0x30
    NSMutableDictionary *_sharedConnectivityHelpers;	// 56 = 0x38
    int _OSTransactionReferenceCounter;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_stateQueue;	// 72 = 0x48
    RTCActivitySchedulerOptions *_optionsForNormalScheduling;	// 80 = 0x50
    RTCActivitySchedulerOptions *_optionsForPeriodicRealtimeScheduling;	// 88 = 0x58
    RTCActivitySchedulerOptions *_optionsForAllRealtimeScheduling;	// 96 = 0x60
    RTCActivityScheduler *_normalActivityScheduler;	// 104 = 0x68
    RTCActivityScheduler *_periodicRealtimeActivityScheduler;	// 112 = 0x70
    RTCActivityScheduler *_allRealtimeActivityScheduler;	// 120 = 0x78
    RTCSelfReporter *_selfReporter;	// 128 = 0x80
    unsigned char _activeClients[37];	// 136 = 0x88
    NSObject<OS_os_transaction> *_OSTransaction;	// 176 = 0xb0
    NSDate *_nextAllowedStorebagNetworkFetchRequest;	// 184 = 0xb8
}

- (void)fetchAndCacheStorebag:(int)arg1 forBundleID:(id)arg2 andUserInfo:(id)arg3;	// IMP=0x0000000100022e5c
- (void)networkFetchDidFail;	// IMP=0x0000000100022d60
- (_Bool)canFetchNetworkStorebag;	// IMP=0x0000000100022c44
- (id)sharedActivitySchedulerForRealtimeBackend:(_Bool)arg1 isBatching:(_Bool)arg2;	// IMP=0x0000000100022c20
- (id)sharedDataForSession:(id)arg1;	// IMP=0x0000000100022be4
- (void)removeObjectFromSharedDataForSession:(id)arg1 key:(id)arg2;	// IMP=0x0000000100022b84
- (void)updateSharedDataForSession:(id)arg1 sharedData:(id)arg2;	// IMP=0x0000000100022ad8
- (_Bool)isActiveClientLimitReachedForSession:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000227bc
- (void)copyReportingAgentState:(id *)arg1 cachedStorebags:(id *)arg2;	// IMP=0x00000001000226c0
- (void)saveEphemeralSessions;	// IMP=0x00000001000226b4
- (id)getEphemeralSessions;	// IMP=0x00000001000226ac
- (id)getSelfReporter;	// IMP=0x00000001000226a4
- (void)updateDownstreamSessions:(id)arg1;	// IMP=0x00000001000223e4
- (id)getAncestorWithAggregatorForSession:(id)arg1;	// IMP=0x0000000100022310
- (id)parentSessionForChild:(id)arg1;	// IMP=0x00000001000220d4
- (void)updateCorrelatedSessions:(id)arg1;	// IMP=0x0000000100021da4
- (id)getFirstSessionWithHierarchy:(int)arg1 inSessionList:(id)arg2;	// IMP=0x0000000100021c80
- (id)parentSessionIDStringForSession:(id)arg1;	// IMP=0x0000000100021910
- (id)storebagVersionForSession:(id)arg1;	// IMP=0x0000000100021840
- (id)storebagForSession:(id)arg1;	// IMP=0x000000010002132c
- (void)retainOSTransaction;	// IMP=0x0000000100021200
- (void)releaseOSTransactions:(unsigned int)arg1;	// IMP=0x00000001000210b4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010002096c
- (void)saveEphermalSessionsToDisk;	// IMP=0x0000000100020764
- (void)loadOrCreateEphemeralSessionsLookup;	// IMP=0x00000001000204c8
- (void)perPIDInfo:(int)arg1;	// IMP=0x0000000100020260
- (id)bundleIDforXPCConnection:(id)arg1 forProcessName:(id)arg2;	// IMP=0x0000000100020134
- (id)processNameForPID:(int)arg1;	// IMP=0x0000000100020064
- (void)invalidateSession:(id)arg1;	// IMP=0x0000000100020058
- (id)createSession;	// IMP=0x0000000100020044
- (void)run;	// IMP=0x000000010001ffcc
- (void)dealloc;	// IMP=0x000000010001fee8
- (id)init;	// IMP=0x000000010001fc7c
- (void)invalidateReportingSession:(id)arg1;	// IMP=0x000000010001f91c
- (id)createReportingSessionWithDelegate:(id)arg1 connection:(id)arg2;	// IMP=0x000000010001f780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
