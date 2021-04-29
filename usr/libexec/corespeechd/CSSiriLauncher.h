//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSSiriLauncher : NSObject
{
}

+ (id)sharedLauncher;	// IMP=0x0000000100080c0c
- (void)deactivateSiriActivationConnectionWithReason:(long long)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0000000100081720
- (void)notifyBluetoothDeviceVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000814f0
- (void)notifyBluetoothDeviceVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008147c
- (void)notifyCarPlayVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010008112c
- (void)notifyBuiltInVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100080cc8
- (void)notifyBuiltInVoiceTriggerPrewarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100080c78

@end

