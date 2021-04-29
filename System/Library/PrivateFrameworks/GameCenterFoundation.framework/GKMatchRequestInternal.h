/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSString, NSDictionary, NSData, GKTournamentInternal;

@interface GKMatchRequestInternal : GKInternalRepresentation {

	unsigned long long _matchType;
	NSArray* _recipients;
	NSArray* _recipientPlayerIDs;
	NSString* _inviteMessage;
	NSDictionary* _localizableInviteMessage;
	NSData* _sessionToken;
	NSString* _rid;
	unsigned _version;
	BOOL _preloadedMatch;
	unsigned long long _playerGroup;
	unsigned _playerAttributes;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	unsigned char _defaultNumberOfPlayers;
	BOOL _restrictToAutomatch;
	GKTournamentInternal* _tournamentForInvitePool;

}

@property (assign,nonatomic) unsigned char minPlayers;                                    //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) unsigned char maxPlayers;                                    //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) unsigned char defaultNumberOfPlayers;                        //@synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned long long playerGroup;                              //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                                   //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                        //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSArray * recipientPlayerIDs;                                //@synthesize recipientPlayerIDs=_recipientPlayerIDs - In the implementation block
@property (nonatomic,copy) NSString * inviteMessage;                                      //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableInviteMessage;                     //@synthesize localizableInviteMessage=_localizableInviteMessage - In the implementation block
@property (assign,nonatomic) BOOL restrictToAutomatch;                                    //@synthesize restrictToAutomatch=_restrictToAutomatch - In the implementation block
@property (nonatomic,retain) GKTournamentInternal * tournamentForInvitePool;              //@synthesize tournamentForInvitePool=_tournamentForInvitePool - In the implementation block
@property (assign,nonatomic) unsigned long long matchType;                                //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                                       //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSString * rid;                                              //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned version;                                            //@synthesize version=_version - In the implementation block
@property (assign,getter=isPreloadedMatch,nonatomic) BOOL preloadedMatch;                 //@synthesize preloadedMatch=_preloadedMatch - In the implementation block
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned)version;
-(unsigned long long)matchType;
-(void)setVersion:(unsigned)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
-(unsigned char)maxPlayers;
-(unsigned char)minPlayers;
-(BOOL)restrictToAutomatch;
-(void)setRestrictToAutomatch:(BOOL)arg1 ;
-(unsigned long long)playerGroup;
-(void)setMaxPlayers:(unsigned char)arg1 ;
-(void)setMinPlayers:(unsigned char)arg1 ;
-(void)setPlayerGroup:(unsigned long long)arg1 ;
-(unsigned)playerAttributes;
-(unsigned char)defaultNumberOfPlayers;
-(NSString *)inviteMessage;
-(void)setDefaultNumberOfPlayers:(unsigned char)arg1 ;
-(NSArray *)recipientPlayerIDs;
-(void)setRecipientPlayerIDs:(NSArray *)arg1 ;
-(void)setInviteMessage:(NSString *)arg1 ;
-(GKTournamentInternal *)tournamentForInvitePool;
-(void)setTournamentForInvitePool:(GKTournamentInternal *)arg1 ;
-(void)setMatchType:(unsigned long long)arg1 ;
-(void)setRid:(NSString *)arg1 ;
-(NSString *)rid;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(NSDictionary *)localizableInviteMessage;
-(BOOL)isPreloadedMatch;
-(BOOL)hasGuestPlayers;
-(void)setLocalizableInviteMessage:(NSDictionary *)arg1 ;
-(void)setPreloadedMatch:(BOOL)arg1 ;
@end

