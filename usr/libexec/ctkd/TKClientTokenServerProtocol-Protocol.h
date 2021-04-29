//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TKClientTokenServerProtocol <NSObject>
- (void)ensureSlotWatcherRunningWithReply:(void (^)(void))arg1;
- (void)getWatcherEndpoint:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)getConfigurationEndpoint:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)getTokenEndpointForTokenID:(NSString *)arg1 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)getEndpoint:(void (^)(NSXPCListenerEndpoint *))arg1;
@end

