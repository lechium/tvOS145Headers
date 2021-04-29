//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFAnnouncementRequestCapabilityProvidingDelegate-Protocol.h"

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProviding, OS_dispatch_queue;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate>
{
    NSHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <AFAnnouncementRequestCapabilityProviding> _capabilityProvider;	// 24 = 0x18
    long long _platform;	// 32 = 0x20
}

+ (long long)announcementTypeForBundleID:(id)arg1;	// IMP=0x00000001001bfe2c
+ (_Bool)applicationWithBundleID:(id)arg1 canAnnounceNotificationWithIntentIdentifiers:(id)arg2 onPlatform:(long long)arg3;	// IMP=0x00000001001bfbec
+ (_Bool)applicationWithBundleID:(id)arg1 canAnnounceNotificationWithIntentIdentifiers:(id)arg2;	// IMP=0x00000001001bfbdc
+ (_Bool)supportedByApplicationWithBundleID:(id)arg1 onPlatform:(long long)arg2;	// IMP=0x00000001001bf954
+ (_Bool)supportedByApplicationWithBundleID:(id)arg1;	// IMP=0x00000001001bf944
+ (Class)_classForPlatform:(long long)arg1;	// IMP=0x00000001001bf8a8
+ (id)sharedManager;	// IMP=0x00000001001bf6f8
- (void).cxx_destruct;	// IMP=0x00000001001c0a04
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00000001001c09bc
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00000001001c0974
- (void)notifyObserversOfCurrentRequestCanBeHandledState:(_Bool)arg1 onPlatform:(long long)arg2;	// IMP=0x00000001001c07dc
- (void)notifyObserversOfCurrentEligibleSetupState:(_Bool)arg1 onPlatform:(long long)arg2;	// IMP=0x00000001001c0680
- (void)removeObserver:(id)arg1;	// IMP=0x00000001001c0670
- (void)addObserver:(id)arg1;	// IMP=0x00000001001c0660
- (_Bool)requestCanBeHandled;	// IMP=0x00000001001c03f8
- (void)fetchRequestCanBeHandledStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c02d8
- (_Bool)hasEligibleSetup;	// IMP=0x00000001001bffd0
- (void)fetchEligibleSetupStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bfeb0
- (id)_initWithPlatform:(long long)arg1;	// IMP=0x00000001001bf7a8

@end
