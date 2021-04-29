//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioSessionControllerDelegate-Protocol.h"

@class NSString;

@interface ADTTSMutingObserver : NSObject <CSAudioSessionControllerDelegate>
{
    struct __CFBag *_observers;	// 8 = 0x8
    long long _useDeviceSpeakerForTTSPreference;	// 16 = 0x10
    struct os_unfair_lock_s _handsFreeLock;	// 24 = 0x18
    _Bool _currentRouteIsHandsFree;	// 28 = 0x1c
}

+ (id)sharedInstance;	// IMP=0x00000001001859f4
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x0000000100186c74
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x0000000100186b20
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00000001001869cc
- (void)removeHandsFreeStateObserver:(id)arg1;	// IMP=0x00000001001868d0
- (void)addHandsFreeStateObserver:(id)arg1;	// IMP=0x0000000100186730
- (void)_useDeviceSpeakerForTTSPreferenceChanged;	// IMP=0x00000001001865f8
- (void)_stopListeningForMuteStateChanges;	// IMP=0x0000000100186508
- (void)_listenForMuteStateChanges;	// IMP=0x00000001001863cc
- (void)_stopListeningForAudioRouteChanges;	// IMP=0x00000001001862c4
- (void)_listenForAudioRouteChanges;	// IMP=0x00000001001861bc
- (void)_muteStateChanged:(id)arg1;	// IMP=0x0000000100185f80
- (void)_notifyObservers:(_Bool)arg1;	// IMP=0x0000000100185f34
- (void)_updateAudioRouteOnMainThread;	// IMP=0x0000000100185bfc
- (void)_cleanupAudioRouteOnMainThread;	// IMP=0x0000000100185bcc
- (_Bool)_currentRouteIsHandsFree;	// IMP=0x0000000100185b94
- (void)dealloc;	// IMP=0x0000000100185b48
- (id)init;	// IMP=0x0000000100185a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

