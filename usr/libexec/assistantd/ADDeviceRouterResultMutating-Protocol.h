//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADPeerInfo, NSError, NSString, NSUUID;

@protocol ADDeviceRouterResultMutating <NSObject>
- (void)setError:(NSError *)arg1;
- (void)setCommandRelayProxyIdentifier:(NSString *)arg1;
- (void)setProximity:(long long)arg1;
- (void)setContextIdentifier:(NSUUID *)arg1;
- (void)setPeerInfo:(ADPeerInfo *)arg1;
@end

