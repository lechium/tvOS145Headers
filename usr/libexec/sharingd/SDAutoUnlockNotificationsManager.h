//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockNotificationsManager : NSObject
{
    id _doubleClickListener;	// 8 = 0x8
    id _cancelListener;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSDictionary *_promptInfo;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_notificationTimer;	// 40 = 0x28
    CDUnknownBlockType _radarNotificationCompletion;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x0000000100063ab0
- (void).cxx_destruct;	// IMP=0x00000001000644d8
@property(copy) CDUnknownBlockType radarNotificationCompletion; // @synthesize radarNotificationCompletion=_radarNotificationCompletion;
@property(retain) NSObject<OS_dispatch_source> *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain) NSDictionary *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
- (void)invalidateNotificationTimer;	// IMP=0x00000001000643b0
- (void)restartNotificationTimer:(unsigned long long)arg1;	// IMP=0x00000001000641bc
- (void)dismissNotification;	// IMP=0x00000001000641b8
- (void)showFileRadarNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000641b4
- (void)showSetupRetryNotificationWithDevice:(id)arg1;	// IMP=0x00000001000641b0
- (void)showPhoneAutoRelockNotification;	// IMP=0x00000001000641ac
- (void)showMacUnlockedNotificationWithDuration:(id)arg1;	// IMP=0x00000001000641a8
- (void)showSuggestionNotificationWithDevice:(id)arg1;	// IMP=0x00000001000641a4
- (void)showPhoneAutoUnlockUpsellNotification;	// IMP=0x00000001000641a0
- (void)clearPhoneAutoUnlockUpsellNotification;	// IMP=0x000000010006419c
- (void)showUnlockedByDeviceNotificationWithDeviceID:(id)arg1;	// IMP=0x0000000100064084
- (void)showBeganUnlockByDeviceNotificationWithDeviceID:(id)arg1;	// IMP=0x0000000100063f6c
- (void)removeAutoUnlockNotification;	// IMP=0x0000000100063f68
- (void)removeAuthorizationRequestNotification;	// IMP=0x0000000100063f64
- (void)showAuthorizationRequestNotificationWithDeviceID:(id)arg1 appName:(id)arg2 appIcon:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100063f60
- (id)authPromptInfo;	// IMP=0x0000000100063e78
- (void)notifyObservers:(SEL)arg1;	// IMP=0x0000000100063cbc
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100063c40
- (void)addObserver:(id)arg1;	// IMP=0x0000000100063bc4
- (void)dealloc;	// IMP=0x0000000100063b90
- (id)init;	// IMP=0x0000000100063b1c

@end

