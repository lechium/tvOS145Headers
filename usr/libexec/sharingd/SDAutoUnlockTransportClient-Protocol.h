//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSUUID, SDAutoUnlockTransport;

@protocol SDAutoUnlockTransportClient <NSObject>

@optional
- (void)transport:(SDAutoUnlockTransport *)arg1 didReceiveDisableMessage:(NSData *)arg2 fromDeviceID:(NSString *)arg3;
- (void)transport:(SDAutoUnlockTransport *)arg1 didReceiveMessageACKForIdentifier:(NSString *)arg2;
- (void)transport:(SDAutoUnlockTransport *)arg1 didReceiveKeyOriginatingRegistrationRequestWithSessionID:(NSUUID *)arg2 deviceID:(NSString *)arg3 requestData:(NSData *)arg4;
- (void)transport:(SDAutoUnlockTransport *)arg1 didReceiveRegistrationRequestWithSessionID:(NSUUID *)arg2 deviceID:(NSString *)arg3 requestData:(NSData *)arg4;
- (void)transport:(SDAutoUnlockTransport *)arg1 didReceivePairingRequestWithSessionID:(NSUUID *)arg2 deviceID:(NSString *)arg3 requestData:(NSData *)arg4;
- (void)transport:(SDAutoUnlockTransport *)arg1 didReceivePayload:(NSData *)arg2 type:(unsigned short)arg3 deviceID:(NSString *)arg4;
- (void)transportDidChangeNearbyState:(SDAutoUnlockTransport *)arg1;
- (void)transportDidChangeDevices:(SDAutoUnlockTransport *)arg1;
@end

