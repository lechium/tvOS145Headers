/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKTournamentDefinitionInternal, NSDate, GKScoreInternal, GKPlayerInternal, GKTournamentParticipantInternal, GKLeaderboardInternal, NSURL;

@interface GKTournamentInternal : GKInternalRepresentation {

	NSString* _tournamentID;
	GKTournamentDefinitionInternal* _tournamentDefinition;
	NSString* _tournamentName;
	long long _maxReplays;
	long long _minPlayers;
	long long _maxPlayers;
	long long _scoringMethod;
	double _duration;
	long long _randomSeed;
	NSDate* _registrationBeginDate;
	NSDate* _registrationEndDate;
	NSDate* _tournamentBeginDate;
	NSDate* _tournamentEndDate;
	long long _tournamentState;
	GKScoreInternal* _bestScore;
	GKPlayerInternal* _winningPlayer;
	long long _playerCount;
	GKTournamentParticipantInternal* _localParticipant;
	GKLeaderboardInternal* _leaderboard;
	long long _tournamentError;
	NSURL* _inviteURLForMessages;
	long long _tournamentNumber;
	long long _seedingMethod;
	GKPlayerInternal* _customTournamentCreator;
	NSString* _nextTournamentID;
	NSDate* _nextTournamentBeginDate;

}

@property (nonatomic,retain) NSString * tournamentID;                                            //@synthesize tournamentID=_tournamentID - In the implementation block
@property (nonatomic,retain) GKTournamentDefinitionInternal * tournamentDefinition;              //@synthesize tournamentDefinition=_tournamentDefinition - In the implementation block
@property (nonatomic,retain) NSString * tournamentName;                                          //@synthesize tournamentName=_tournamentName - In the implementation block
@property (assign,nonatomic) long long maxReplays;                                               //@synthesize maxReplays=_maxReplays - In the implementation block
@property (assign,nonatomic) long long minPlayers;                                               //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) long long maxPlayers;                                               //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) long long scoringMethod;                                            //@synthesize scoringMethod=_scoringMethod - In the implementation block
@property (assign,nonatomic) double duration;                                                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long randomSeed;                                               //@synthesize randomSeed=_randomSeed - In the implementation block
@property (nonatomic,retain) NSDate * registrationBeginDate;                                     //@synthesize registrationBeginDate=_registrationBeginDate - In the implementation block
@property (nonatomic,retain) NSDate * registrationEndDate;                                       //@synthesize registrationEndDate=_registrationEndDate - In the implementation block
@property (nonatomic,retain) NSDate * tournamentBeginDate;                                       //@synthesize tournamentBeginDate=_tournamentBeginDate - In the implementation block
@property (nonatomic,retain) NSDate * tournamentEndDate;                                         //@synthesize tournamentEndDate=_tournamentEndDate - In the implementation block
@property (assign,nonatomic) long long tournamentState;                                          //@synthesize tournamentState=_tournamentState - In the implementation block
@property (nonatomic,retain) GKScoreInternal * bestScore;                                        //@synthesize bestScore=_bestScore - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * winningPlayer;                                   //@synthesize winningPlayer=_winningPlayer - In the implementation block
@property (assign,nonatomic) long long playerCount;                                              //@synthesize playerCount=_playerCount - In the implementation block
@property (nonatomic,retain) GKTournamentParticipantInternal * localParticipant;                 //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,retain) GKLeaderboardInternal * leaderboard;                                //@synthesize leaderboard=_leaderboard - In the implementation block
@property (assign,nonatomic) long long tournamentError;                                          //@synthesize tournamentError=_tournamentError - In the implementation block
@property (nonatomic,retain) NSURL * inviteURLForMessages;                                       //@synthesize inviteURLForMessages=_inviteURLForMessages - In the implementation block
@property (assign,nonatomic) long long tournamentNumber;                                         //@synthesize tournamentNumber=_tournamentNumber - In the implementation block
@property (assign,nonatomic) long long seedingMethod;                                            //@synthesize seedingMethod=_seedingMethod - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * customTournamentCreator;                         //@synthesize customTournamentCreator=_customTournamentCreator - In the implementation block
@property (nonatomic,retain) NSString * nextTournamentID;                                        //@synthesize nextTournamentID=_nextTournamentID - In the implementation block
@property (nonatomic,retain) NSDate * nextTournamentBeginDate;                                   //@synthesize nextTournamentBeginDate=_nextTournamentBeginDate - In the implementation block
+(id)defaultCustomTournamentForTournamentDefinition:(id)arg1 ;
+(id)secureCodedPropertyKeys;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setBestScore:(GKScoreInternal *)arg1 ;
-(GKScoreInternal *)bestScore;
-(GKTournamentParticipantInternal *)localParticipant;
-(long long)scoringMethod;
-(long long)seedingMethod;
-(NSString *)tournamentName;
-(long long)maxPlayers;
-(long long)minPlayers;
-(long long)maxReplays;
-(void)setCustomTournamentCreator:(GKPlayerInternal *)arg1 ;
-(GKTournamentDefinitionInternal *)tournamentDefinition;
-(void)setTournamentDefinition:(GKTournamentDefinitionInternal *)arg1 ;
-(GKPlayerInternal *)winningPlayer;
-(void)setWinningPlayer:(GKPlayerInternal *)arg1 ;
-(void)setLocalParticipant:(GKTournamentParticipantInternal *)arg1 ;
-(GKLeaderboardInternal *)leaderboard;
-(void)setLeaderboard:(GKLeaderboardInternal *)arg1 ;
-(GKPlayerInternal *)customTournamentCreator;
-(NSString *)tournamentID;
-(NSDate *)registrationEndDate;
-(NSString *)nextTournamentID;
-(NSDate *)nextTournamentBeginDate;
-(NSURL *)inviteURLForMessages;
-(long long)randomSeed;
-(NSDate *)registrationBeginDate;
-(NSDate *)tournamentBeginDate;
-(NSDate *)tournamentEndDate;
-(long long)tournamentState;
-(long long)playerCount;
-(long long)tournamentError;
-(void)setTournamentState:(long long)arg1 ;
-(void)setTournamentEndDate:(NSDate *)arg1 ;
-(void)setTournamentName:(NSString *)arg1 ;
-(void)setSeedingMethod:(long long)arg1 ;
-(void)setScoringMethod:(long long)arg1 ;
-(void)setMaxPlayers:(long long)arg1 ;
-(void)setMinPlayers:(long long)arg1 ;
-(void)setMaxReplays:(long long)arg1 ;
-(void)setTournamentID:(NSString *)arg1 ;
-(void)setRandomSeed:(long long)arg1 ;
-(void)setRegistrationBeginDate:(NSDate *)arg1 ;
-(void)setRegistrationEndDate:(NSDate *)arg1 ;
-(void)setTournamentBeginDate:(NSDate *)arg1 ;
-(void)setPlayerCount:(long long)arg1 ;
-(void)setTournamentError:(long long)arg1 ;
-(void)setInviteURLForMessages:(NSURL *)arg1 ;
-(long long)tournamentNumber;
-(void)setTournamentNumber:(long long)arg1 ;
-(void)setNextTournamentID:(NSString *)arg1 ;
-(void)setNextTournamentBeginDate:(NSDate *)arg1 ;
@end

