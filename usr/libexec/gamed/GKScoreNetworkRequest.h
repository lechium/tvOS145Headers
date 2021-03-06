//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKCoalescingNetworkRequest-Protocol.h"
#import "GKNetworkRequest-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKScoreNetworkRequest : NSObject <GKNetworkRequest, GKCoalescingNetworkRequest>
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    _Bool coalescingAgent;	// 10 = 0xa
    NSString *bundleID;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSURLSessionTask *nsurlTask;	// 32 = 0x20
    NSString *playerID;	// 40 = 0x28
    NSMutableDictionary *requestData;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
    NSArray *challengeIDs;	// 64 = 0x40
}

+ (long long)coalescingDelay;	// IMP=0x0000000100235fac
+ (id)bagKey;	// IMP=0x0000000100235414
- (void).cxx_destruct;	// IMP=0x000000010023618c
@property(nonatomic) _Bool coalescingAgent; // @synthesize coalescingAgent;
@property(retain, nonatomic) NSArray *challengeIDs; // @synthesize challengeIDs;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(readonly, copy) NSString *description;
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x0000000100235d98
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3 previousKnownPendingAmount:(long long)arg4;	// IMP=0x0000000100235d88
- (void)addInRequestData:(id *)arg1 additional:(id)arg2;	// IMP=0x0000000100235c5c
- (id)taskInfo;	// IMP=0x0000000100235a5c
- (void)removeFromStore:(id)arg1;	// IMP=0x0000000100235968
- (id)postBody;	// IMP=0x000000010023585c
@property(readonly) long long numberOfRequests; // @dynamic numberOfRequests;
- (id)initWithScores:(id)arg1 bundleID:(id)arg2 eligibleChallenges:(id)arg3;	// IMP=0x00000001002354ec
- (id)initWithTask:(id)arg1;	// IMP=0x0000000100235430
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x0000000100235420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

