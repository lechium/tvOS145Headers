//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockSessionManagerObserver-Protocol.h"
#import "SFUnlockProtocol-Protocol.h"

@class NSString, SFAutoUnlockDevice;
@protocol SDUnlockXPCSesssionDelegate, SFUnlockClientProtocol;

__attribute__((visibility("hidden")))
@interface SDUnlockXPCSession : NSObject <SFUnlockProtocol, SDAutoUnlockSessionManagerObserver>
{
    id <SDUnlockXPCSesssionDelegate> _delegate;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    id <SFUnlockClientProtocol> _clientProxy;	// 24 = 0x18
    SFAutoUnlockDevice *_enableDevice;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c1e54
@property(retain, nonatomic) SFAutoUnlockDevice *enableDevice; // @synthesize enableDevice=_enableDevice;
@property(retain, nonatomic) id <SFUnlockClientProtocol> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) id <SDUnlockXPCSesssionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)checkEntitlementWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c1af0
- (void)session:(id)arg1 didFailUnlockWithResults:(id)arg2 error:(id)arg3 incrementedAttempt:(_Bool)arg4;	// IMP=0x00000001000c1a3c
- (void)session:(id)arg1 didCompleteUnlockWithDevice:(id)arg2;	// IMP=0x00000001000c18d0
- (void)session:(id)arg1 didBeginAttemptWithDevice:(id)arg2;	// IMP=0x00000001000c17ac
- (void)session:(id)arg1 didFailToEnableDevice:(id)arg2 error:(id)arg3;	// IMP=0x00000001000c164c
- (void)session:(id)arg1 didEnableWithDevice:(id)arg2;	// IMP=0x00000001000c1510
- (void)session:(id)arg1 didReceiveKeyDeviceLocked:(id)arg2;	// IMP=0x00000001000c14a4
- (void)notifyDelegate;	// IMP=0x00000001000c1458
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c1298
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c10d8
- (void)requestRelock;	// IMP=0x00000001000c1004
- (void)cancelAutoUnlock:(_Bool)arg1;	// IMP=0x00000001000c0f88
- (void)cancelAutoUnlock;	// IMP=0x00000001000c0ed4
- (void)attemptAutoUnlockWithClientProxy:(id)arg1;	// IMP=0x00000001000c0cc0
- (void)declinedToEnablePhoneAutoUnlock;	// IMP=0x00000001000c0c78
- (void)donateDeviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x00000001000c0c28
- (void)prewarmAutoUnlock;	// IMP=0x00000001000c0be0
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c0a54
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;	// IMP=0x00000001000c09d8
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001000c0764
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c04e0
- (void)repairCloudPairing;	// IMP=0x00000001000c0498
- (void)invalidate;	// IMP=0x00000001000c0408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

