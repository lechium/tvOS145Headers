//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AppMetricsMonitor, JobManagerListener, LaunchServicesObserver, NSCountedSet, NSMutableDictionary, NSXPCListener, ODRAppReviewListener, ODRDevtoolsListener, ODRDiagnosticsListener, ODRLaunchServicesListener, ODRServiceDelegate, OctaneListener, RequestBroker, SoftwareUpdateListener, StoreQueueListener, XPCServiceBroker;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    int _defaultsToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_jetsamSource;	// 24 = 0x18
    JobManagerListener *_jobManagerDelegate;	// 32 = 0x20
    NSXPCListener *_jobManagerListener;	// 40 = 0x28
    LaunchServicesObserver *_launchServicesObserver;	// 48 = 0x30
    OctaneListener *_octaneDelegate;	// 56 = 0x38
    NSXPCListener *_octaneListener;	// 64 = 0x40
    ODRAppReviewListener *_odrAppReviewDelegate;	// 72 = 0x48
    NSXPCListener *_odrAppReviewListener;	// 80 = 0x50
    ODRDiagnosticsListener *_odrCtlDelegate;	// 88 = 0x58
    NSXPCListener *_odrCtlListener;	// 96 = 0x60
    ODRDevtoolsListener *_odrDevtoolsDelegate;	// 104 = 0x68
    NSXPCListener *_odrDevtoolsListener;	// 112 = 0x70
    ODRServiceDelegate *_odrFoundationDelegate;	// 120 = 0x78
    NSXPCListener *_odrFoundationListener;	// 128 = 0x80
    ODRLaunchServicesListener *_odrLaunchServicesDelegate;	// 136 = 0x88
    NSXPCListener *_odrLaunchServicesListener;	// 144 = 0x90
    NSXPCListener *_personalizationStoreService;	// 152 = 0x98
    RequestBroker *_requestBroker;	// 160 = 0xa0
    NSXPCListener *_requestListener;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_signalSource;	// 176 = 0xb0
    NSXPCListener *_softwareUpdateListener;	// 184 = 0xb8
    SoftwareUpdateListener *_softwareUpdateDelegate;	// 192 = 0xc0
    NSXPCListener *_storeQueueListener;	// 200 = 0xc8
    StoreQueueListener *_storeQueueDelegate;	// 208 = 0xd0
    NSCountedSet *_transactionCount;	// 216 = 0xd8
    NSMutableDictionary *_transactionStore;	// 224 = 0xe0
    XPCServiceBroker *_serviceBroker;	// 232 = 0xe8
    AppMetricsMonitor *_appMetricsMonitor;	// 240 = 0xf0
}

+ (void)_performODRSoftwareUpdateHousekeeping:(_Bool)arg1;	// IMP=0x000000010020e3e0
+ (_Bool)isPasscodeDisabled;	// IMP=0x000000010020c6e8
+ (_Bool)isDeviceUnlocked;	// IMP=0x000000010020c6bc
+ (id)daemon;	// IMP=0x000000010020c530
- (void).cxx_destruct;	// IMP=0x000000010020ec7c
@property(readonly, nonatomic) AppMetricsMonitor *appMetricsMonitor; // @synthesize appMetricsMonitor=_appMetricsMonitor;
- (void)_setAMSProperties;	// IMP=0x000000010020ec1c
- (void)_startODRXPCListeners;	// IMP=0x000000010020ea70
- (void)_setupODRXPCMaintenanceTask;	// IMP=0x000000010020e79c
- (void)_setupODRDataMigrationTask;	// IMP=0x000000010020e738
- (void)_setupCacheDeleteCoordinator;	// IMP=0x000000010020e680
- (void)_handleMigrationDidFinishNotification:(id)arg1;	// IMP=0x000000010020e3bc
- (void)_updateDAAPDatabasesIfNeeded;	// IMP=0x000000010020e2f0
- (void)_startXPCModernListeners;	// IMP=0x000000010020da3c
- (void)_startXPCListeners;	// IMP=0x000000010020d8d0
- (void)_startMidChangedNotifier;	// IMP=0x000000010020d734
- (void)_startAppInstallQueue;	// IMP=0x000000010020d6b4
- (void)_setupSignalHandler;	// IMP=0x000000010020d5dc
- (void)_startODR;	// IMP=0x000000010020d3b8
- (void)_startLaunchServicesObserver;	// IMP=0x000000010020d384
- (void)_setupLogging;	// IMP=0x000000010020d22c
- (id)_createListenerForMachServiceName:(id)arg1 withDelegate:(id)arg2;	// IMP=0x000000010020d11c
- (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x000000010020d00c
- (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x000000010020cef4
- (void)performKeepAliveTransaction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010020ce70
- (void)start;	// IMP=0x000000010020c7c0
- (_Bool)isMultiUser;	// IMP=0x000000010020c7b8
- (void)endShowingDialog;	// IMP=0x000000010020c760
- (void)beginShowingDialog;	// IMP=0x000000010020c708
- (void)dealloc;	// IMP=0x000000010020c670
- (id)init;	// IMP=0x000000010020c5d0

@end
