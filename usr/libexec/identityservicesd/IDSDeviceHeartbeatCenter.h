//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMSystemMonitorListener-Protocol.h"

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject <IMSystemMonitorListener>
{
    IMTimer *_getDependentHeartbeatTimer;	// 8 = 0x8
    NSMutableDictionary *_usersToHeartbeatDatesMap;	// 16 = 0x10
    _Bool _isSetup;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000a5a4
- (void).cxx_destruct;	// IMP=0x000000010000d028
- (void)systemDidWake;	// IMP=0x000000010000cff8
- (void)_cleanupKeychain;	// IMP=0x000000010000ce9c
- (_Bool)_fetchExpiryDatesIfNecessary;	// IMP=0x000000010000c938
- (void)accountsChanged;	// IMP=0x000000010000c2ac
- (void)_updateExpiry:(double)arg1 forUser:(id)arg2;	// IMP=0x000000010000bd08
- (void)resetExpiryForUser:(id)arg1;	// IMP=0x000000010000bbd4
- (void)_updateDependentRegistrations;	// IMP=0x000000010000b9d4
- (void)_scheduleRescueHeartBeat;	// IMP=0x000000010000b814
- (_Bool)_scheduleDependentRegistrations;	// IMP=0x000000010000b51c
- (void)invalidateTimer;	// IMP=0x000000010000b4d4
- (void)printInfo;	// IMP=0x000000010000aff0
- (void)dealloc;	// IMP=0x000000010000af60
- (id)_getNextExpirationDate;	// IMP=0x000000010000a9f8
- (void)_heartBeat;	// IMP=0x000000010000a8cc
- (void)setup;	// IMP=0x000000010000a848
- (id)init;	// IMP=0x000000010000a738

@end

