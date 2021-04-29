//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKTournamentService-Protocol.h"

@class NSString;

@interface GKTournamentService : GKService <GKTournamentService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100080ffc
+ (Class)interfaceClass;	// IMP=0x0000000100080ff0
- (oneway void)getAcceptedCustomTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100087318
- (oneway void)getShareURLForCustomTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100086f28
- (void)tournamentForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100086e7c
- (oneway void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000869fc
- (oneway void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000865d8
- (oneway void)loadTournamentDefinitionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000861f4
- (oneway void)registerPlayerInTournament:(id)arg1 playerGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100085da4
- (oneway void)getTournamentStateForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008596c
- (oneway void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100085544
- (oneway void)getLocalParticipantForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000850c4
- (oneway void)getTotalPlayerCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100084c8c
- (oneway void)getFriendCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100084854
- (oneway void)resumePlayInTournament:(id)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100084404
- (oneway void)beginPlayInTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100083f84
- (oneway void)resignFromTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100083b34
- (oneway void)declineInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000836e4
- (oneway void)acceptInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100083294
- (oneway void)removeCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100082e44
- (oneway void)addCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000829f4
- (oneway void)removeInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000825a4
- (oneway void)addInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100082154
- (oneway void)createCustomTournamentWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081d18
- (oneway void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000818cc
- (oneway void)reportScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100081480
- (oneway void)loadHistoricalDataForPlayer:(id)arg1 tournamentDefinition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100081004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
