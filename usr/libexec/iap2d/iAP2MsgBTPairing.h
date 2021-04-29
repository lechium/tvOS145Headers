//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, iAP2Connection;

@interface iAP2MsgBTPairing : NSObject
{
    iAP2Connection *_pkConn;	// 8 = 0x8
    NSData *_pBTPairTypesSupp;	// 16 = 0x10
    NSData *_pBTPairUUID;	// 24 = 0x18
    unsigned char _btPairType;	// 32 = 0x20
    _Bool _bUpdateStarted;	// 33 = 0x21
    _Bool _bUpdateRadio;	// 34 = 0x22
    _Bool _bUpdatePairInfo;	// 35 = 0x23
    _Bool _bCurStateRadioOn;	// 36 = 0x24
    unsigned char _curStatePairState;	// 37 = 0x25
    _Bool _bCurPairingModeOn;	// 38 = 0x26
}

+ (_Bool)postiAP2NotificationType:(id)arg1 notifyDict:(id)arg2;	// IMP=0x0000000100048458
- (id)description;	// IMP=0x00000001000484e0
- (id)accessoryPairingUUID;	// IMP=0x00000001000484d8
- (id)accessoryPairingTypes;	// IMP=0x00000001000484d0
- (int)deviceStopBLEUpdates;	// IMP=0x00000001000483c0
- (int)deviceUpdatePairInfo:(id)arg1;	// IMP=0x00000001000482dc
- (int)devicePairingData:(id)arg1;	// IMP=0x00000001000481f8
- (int)deviceUpdateBTRadio:(_Bool)arg1 BTPairStatus:(unsigned char)arg2 BTPairModeOn:(_Bool)arg3 forceUpdates:(_Bool)arg4;	// IMP=0x00000001000480a0
- (int)deviceStartBLEUpdatesForPairType:(unsigned char)arg1 BTRadio:(_Bool)arg2 BTPairInfo:(_Bool)arg3;	// IMP=0x0000000100047f84
- (void)shuttingDown;	// IMP=0x0000000100047f54
- (void)dealloc;	// IMP=0x0000000100047efc
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100047e24

@end
