//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol PDNFSecureXPCCarKeyEventObserver <NSObject>

@optional
- (void)carKeyDidEndRangingWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidStartRangingWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidExitExpressWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidEnterExpressWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidFinishRKEActions:(NSDictionary *)arg1 forAppletIdentifier:(NSString *)arg2 keyIdentifier:(NSString *)arg3 withError:(NSError *)arg4;
- (void)carKeyDidStartEngineWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidUnlockWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidLockWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidDisconnectWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeyDidConnectWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)carKeySessionDidFinishWithError:(NSError *)arg1 forAppletIdentifier:(NSString *)arg2 keyIdentifier:(NSString *)arg3;
- (void)carKeySessionDidEndWithAppletIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
@end

