//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSXPCListenerEndpoint;

@protocol TKProtocolSlotRegistry
- (void)addSlotWithEndpoint:(NSXPCListenerEndpoint *)arg1 name:(NSString *)arg2 type:(NSString *)arg3 reply:(void (^)(NSString *))arg4;
@end

