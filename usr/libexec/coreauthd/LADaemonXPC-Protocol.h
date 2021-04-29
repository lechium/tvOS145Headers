//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString, NSUUID;
@protocol LAContextCallbackXPC;

@protocol LADaemonXPC
- (void)bootstrapSessionServiceType:(NSString *)arg1 serviceClientID:(NSString *)arg2 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
- (void)prearmTouchIdWithReply:(void (^)(id <LAPrearmContextXPC>, NSError *))arg1;
- (void)connectToContextWithUUID:(NSUUID *)arg1 callback:(id <LAContextCallbackXPC>)arg2 token:(NSData *)arg3 senderAuditTokenData:(NSData *)arg4 reply:(void (^)(id <LAContextXPC>, NSError *))arg5;
- (void)connectToExistingContext:(NSData *)arg1 callback:(id <LAContextCallbackXPC>)arg2 reply:(void (^)(id <LAContextXPC>, NSUUID *, NSError *))arg3;
@end

