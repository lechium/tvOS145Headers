//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GKClientProxy, GKNetworkRequestInfo, NSMutableDictionary, NSURLSession;

@protocol GKCoalescingNetworkRequest <NSObject>
+ (long long)coalescingDelay;
@property(readonly) long long numberOfRequests;
@property(nonatomic) _Bool coalescingAgent;
- (void)updateWithTaskInfo:(NSMutableDictionary *)arg1;
- (void)handleNetworkRequest:(GKNetworkRequestInfo *)arg1 session:(NSURLSession *)arg2 clientProxy:(GKClientProxy *)arg3 previousKnownPendingAmount:(long long)arg4;
- (void)addInRequestData:(id *)arg1 additional:(NSMutableDictionary *)arg2;
@end
