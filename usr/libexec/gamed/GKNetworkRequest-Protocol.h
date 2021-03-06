//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GKClientProxy, GKNetworkRequestInfo, NSDictionary, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSession, NSURLSessionTask;

@protocol GKNetworkRequest <NSObject>
+ (NSString *)bagKey;
@property(retain, nonatomic) NSString *bundleID;
@property(retain, nonatomic) NSMutableDictionary *requestData;
@property(nonatomic) _Bool issueRequests;
@property(nonatomic) _Bool currentlyRunning;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask;
@property(retain, nonatomic) NSString *uuid;
@property(retain, nonatomic) NSString *playerID;
- (void)removeFromStore:(GKNetworkRequestInfo *)arg1;
- (void)handleNetworkRequest:(GKNetworkRequestInfo *)arg1 session:(NSURLSession *)arg2 clientProxy:(GKClientProxy *)arg3;
- (NSMutableDictionary *)taskInfo;
- (NSDictionary *)postBody;
- (id)initWithTask:(NSURLSessionTask *)arg1;
@end

