//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SDAutoUnlockPairingSession;

@protocol SDAutoUnlockSessionDelegate <NSObject>

@optional
- (_Bool)isDisplayOff;
- (void)sessionDidSendInitialData:(SDAutoUnlockPairingSession *)arg1;
- (void)sessionDidStartConnection:(SDAutoUnlockPairingSession *)arg1;
- (void)session:(SDAutoUnlockPairingSession *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)sessionDidReceiveKeyDeviceLocked:(SDAutoUnlockPairingSession *)arg1;
@end

