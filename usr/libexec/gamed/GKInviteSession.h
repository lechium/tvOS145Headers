//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSArray, NSData, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKInviteSession : NSObject
{
    NSData *_sessionToken;	// 8 = 0x8
    NSMutableArray *_shareInvitees;	// 16 = 0x10
    CKRecordID *_shareRecordID;	// 24 = 0x18
    NSArray *_responses;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    NSMutableDictionary *_invitees;	// 48 = 0x30
    NSMutableArray *_invitedPlayers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000f57ec
@property(retain, nonatomic) NSMutableArray *invitedPlayers; // @synthesize invitedPlayers=_invitedPlayers;
@property(retain, nonatomic) NSMutableDictionary *invitees; // @synthesize invitees=_invitees;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(retain, nonatomic) NSMutableArray *shareInvitees; // @synthesize shareInvitees=_shareInvitees;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (_Bool)shouldBeCleared;	// IMP=0x00000001000f527c
- (void)removeAllResponses;	// IMP=0x00000001000f50d8
- (void)addResponse:(id)arg1;	// IMP=0x00000001000f5088
- (void)removeAllInvitees;	// IMP=0x00000001000f4d98
- (id)allInvitees;	// IMP=0x00000001000f4d7c
- (id)referencesForInvitee:(id)arg1;	// IMP=0x00000001000f4d18
- (void)removeInvitee:(id)arg1 reference:(id)arg2;	// IMP=0x00000001000f4378
- (void)addInvitee:(id)arg1 reference:(id)arg2;	// IMP=0x00000001000f41e4
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f41d8
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f4050
- (id)initWithSessionToken:(id)arg1;	// IMP=0x00000001000f3fec
- (id)init;	// IMP=0x00000001000f3ee4

@end
