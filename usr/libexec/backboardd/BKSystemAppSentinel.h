//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSystemApplicationServerDelegate-Protocol.h"

@class BKSystemAppHeartbeat, BKSystemApplication, BKSystemApplicationServer, NSLock, NSMapTable, NSMutableOrderedSet, NSString;

@interface BKSystemAppSentinel : NSObject <BKSystemApplicationServerDelegate>
{
    NSLock *_lock;	// 8 = 0x8
    BKSystemApplicationServer *_server;	// 16 = 0x10
    BKSystemApplication *_systemApp;	// 24 = 0x18
    NSMutableOrderedSet *_connectedSystemApps;	// 32 = 0x20
    NSMapTable *_checkinCompletionsBySystemApp;	// 40 = 0x28
    _Bool _readyForSystemApp;	// 48 = 0x30
    _Bool _systemAppBlocked;	// 49 = 0x31
    BKSystemAppHeartbeat *_heartbeat;	// 56 = 0x38
    NSString *_activeAlternateSystemAppBundleIdentifier;	// 64 = 0x40
    unsigned int _enableIdleSleepAssertionID;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000100047ee4
- (void).cxx_destruct;	// IMP=0x00000001000479a8
- (void)server:(id)arg1 systemApp:(id)arg2 hasActions:(id)arg3;	// IMP=0x0000000100047838
- (void)server:(id)arg1 systemAppFinishBooting:(id)arg2;	// IMP=0x000000010004751c
- (void)server:(id)arg1 systemAppDisconnected:(id)arg2;	// IMP=0x0000000100047324
- (void)server:(id)arg1 systemAppCheckedIn:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100047090
- (void)server:(id)arg1 systemAppConnected:(id)arg2;	// IMP=0x0000000100046f64
- (_Bool)lock_unblockSystemApp;	// IMP=0x0000000100046ecc
- (_Bool)lock_blockSystemApp;	// IMP=0x0000000100046dd8
- (void)_handleRelaunchRequestFromSystemApp:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0000000100046cec
- (void)lock_updatePrimarySystemApp;	// IMP=0x000000010004662c
- (void)lock_bootstrapSystemApp;	// IMP=0x00000001000464cc
- (_Bool)unblockSystemApp;	// IMP=0x0000000100046478
- (_Bool)blockSystemApp;	// IMP=0x0000000100046424
- (_Bool)ping;	// IMP=0x00000001000462b4
- (void)allowSystemAppCheckIn;	// IMP=0x0000000100046264
- (void)startSystemAppCheckInServer;	// IMP=0x0000000100046254
- (id)systemShellState;	// IMP=0x00000001000461a0
- (id)systemApplications;	// IMP=0x0000000100046124
- (id)systemApp;	// IMP=0x00000001000460d8
@property(copy) NSString *activeAlternateSystemAppBundleIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100045e7c
- (id)init;	// IMP=0x0000000100045d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
