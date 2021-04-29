//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "UAResumableActivitiesAdministrativeProtocol-Protocol.h"
#import "UAResumableActivitiesSysdiagnoseSupportProtocol-Protocol.h"

@class NSString, NSXPCListener, SharingBTLESuggestedItem, UAActivityReplay, UACornerActionManager, UANetworkReplayRendevousHandler, UAPingController;

@interface ActivityManagerDebuggingManager : NSObject <NSXPCListenerDelegate, UAResumableActivitiesAdministrativeProtocol, UAResumableActivitiesSysdiagnoseSupportProtocol>
{
    _Bool _supportNetworkPeers;	// 8 = 0x8
    _Bool _disableAdminEntitlmentChecking;	// 9 = 0x9
    UACornerActionManager *manager;	// 16 = 0x10
    SharingBTLESuggestedItem *fakeBTLEInjectedItem;	// 24 = 0x18
    NSXPCListener *listener;	// 32 = 0x20
    UAActivityReplay *_replayManager;	// 40 = 0x28
    UAPingController *_pingController;	// 48 = 0x30
    UANetworkReplayRendevousHandler *_networkConnectionHandler;	// 56 = 0x38
    unsigned long long _recentActionsStateHandler;	// 64 = 0x40
    struct timeval _ignoredRTimeVal;	// 72 = 0x48
}

+ (id)actionStrs:(long long)arg1 maximumInternal:(double)arg2 clear:(_Bool)arg3;	// IMP=0x000000010008b520
+ (void)appendRecentAction:(id)arg1;	// IMP=0x000000010008b3b8
+ (void)log:(int)arg1 format:(id)arg2;	// IMP=0x000000010008afa4
+ (void)log:(int)arg1 format:(id)arg2 args:(char *)arg3;	// IMP=0x000000010008aee4
- (void).cxx_destruct;	// IMP=0x00000001000913d8
@property unsigned long long recentActionsStateHandler; // @synthesize recentActionsStateHandler=_recentActionsStateHandler;
@property(readonly) struct timeval ignoredRTimeVal; // @synthesize ignoredRTimeVal=_ignoredRTimeVal;
@property(retain) UANetworkReplayRendevousHandler *networkConnectionHandler; // @synthesize networkConnectionHandler=_networkConnectionHandler;
@property(retain) UAPingController *pingController; // @synthesize pingController=_pingController;
@property(retain) UAActivityReplay *replayManager; // @synthesize replayManager=_replayManager;
@property _Bool disableAdminEntitlmentChecking; // @synthesize disableAdminEntitlmentChecking=_disableAdminEntitlmentChecking;
@property(retain) NSXPCListener *listener; // @synthesize listener;
@property(retain) SharingBTLESuggestedItem *fakeBTLEInjectedItem; // @synthesize fakeBTLEInjectedItem;
@property(retain) UACornerActionManager *manager; // @synthesize manager;
- (void)doGetPairedDevices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100091014
- (void)doGetSFActivityAdvertisement:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100090cf0
- (void)doGetLoggingFileForClient:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100090c6c
- (void)doSetLocalPasteboardReflection:(_Bool)arg1;	// IMP=0x0000000100090bd4
- (void)doSetRemotePasteboardAvalible:(_Bool)arg1;	// IMP=0x0000000100090b38
- (void)doSetDefaults:(id)arg1 value:(id)arg2;	// IMP=0x0000000100090a80
- (void)doCopyDefaults:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000909b0
- (void)doReplayCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100090790
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000903ac
- (void)stopAdvertisingPing;	// IMP=0x00000001000902e0
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;	// IMP=0x00000001000901d8
- (void)doSetupRendevous:(id)arg1 domain:(id)arg2 activate:(_Bool)arg3;	// IMP=0x0000000100090120
- (void)doSetupNetworkedPairs:(id)arg1 port:(long long)arg2;	// IMP=0x000000010008ffd4
- (void)doDidSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008fb70
- (void)doWillSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008f734
- (void)doTerminateServer;	// IMP=0x000000010008f6fc
- (void)doInjectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 webPageURL:(id)arg6 remoteModel:(id)arg7 duration:(double)arg8 payloadDelay:(double)arg9;	// IMP=0x000000010008eb7c
- (void)doGetCurrentAdvertisedItemUUID:(CDUnknownBlockType)arg1;	// IMP=0x000000010008ea74
- (void)doCopySimulatorStatusString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008e9b8
- (void)doCopyRecentActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008e888
- (void)doFetchMoreAppSuggestions;	// IMP=0x000000010008e878
- (void)doCopyStatusString:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010008e1e0
- (void)doCopyDynamicUserActivitiesString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008e138
- (void)doCopyDebuggingInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008e0a4
- (void)doCopyEnabledUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010008e000
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010008deac
- (void)doCopyAllUUIDsOfType:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008dc70
- (void)doFindMatchingUserActivityForString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008cedc
- (void)doSetDebugOption:(id)arg1 value:(id)arg2;	// IMP=0x000000010008c3f4
- (void)doNOP:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008c2d0
- (void)receivePing:(id)arg1;	// IMP=0x000000010008c1fc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010008be74
- (double)currentPerfTime;	// IMP=0x000000010008be28
- (id)perfSummaryString;	// IMP=0x000000010008bd98
@property _Bool supportNetworkPeers; // @synthesize supportNetworkPeers=_supportNetworkPeers;
- (void)setDebugging:(_Bool)arg1;	// IMP=0x000000010008b344
- (void)resume;	// IMP=0x000000010008b2d4
- (void)suspend;	// IMP=0x000000010008b264
- (id)initWithManager:(id)arg1;	// IMP=0x000000010008afd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

