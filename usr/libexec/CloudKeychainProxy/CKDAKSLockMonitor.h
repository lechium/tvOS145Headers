//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDLockMonitor-Protocol.h"
#import "XPCNotificationListener-Protocol.h"

@class NSString, XPCNotificationDispatcher;
@protocol CKDLockListener, OS_dispatch_queue;

@interface CKDAKSLockMonitor : NSObject <CKDLockMonitor, XPCNotificationListener>
{
    _Bool _unlockedSinceBoot;	// 8 = 0x8
    _Bool _locked;	// 9 = 0x9
    NSObject<CKDLockListener> *_listener;	// 16 = 0x10
    XPCNotificationDispatcher *_dispatcher;	// 24 = 0x18
    CDUnknownBlockType _notificationBlock;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)monitor;	// IMP=0x00000001000020e0
- (void).cxx_destruct;	// IMP=0x0000000100002024
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) CDUnknownBlockType notificationBlock; // @synthesize notificationBlock=_notificationBlock;
@property(retain) XPCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property __weak NSObject<CKDLockListener> *listener; // @synthesize listener=_listener;
@property(readonly) _Bool locked; // @synthesize locked=_locked;
@property(readonly) _Bool unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
- (void)_onqueueRecheck;	// IMP=0x0000000100001df8
- (void)recheck;	// IMP=0x0000000100001da0
- (void)connectTo:(id)arg1;	// IMP=0x0000000100001d6c
- (void)notifyListener;	// IMP=0x0000000100001cfc
- (void)handleNotification:(const char *)arg1;	// IMP=0x0000000100001cb4
- (id)init;	// IMP=0x0000000100001b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

