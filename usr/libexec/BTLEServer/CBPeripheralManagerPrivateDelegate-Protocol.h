//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CBPeripheralManagerDelegate-Protocol.h"

@class CBCentral, CBPeripheralManager, NSArray, NSError, NSNumber;

@protocol CBPeripheralManagerPrivateDelegate <CBPeripheralManagerDelegate>

@optional
- (void)peripheralManager:(CBPeripheralManager *)arg1 didUpdateControllerBTClock:(NSNumber *)arg2 seconds:(NSNumber *)arg3 microseconds:(NSNumber *)arg4 localClock:(NSNumber *)arg5 remoteClock:(NSNumber *)arg6;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didUpdateANCSAuthorization:(_Bool)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didStopAdvertisingWithError:(NSError *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didUpdateConnectionParameters:(CBCentral *)arg2 interval:(NSNumber *)arg3 latency:(NSNumber *)arg4 supervisionTimeout:(NSNumber *)arg5;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didConnectWithServiceUUIDs:(NSArray *)arg3;
@end

