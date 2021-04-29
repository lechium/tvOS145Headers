//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKNetworkRequest-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKChallengeNetworkRequest : NSObject <GKNetworkRequest>
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    NSURLSessionTask *nsurlTask;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSString *playerID;	// 32 = 0x20
    NSMutableSet *challenges;	// 40 = 0x28
    NSString *bundleID;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
    NSMutableDictionary *requestData;	// 64 = 0x40
}

+ (id)bagKey;	// IMP=0x00000001002373e4
- (void).cxx_destruct;	// IMP=0x0000000100238430
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSMutableSet *challenges; // @synthesize challenges;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(readonly, copy) NSString *description;
- (id)taskInfo;	// IMP=0x0000000100238138
- (void)removeFromStore:(id)arg1;	// IMP=0x0000000100237e24
- (id)postBody;	// IMP=0x0000000100237d8c
- (id)initWithTask:(id)arg1;	// IMP=0x0000000100237b98
- (id)initWithChallenges:(id)arg1 bundleID:(id)arg2;	// IMP=0x0000000100237a60
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001002373f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

