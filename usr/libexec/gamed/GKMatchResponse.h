//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKDispatchGroup, GKMatchRequestInternal, NSArray, NSData, NSDictionary, NSString;

@interface GKMatchResponse : GKInternalRepresentation
{
    int _sequence;	// 8 = 0x8
    NSString *_rid;	// 16 = 0x10
    NSArray *_matches;	// 24 = 0x18
    NSData *_sessionToken;	// 32 = 0x20
    NSArray *_relayPushes;	// 40 = 0x28
    NSData *_cdxTicket;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    NSDictionary *_serverRequest;	// 64 = 0x40
    GKMatchRequestInternal *_matchRequest;	// 72 = 0x48
    GKDispatchGroup *_matchingGroup;	// 80 = 0x50
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001000b3d04
- (void).cxx_destruct;	// IMP=0x00000001000b4160
@property(readonly) int sequence; // @synthesize sequence=_sequence;
@property GKDispatchGroup *matchingGroup; // @synthesize matchingGroup=_matchingGroup;
@property(retain) GKMatchRequestInternal *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(retain) NSDictionary *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain) NSData *cdxTicket; // @synthesize cdxTicket=_cdxTicket;
@property(retain) NSArray *relayPushes; // @synthesize relayPushes=_relayPushes;
@property(retain) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain) NSArray *matches; // @synthesize matches=_matches;
@property(retain) NSString *rid; // @synthesize rid=_rid;
- (_Bool)transitionToState:(long long)arg1;	// IMP=0x00000001000b3f88
- (_Bool)isNetworkError;	// IMP=0x00000001000b3f3c
- (_Bool)isTimeout;	// IMP=0x00000001000b3ef0
- (_Bool)isCancelled;	// IMP=0x00000001000b3ea4
- (_Bool)isFinished;	// IMP=0x00000001000b3e58
- (int)_incrementSequence;	// IMP=0x00000001000b3e48

@end

