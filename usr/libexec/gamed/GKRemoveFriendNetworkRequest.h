//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKNetworkRequest-Protocol.h"

@class NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKRemoveFriendNetworkRequest : NSObject <GKNetworkRequest>
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    NSString *friendID;	// 16 = 0x10
    NSURLSessionTask *nsurlTask;	// 24 = 0x18
    NSMutableURLRequest *nsurlRequest;	// 32 = 0x20
    NSString *playerID;	// 40 = 0x28
    NSString *uuid;	// 48 = 0x30
    NSMutableDictionary *requestData;	// 56 = 0x38
    NSString *bundleID;	// 64 = 0x40
}

+ (id)bagKey;	// IMP=0x0000000100238c84
- (void).cxx_destruct;	// IMP=0x000000010023a028
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSString *friendID; // @synthesize friendID;
@property(readonly, copy) NSString *description;
- (void)removeFromStore:(id)arg1;	// IMP=0x0000000100239dd4
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001002390dc
- (id)taskInfo;	// IMP=0x0000000100238fa8
- (id)initWithFriendPlayerID:(id)arg1;	// IMP=0x0000000100238ea4
- (id)initWithTask:(id)arg1;	// IMP=0x0000000100238d3c
- (id)postBody;	// IMP=0x0000000100238c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

