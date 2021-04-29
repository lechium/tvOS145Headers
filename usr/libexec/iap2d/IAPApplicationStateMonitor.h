//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayLayoutObserver-Protocol.h"

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSMutableSet, NSSet, NSString;
@protocol IAPApplicationStateMonitorDelegate, OS_dispatch_queue;

@interface IAPApplicationStateMonitor : NSObject <FBSDisplayLayoutObserver>
{
    BKSApplicationStateMonitor *_appStateMonitor;	// 8 = 0x8
    FBSDisplayLayoutMonitor *_sharedDisplayLayoutMonitor;	// 16 = 0x10
    _Bool _observingFBSLayoutMonitor;	// 24 = 0x18
    _Bool _isAnyAppOpenInForeground;	// 25 = 0x19
    NSObject<IAPApplicationStateMonitorDelegate> *_delegate;	// 32 = 0x20
    NSMutableSet *_foregroundAppBundleIDsMutable;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_foregroundBundleIDsQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000310f0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *foregroundBundleIDsQueue; // @synthesize foregroundBundleIDsQueue=_foregroundBundleIDsQueue;
@property(retain, nonatomic) NSMutableSet *foregroundAppBundleIDsMutable; // @synthesize foregroundAppBundleIDsMutable=_foregroundAppBundleIDsMutable;
@property(readonly, nonatomic) _Bool isAnyAppOpenInForeground; // @synthesize isAnyAppOpenInForeground=_isAnyAppOpenInForeground;
@property(nonatomic) NSObject<IAPApplicationStateMonitorDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *foregroundAppBundleIDs;
- (id)applicationInfoForPIDSync:(int)arg1;	// IMP=0x0000000100030f14
- (id)applicationInfoForBundleIDSync:(id)arg1;	// IMP=0x0000000100030f04
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000100030c2c
- (void)stopObserving;	// IMP=0x0000000100030b1c
- (void)startObserving;	// IMP=0x000000010003067c
- (void)dealloc;	// IMP=0x00000001000305f8
- (id)init;	// IMP=0x0000000100030584
- (void)sharedInit;	// IMP=0x00000001000304d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

