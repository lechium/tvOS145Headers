//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDSharePointBrowserDelegate-Protocol.h"

@class CUCoalescer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SDClassroomBrowser, SDConnectedBrowser, SDDomainBrowser, SDManagedBrowser, SDRapportBrowser, SDSharePointBrowser, SDStatusMonitor, SDWorkgroupBrowser, SDXPCHelperConnection;
@protocol OS_dispatch_queue, OS_xpc_object, SDNodeBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDNodeBrowser : NSObject <SDSharePointBrowserDelegate>
{
    NSString *_kind;	// 8 = 0x8
    struct __SFNode *_parent;	// 16 = 0x10
    NSArray *_protocols;	// 24 = 0x18
    NSString *_protocol;	// 32 = 0x20
    long long _mode;	// 40 = 0x28
    int _error;	// 48 = 0x30
    _Bool _combineWorkgroups;	// 52 = 0x34
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CUCoalescer *_coalescer;	// 64 = 0x40
    SDStatusMonitor *_monitor;	// 72 = 0x48
    NSMutableSet *_odiskDomains;	// 80 = 0x50
    NSMutableSet *_airDropDomains;	// 88 = 0x58
    NSMutableSet *_bonjourDomains;	// 96 = 0x60
    NSMutableSet *_windowsWorkgroups;	// 104 = 0x68
    SDDomainBrowser *_domainBrowser;	// 112 = 0x70
    SDManagedBrowser *_managedBrowser;	// 120 = 0x78
    SDClassroomBrowser *_classroomBrowser;	// 128 = 0x80
    SDConnectedBrowser *_connectedBrowser;	// 136 = 0x88
    SDWorkgroupBrowser *_workgroupBrowser;	// 144 = 0x90
    SDSharePointBrowser *_sharePointBrowser;	// 152 = 0x98
    SDRapportBrowser *_rapportBrowser;	// 160 = 0xa0
    NSDictionary *_options;	// 168 = 0xa8
    NSMutableDictionary *_managedURLTable;	// 176 = 0xb0
    NSMutableDictionary *_commentHashTable;	// 184 = 0xb8
    NSMutableDictionary *_originalNodes;	// 192 = 0xc0
    NSString *_bundleID;	// 200 = 0xc8
    SDXPCHelperConnection *_helperConnection;	// 208 = 0xd0
    id <SDNodeBrowserDelegate> _delegate;	// 216 = 0xd8
    NSObject<OS_xpc_object> *_connection;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000010014e30c
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNodeBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)rangingMeasurementFromNode:(struct __SFNode *)arg1;	// IMP=0x000000010014e218
- (id)mostRelevantMeasurementFromA:(id)arg1 andMeasurementB:(id)arg2;	// IMP=0x000000010014e08c
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x000000010014e008
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x000000010014dfec
@property(readonly, copy) NSArray *sidebarNodes;
@property(readonly, copy) NSArray *nodes;
- (id)nodesInternal:(_Bool)arg1;	// IMP=0x000000010014dd40
- (void)appendAllNode:(id)arg1;	// IMP=0x000000010014dca8
- (void)stop;	// IMP=0x000000010014db8c
- (void)start;	// IMP=0x000000010014d96c
- (void)unloadRapport;	// IMP=0x000000010014d8dc
- (void)unloadSidebarPrefsMonitor;	// IMP=0x000000010014d850
- (void)unloadAirDrop;	// IMP=0x000000010014d694
- (void)unloadODisk;	// IMP=0x000000010014d4d8
- (void)unloadClassroom;	// IMP=0x000000010014d448
- (void)unloadManaged;	// IMP=0x000000010014d3b8
- (void)unloadConnected;	// IMP=0x000000010014d328
- (void)unloadSharePoints;	// IMP=0x000000010014d2d0
- (void)unloadWorkgroups;	// IMP=0x000000010014d240
- (void)unloadDomains;	// IMP=0x000000010014d1b0
- (void)unloadWindows;	// IMP=0x000000010014cff4
- (void)unloadBonjour;	// IMP=0x000000010014ce38
- (id)airDropNodes;	// IMP=0x000000010014cd60
- (id)odiskNodes;	// IMP=0x000000010014cce4
- (id)sharePointNodes;	// IMP=0x000000010014cc80
- (id)neighborhoodNodes;	// IMP=0x000000010014cbd8
- (id)sidebarNodesFromServerNodes:(id)arg1 nonServerCount:(unsigned long long)arg2 addAllNode:(_Bool *)arg3;	// IMP=0x000000010014c7b8
- (void)updateSelectionReasonInNodes:(id)arg1;	// IMP=0x000000010014c7b4
- (void)addFakeRangingMeasurementIfAppropriateToNodesInCache:(id)arg1;	// IMP=0x000000010014c7b0
- (void)addRapportChildrenFromCache:(id)arg1;	// IMP=0x000000010014c624
- (void)addConnectedChildrenFromCache:(id)arg1;	// IMP=0x000000010014c1ac
- (void)addManagedChildrenFromCache:(id)arg1;	// IMP=0x000000010014beec
- (void)addClassroomChildrenFromCache:(id)arg1;	// IMP=0x000000010014bd5c
- (void)addWindowsChildrenFromCache:(id)arg1;	// IMP=0x000000010014b89c
- (void)addBonjourChildrenFromCache:(id)arg1;	// IMP=0x000000010014b410
- (void)copyOverBonjourInfo:(struct __SFNode *)arg1 source:(struct __SFNode *)arg2;	// IMP=0x000000010014b290
- (id)workgroupChildren;	// IMP=0x000000010014b224
- (id)domainChildren;	// IMP=0x000000010014b20c
- (void)loadRapport;	// IMP=0x000000010014b088
- (void)loadSidebarPrefsMonitor;	// IMP=0x000000010014aff4
- (void)loadAirDrop;	// IMP=0x000000010014ac4c
- (void)loadClassroom;	// IMP=0x000000010014aa90
- (void)loadODisk;	// IMP=0x000000010014a7a8
- (void)loadManaged;	// IMP=0x000000010014a694
- (void)loadConnected;	// IMP=0x000000010014a4fc
- (void)loadSharePoints;	// IMP=0x000000010014a4f8
- (_Bool)onlySupportsADisk:(id)arg1;	// IMP=0x000000010014a45c
- (void)loadWorkgroups;	// IMP=0x000000010014a328
- (void)loadDomains;	// IMP=0x000000010014a210
- (void)loadWindows;	// IMP=0x0000000100149f48
- (void)loadBonjour;	// IMP=0x0000000100149bf8
@property(copy) NSDictionary *options;
@property long long mode;
- (void)sidebarPrefsChanged:(id)arg1;	// IMP=0x0000000100149b14
- (void)managedChanged:(id)arg1;	// IMP=0x0000000100149adc
- (void)connectedChanged:(id)arg1;	// IMP=0x0000000100149aa4
- (void)sharePointBrowser:(id)arg1 nodesDidChangeWithError:(int)arg2;	// IMP=0x0000000100149a00
- (void)workgroupsChanged:(id)arg1;	// IMP=0x00000001001499c8
- (void)domainsChanged:(id)arg1;	// IMP=0x0000000100149990
- (void)serversChanged:(id)arg1;	// IMP=0x00000001001498cc
- (void)classroomChanged:(id)arg1;	// IMP=0x00000001001498c0
- (void)takeActionOnServerChanged:(id)arg1 neighborhood:(id)arg2;	// IMP=0x0000000100149784
- (void)notifyClientAboutWorkgroups;	// IMP=0x00000001001493dc
- (void)setConnectionState:(int)arg1;	// IMP=0x00000001001493d0
- (void)setUserName:(id)arg1;	// IMP=0x00000001001493c4
- (void)setError:(int)arg1;	// IMP=0x00000001001493bc
- (void)notifyClient;	// IMP=0x00000001001493ac
- (id)coalescedNodesForNodesCache:(id)arg1;	// IMP=0x0000000100148704
- (void)dealloc;	// IMP=0x00000001001486ac
- (id)initWithNode:(struct __SFNode *)arg1 protocol:(id)arg2 flags:(unsigned long long)arg3 kind:(id)arg4;	// IMP=0x00000001001484e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

