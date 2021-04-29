//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEAppProxyProviderContainerDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSPConfiguration, NSPServerFlowDivert, NSString, NSTimer, NWInterface;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface NSPServer : NSObject <NEAppProxyProviderContainerDelegate, NSXPCListenerDelegate>
{
    _Bool _isRunning;	// 8 = 0x8
    _Bool _exitOnStop;	// 9 = 0x9
    _Bool _isObserving;	// 10 = 0xa
    NSPConfiguration *_configuration;	// 16 = 0x10
    NSPServerFlowDivert *_serverFlowDivert;	// 24 = 0x18
    NWInterface *_primaryInterface;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_termSource;	// 40 = 0x28
    NSObject<OS_xpc_object> *_listener;	// 48 = 0x30
    NSTimer *_enableCheckTimer;	// 56 = 0x38
}

+ (id)sharedServer;	// IMP=0x000000010000d0ec
- (void).cxx_destruct;	// IMP=0x00000001000136d4
@property _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(retain) NSTimer *enableCheckTimer; // @synthesize enableCheckTimer=_enableCheckTimer;
@property(retain) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property _Bool exitOnStop; // @synthesize exitOnStop=_exitOnStop;
@property(retain) NSObject<OS_dispatch_source> *termSource; // @synthesize termSource=_termSource;
@property(retain) NWInterface *primaryInterface; // @synthesize primaryInterface=_primaryInterface;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly) NSPServerFlowDivert *serverFlowDivert; // @synthesize serverFlowDivert=_serverFlowDivert;
@property(retain) NSPConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)setTestLatencyMap:(id)arg1;	// IMP=0x0000000100013488
- (void)fetchStateForClient:(id)arg1;	// IMP=0x0000000100013164
- (void)setCurrentLatitude:(id)arg1;	// IMP=0x0000000100012fc4
- (void)reportUsage:(id)arg1;	// IMP=0x0000000100012db8
- (void)refreshWaldoNowWithCompletionHandler:(id)arg1;	// IMP=0x0000000100012b1c
- (void)establishTrustWithEdgeSetForIdentifier:(id)arg1;	// IMP=0x000000010001286c
- (void)setAppRule:(id)arg1;	// IMP=0x0000000100011b5c
- (void)fetchAppRuleForLabel:(id)arg1;	// IMP=0x00000001000118ec
- (void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000116cc
- (void)handleEdgeSet:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100010f18
- (void)setEdgeSet:(id)arg1;	// IMP=0x0000000100010cb8
- (void)fetchEdgeSetForIdentifier:(id)arg1;	// IMP=0x0000000100010a78
- (void)setCurrentConfiguration:(id)arg1;	// IMP=0x00000001000105f8
- (void)fetchCurrentConfigurationWithCompletionHandler:(id)arg1;	// IMP=0x0000000100010438
- (void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010428
- (void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010418
- (void)container:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000102cc
- (void)container:(id)arg1 didStartWithError:(id)arg2;	// IMP=0x0000000100010180
- (void)setupEnableCheck;	// IMP=0x00000001000100f4
- (void)setupEnableCheckInternal;	// IMP=0x000000010000fc70
- (void)didFailWithError:(id)arg1;	// IMP=0x000000010000fc10
- (void)didStartWithError:(id)arg1;	// IMP=0x000000010000fb90
- (void)sendMessage:(id)arg1 toProviderWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fad8
- (void)resetConfiguration;	// IMP=0x000000010000f8dc
- (_Bool)updateState;	// IMP=0x000000010000f434
- (void)waldoNeedsPolicyReset;	// IMP=0x000000010000f260
- (void)applyConfiguration;	// IMP=0x000000010000f134
- (void)applyConfigurationInternal;	// IMP=0x000000010000ef6c
- (void)resetUserEventAgentDates;	// IMP=0x000000010000ec88
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000e73c
- (void)forcePathChange;	// IMP=0x000000010000e658
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000e5a0
- (void)stop;	// IMP=0x000000010000e50c
- (void)start;	// IMP=0x000000010000dda4
- (void)startListenerIfNecessary;	// IMP=0x000000010000dcbc
- (void)registerXPCActivity;	// IMP=0x000000010000d788
- (id)init;	// IMP=0x000000010000d428
- (void)acceptNewConnection:(id)arg1;	// IMP=0x000000010000d15c
@property(readonly) NSObject<OS_dispatch_queue> *queue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

