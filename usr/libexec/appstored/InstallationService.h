//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDInstallationServiceProtocol-Protocol.h"

@class AppInstallsDatabaseStore, NSString, RequestThrottle, TaskQueue;
@protocol OS_dispatch_queue;

@interface InstallationService : NSObject <ASDInstallationServiceProtocol>
{
    id _bagChangedNotification;	// 8 = 0x8
    AppInstallsDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    RequestThrottle *_requestThrottle;	// 32 = 0x20
    TaskQueue *_taskQueue;	// 40 = 0x28
}

+ (id)defaultService;	// IMP=0x0000000100088a70
- (void).cxx_destruct;	// IMP=0x0000000100089b6c
- (void)_installTestFlightApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3 requestToken:(id)arg4;	// IMP=0x0000000100089974
- (void)_installEnterpriseApps:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2 requestToken:(id)arg3;	// IMP=0x00000001000898f8
- (void)installTestFlightApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100089854
- (void)installScreenSyncApps:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100088f5c
- (void)installEnterpriseApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100088ebc
- (void)installAppReviewApps:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100088c30
- (id)_init;	// IMP=0x0000000100088b60
- (void)dealloc;	// IMP=0x0000000100088ae8
- (id)init;	// IMP=0x0000000100088adc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
