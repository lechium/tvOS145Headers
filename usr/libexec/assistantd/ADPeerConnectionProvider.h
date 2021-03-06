//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/SiriCoreNWConnection.h>

#import "ADPeerStreamConnectionDelegate-Protocol.h"

@class ADPeerStreamConnection, NSString;
@protocol SiriCoreConnectionProviderDelegate;

@interface ADPeerConnectionProvider : SiriCoreNWConnection <ADPeerStreamConnectionDelegate>
{
    id <SiriCoreConnectionProviderDelegate> _delegate;	// 8 = 0x8
    ADPeerStreamConnection *_peerConnection;	// 16 = 0x10
    _Bool _isListener;	// 24 = 0x18
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e6940
- (void).cxx_destruct;	// IMP=0x00000001000e73fc
- (void)peerStreamConnection:(id)arg1 failedWithError:(id)arg2;	// IMP=0x00000001000e7394
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e7050
- (id)analysisInfo;	// IMP=0x00000001000e7048
- (id)connectionType;	// IMP=0x00000001000e701c
- (void)close;	// IMP=0x00000001000e6fc4
- (void)_getNWConnectionWithInitialData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e6b44
- (void)_setupStaleConnectionTimer;	// IMP=0x00000001000e6b40
- (void)setRetransmitConnectionDropTime:(double)arg1;	// IMP=0x00000001000e6b3c
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;	// IMP=0x00000001000e6b38
- (void)setScopeIsWiFiOnly;	// IMP=0x00000001000e6b34
- (_Bool)shouldFallbackFromError:(id)arg1;	// IMP=0x00000001000e6a9c
- (_Bool)isMultipath;	// IMP=0x00000001000e6a94
- (_Bool)isPeerNotNearbyError:(id)arg1;	// IMP=0x00000001000e6a84
- (_Bool)isPeerConnectionError:(id)arg1;	// IMP=0x00000001000e6a74
- (_Bool)supportsInitialPayload;	// IMP=0x00000001000e6a6c
- (_Bool)shouldFallbackQuickly;	// IMP=0x00000001000e6a64
- (id)headerDataWithForceReconnect:(_Bool)arg1;	// IMP=0x00000001000e6968
- (void)setPrefersWWAN:(_Bool)arg1;	// IMP=0x00000001000e6964
- (void)setProviderConnectionPolicy:(id)arg1;	// IMP=0x00000001000e6960
- (void)setPolicyRoute:(id)arg1;	// IMP=0x00000001000e695c
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000e6948
- (id)_peerConnection;	// IMP=0x00000001000e68cc
- (void)setPeerStreamConnection:(id)arg1;	// IMP=0x00000001000e68b8
- (id)initListenerWithQueue:(id)arg1;	// IMP=0x00000001000e6888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

