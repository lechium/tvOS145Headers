//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@interface GKTournamentPlayerStandingsInternal : GKInternalRepresentation
{
    long long _score;	// 8 = 0x8
    long long _topScore;	// 16 = 0x10
    long long _friendRank;	// 24 = 0x18
    long long _friendCount;	// 32 = 0x20
    long long _globalRank;	// 40 = 0x28
    long long _globalPlayerCount;	// 48 = 0x30
    long long _replayCount;	// 56 = 0x38
    long long _participantState;	// 64 = 0x40
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100130f54
@property(nonatomic) long long participantState; // @synthesize participantState=_participantState;
@property(nonatomic) long long replayCount; // @synthesize replayCount=_replayCount;
@property(nonatomic) long long globalPlayerCount; // @synthesize globalPlayerCount=_globalPlayerCount;
@property(nonatomic) long long globalRank; // @synthesize globalRank=_globalRank;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) long long friendRank; // @synthesize friendRank=_friendRank;
@property(nonatomic) long long topScore; // @synthesize topScore=_topScore;
@property(nonatomic) long long score; // @synthesize score=_score;

@end

