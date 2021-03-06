//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateReasserting : NESMVPNSessionState
{
    _Bool _setConfigurationInProgress;	// 40 = 0x28
}

@property _Bool setConfigurationInProgress; // @synthesize setConfigurationInProgress=_setConfigurationInProgress;
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x000000010006b8dc
- (_Bool)handleSetConfiguration;	// IMP=0x000000010006b87c
- (void)handleUserLogout;	// IMP=0x000000010006b848
- (void)handleUserSwitch;	// IMP=0x000000010006b814
- (void)handleWakeup;	// IMP=0x000000010006b784
- (_Bool)handleSleep;	// IMP=0x000000010006b574
- (void)handlePluginStatusDidChangeToConnected:(id)arg1;	// IMP=0x000000010006b4ec
- (void)handleTimeout;	// IMP=0x000000010006b43c
- (void)handleInterfaceAvailable:(id)arg1 changed:(_Bool)arg2;	// IMP=0x000000010006b25c
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010006b1c4
- (id)init;	// IMP=0x000000010006b188

@end

