//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol ASServicesMonitorDelegate, OS_dispatch_queue;

@interface ASServicesMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _keepAliveCount;	// 16 = 0x10
    SEL _abortMethod;	// 24 = 0x18
    NSString *_stuckPluginPath;	// 32 = 0x20
    NSMutableSet *_pendingServiceBundlesToReload;	// 40 = 0x28
    id <ASServicesMonitorDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100008ab0
@property(nonatomic) __weak id <ASServicesMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reloadPendingServiceBundles;	// IMP=0x0000000100008834
- (void)reloadServiceBundleAtPath:(id)arg1;	// IMP=0x0000000100008690
- (CDUnknownBlockType)keepAliveWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000846c
- (CDUnknownBlockType)startWatchdogForPluginAtPath:(id)arg1 syncClassName:(id)arg2 syncSnapshotCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008108
- (CDUnknownBlockType)startWatchdogForPluginAtPath:(id)arg1 syncClassName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007d30
- (void)_restartDueToStuckPluginAtPath:(id)arg1;	// IMP=0x0000000100007c30
- (void)__CRASH_DUE_TO_STUCK_PLUGIN__;	// IMP=0x0000000100007bc0
- (void)_restartProcessIfNeeded;	// IMP=0x0000000100007af8
- (void)decrementKeepAliveCount;	// IMP=0x00000001000079c0
- (void)incrementKeepAliveCount;	// IMP=0x000000010000789c
- (id)init;	// IMP=0x0000000100007808
- (id)_pendingServiceBundlesToReload;	// IMP=0x00000001000077c4

@end

