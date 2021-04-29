//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MRDHostedExternalDeviceManager : NSObject
{
    NSMutableArray *_hostedExternalDeviceGraveyard;	// 8 = 0x8
    NSMutableDictionary *_hostedExternalDeviceMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a7e48
- (id)_outputDeviceUIDFromHostedExternalDevice:(id)arg1;	// IMP=0x00000001000a7dc8
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000a7b50
- (void)_tombstoneHostedExternalDevice:(id)arg1;	// IMP=0x00000001000a7a00
- (void)_removeExternalDeviceWithOutputDeviceUID:(id)arg1 forReason:(id)arg2;	// IMP=0x00000001000a78b4
- (void)purgeUndiscoverableDisconnectedDevices:(id)arg1;	// IMP=0x00000001000a7424
- (id)hostedExternalDeviceForOutputDeviceUID:(id)arg1;	// IMP=0x00000001000a7390
- (void)addHostedExternalDevice:(id)arg1;	// IMP=0x00000001000a7244
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
- (id)init;	// IMP=0x00000001000a7154

@end

