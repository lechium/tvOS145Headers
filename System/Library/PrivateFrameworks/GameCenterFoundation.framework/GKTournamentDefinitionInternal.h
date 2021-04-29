/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKRecurrenceRule;

@interface GKTournamentDefinitionInternal : GKInternalRepresentation {

	BOOL _customTournamentAllowIcon;
	NSString* _tournamentDefinitionID;
	NSString* _tournamentName;
	long long _tournamentNameFormat;
	NSString* _tournamentDescription;
	NSString* _tournamentIcon;
	long long _tournamentType;
	long long _creationMethod;
	long long _seedingMethod;
	long long _participationType;
	long long _scoringMethod;
	long long _maxPlayers;
	long long _minPlayers;
	long long _maxPlayerShards;
	double _typicalGameplayDuration;
	double _tournamentDuration;
	double _PreRegistrationTime;
	GKRecurrenceRule* _recurrenceRule;
	long long _maxReplays;
	long long _autoTournamentIndex;
	NSString* _customTournamentName;
	long long _customTournamentNameFormat;
	NSString* _customTournamentIcon;
	long long _customSeedingMethods;
	long long _customScoringMethods;
	long long _customMaxPlayers;
	long long _customMinPlayers;
	double _customTournamentDuration;
	long long _customMaxReplays;

}

@property (nonatomic,retain) NSString * tournamentDefinitionID;                 //@synthesize tournamentDefinitionID=_tournamentDefinitionID - In the implementation block
@property (nonatomic,retain) NSString * tournamentName;                         //@synthesize tournamentName=_tournamentName - In the implementation block
@property (assign,nonatomic) long long tournamentNameFormat;                    //@synthesize tournamentNameFormat=_tournamentNameFormat - In the implementation block
@property (nonatomic,retain) NSString * tournamentDescription;                  //@synthesize tournamentDescription=_tournamentDescription - In the implementation block
@property (nonatomic,retain) NSString * tournamentIcon;                         //@synthesize tournamentIcon=_tournamentIcon - In the implementation block
@property (assign,nonatomic) long long tournamentType;                          //@synthesize tournamentType=_tournamentType - In the implementation block
@property (assign,nonatomic) long long creationMethod;                          //@synthesize creationMethod=_creationMethod - In the implementation block
@property (assign,nonatomic) long long seedingMethod;                           //@synthesize seedingMethod=_seedingMethod - In the implementation block
@property (assign,nonatomic) long long participationType;                       //@synthesize participationType=_participationType - In the implementation block
@property (assign,nonatomic) long long scoringMethod;                           //@synthesize scoringMethod=_scoringMethod - In the implementation block
@property (assign,nonatomic) long long maxPlayers;                              //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) long long minPlayers;                              //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) long long maxPlayerShards;                         //@synthesize maxPlayerShards=_maxPlayerShards - In the implementation block
@property (assign,nonatomic) double typicalGameplayDuration;                    //@synthesize typicalGameplayDuration=_typicalGameplayDuration - In the implementation block
@property (assign,nonatomic) double tournamentDuration;                         //@synthesize tournamentDuration=_tournamentDuration - In the implementation block
@property (assign,nonatomic) double PreRegistrationTime;                        //@synthesize PreRegistrationTime=_PreRegistrationTime - In the implementation block
@property (nonatomic,retain) GKRecurrenceRule * recurrenceRule;                 //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (assign,nonatomic) long long maxReplays;                              //@synthesize maxReplays=_maxReplays - In the implementation block
@property (assign,nonatomic) long long autoTournamentIndex;                     //@synthesize autoTournamentIndex=_autoTournamentIndex - In the implementation block
@property (nonatomic,retain) NSString * customTournamentName;                   //@synthesize customTournamentName=_customTournamentName - In the implementation block
@property (assign,nonatomic) long long customTournamentNameFormat;              //@synthesize customTournamentNameFormat=_customTournamentNameFormat - In the implementation block
@property (nonatomic,retain) NSString * customTournamentIcon;                   //@synthesize customTournamentIcon=_customTournamentIcon - In the implementation block
@property (assign,nonatomic) BOOL customTournamentAllowIcon;                    //@synthesize customTournamentAllowIcon=_customTournamentAllowIcon - In the implementation block
@property (assign,nonatomic) long long customSeedingMethods;                    //@synthesize customSeedingMethods=_customSeedingMethods - In the implementation block
@property (assign,nonatomic) long long customScoringMethods;                    //@synthesize customScoringMethods=_customScoringMethods - In the implementation block
@property (assign,nonatomic) long long customMaxPlayers;                        //@synthesize customMaxPlayers=_customMaxPlayers - In the implementation block
@property (assign,nonatomic) long long customMinPlayers;                        //@synthesize customMinPlayers=_customMinPlayers - In the implementation block
@property (assign,nonatomic) double customTournamentDuration;                   //@synthesize customTournamentDuration=_customTournamentDuration - In the implementation block
@property (assign,nonatomic) long long customMaxReplays;                        //@synthesize customMaxReplays=_customMaxReplays - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRule:(GKRecurrenceRule *)arg1 ;
-(long long)scoringMethod;
-(long long)seedingMethod;
-(long long)creationMethod;
-(long long)tournamentType;
-(long long)participationType;
-(NSString *)tournamentDefinitionID;
-(NSString *)tournamentName;
-(long long)tournamentNameFormat;
-(NSString *)tournamentDescription;
-(NSString *)tournamentIcon;
-(NSString *)customTournamentName;
-(long long)customTournamentNameFormat;
-(NSString *)customTournamentIcon;
-(BOOL)customTournamentAllowIcon;
-(long long)customSeedingMethods;
-(long long)customScoringMethods;
-(long long)maxPlayers;
-(long long)minPlayers;
-(long long)customMaxPlayers;
-(long long)customMinPlayers;
-(long long)maxPlayerShards;
-(double)typicalGameplayDuration;
-(double)tournamentDuration;
-(double)customTournamentDuration;
-(double)PreRegistrationTime;
-(long long)maxReplays;
-(long long)customMaxReplays;
-(void)setTournamentDuration:(double)arg1 ;
-(void)setTournamentDefinitionID:(NSString *)arg1 ;
-(void)setTournamentName:(NSString *)arg1 ;
-(void)setTournamentNameFormat:(long long)arg1 ;
-(void)setTournamentDescription:(NSString *)arg1 ;
-(void)setTournamentIcon:(NSString *)arg1 ;
-(void)setTournamentType:(long long)arg1 ;
-(void)setCreationMethod:(long long)arg1 ;
-(void)setSeedingMethod:(long long)arg1 ;
-(void)setParticipationType:(long long)arg1 ;
-(void)setScoringMethod:(long long)arg1 ;
-(void)setMaxPlayers:(long long)arg1 ;
-(void)setMinPlayers:(long long)arg1 ;
-(void)setMaxPlayerShards:(long long)arg1 ;
-(void)setTypicalGameplayDuration:(double)arg1 ;
-(void)setPreRegistrationTime:(double)arg1 ;
-(void)setMaxReplays:(long long)arg1 ;
-(long long)autoTournamentIndex;
-(void)setAutoTournamentIndex:(long long)arg1 ;
-(void)setCustomTournamentName:(NSString *)arg1 ;
-(void)setCustomTournamentNameFormat:(long long)arg1 ;
-(void)setCustomTournamentIcon:(NSString *)arg1 ;
-(void)setCustomTournamentAllowIcon:(BOOL)arg1 ;
-(void)setCustomSeedingMethods:(long long)arg1 ;
-(void)setCustomScoringMethods:(long long)arg1 ;
-(void)setCustomMaxPlayers:(long long)arg1 ;
-(void)setCustomMinPlayers:(long long)arg1 ;
-(void)setCustomTournamentDuration:(double)arg1 ;
-(void)setCustomMaxReplays:(long long)arg1 ;
@end

