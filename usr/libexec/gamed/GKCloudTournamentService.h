//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKTournamentService-Protocol.h"

@class NSString;

@interface GKCloudTournamentService : GKService <GKTournamentService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001000dbae4
+ (Class)interfaceClass;	// IMP=0x00000001000dbad8
- (oneway void)getAcceptedCustomTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e5b34
- (oneway void)getShareURLForCustomTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e5654
- (void)tournamentForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e55a8
- (oneway void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e4e7c
- (oneway void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e4804
- (oneway void)loadTournamentDefinitionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e44e0
- (oneway void)registerPlayerInTournament:(id)arg1 playerGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e3e78
- (oneway void)getTournamentStateForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e37ac
- (oneway void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e30c4
- (oneway void)getLocalParticipantForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e29f0
- (oneway void)getTotalPlayerCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e1da4
- (oneway void)getFriendCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e1314
- (oneway void)resumePlayInTournament:(id)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e0c44
- (oneway void)beginPlayInTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e0560
- (oneway void)resignFromTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dfef8
- (oneway void)declineInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000df890
- (oneway void)acceptInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000df228
- (oneway void)removeCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000deb58
- (oneway void)addCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000de488
- (oneway void)removeInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dddb8
- (oneway void)addInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dd6e8
- (oneway void)createCustomTournamentWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dcff4
- (oneway void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dc90c
- (oneway void)reportScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dc224
- (oneway void)loadHistoricalDataForPlayer:(id)arg1 tournamentDefinition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dbaec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

