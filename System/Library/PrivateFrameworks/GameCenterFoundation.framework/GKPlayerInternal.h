/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber, NSDictionary, NSArray, NSDate, GKGameInternal;

@interface GKPlayerInternal : GKInternalRepresentation {

	NSString* _playerID;
	NSString* _gamePlayerID;
	NSString* _teamPlayerID;
	NSString* _alias;
	NSNumber* _avatarType;
	NSDictionary* _photos;
	NSString* _messagesID;
	NSNumber* _friendLevel;
	NSNumber* _friendBiDirectional;
	NSNumber* _friendPlayedWith;
	NSNumber* _friendPlayedNearby;
	NSNumber* _acceptedGameInviteFromThisFriend;
	NSNumber* _initiatedGameInviteToThisFriend;
	NSNumber* _automatchedTogether;
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;
	NSString* _lastProfilePrivacyVersionDisplayed;
	unsigned short _numberOfFriends;
	unsigned short _numberOfGames;
	unsigned short _numberOfFriendsInCommon;
	unsigned short _numberOfGamesInCommon;
	unsigned _numberOfAchievements;
	unsigned _numberOfAchievementPoints;
	int _achievementsVisibility;
	int _friendsVisibility;
	int _gamesPlayedVisibility;
	long long _globalFriendListAccess;
	SCD_Union_GK8 _flags;
	NSArray* _monogramComponents;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,retain) NSString * playerID;                                                          //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * teamPlayerID;                                                      //@synthesize teamPlayerID=_teamPlayerID - In the implementation block
@property (nonatomic,retain) NSString * gamePlayerID;                                                      //@synthesize gamePlayerID=_gamePlayerID - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                             //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSNumber * avatarType;                                                        //@synthesize avatarType=_avatarType - In the implementation block
@property (nonatomic,retain) NSArray * monogramComponents;                                                 //@synthesize monogramComponents=_monogramComponents - In the implementation block
@property (nonatomic,retain) NSDictionary * photos;                                                        //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) BOOL isFriend; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,readonly) BOOL isGuestPlayer; 
@property (assign,nonatomic) unsigned short numberOfFriendsInCommon;                                       //@synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGamesInCommon;                                         //@synthesize numberOfGamesInCommon=_numberOfGamesInCommon - In the implementation block
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSNumber * friendLevel;                                                       //@synthesize friendLevel=_friendLevel - In the implementation block
@property (nonatomic,retain) NSNumber * friendBiDirectional;                                               //@synthesize friendBiDirectional=_friendBiDirectional - In the implementation block
@property (nonatomic,retain) NSNumber * friendPlayedWith;                                                  //@synthesize friendPlayedWith=_friendPlayedWith - In the implementation block
@property (nonatomic,retain) NSNumber * friendPlayedNearby;                                                //@synthesize friendPlayedNearby=_friendPlayedNearby - In the implementation block
@property (nonatomic,retain) NSNumber * acceptedGameInviteFromThisFriend;                                  //@synthesize acceptedGameInviteFromThisFriend=_acceptedGameInviteFromThisFriend - In the implementation block
@property (nonatomic,retain) NSNumber * initiatedGameInviteToThisFriend;                                   //@synthesize initiatedGameInviteToThisFriend=_initiatedGameInviteToThisFriend - In the implementation block
@property (nonatomic,retain) NSNumber * automatchedTogether;                                               //@synthesize automatchedTogether=_automatchedTogether - In the implementation block
@property (nonatomic,retain) NSString * compositeName; 
@property (nonatomic,retain) NSString * status; 
@property (nonatomic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,retain) GKGameInternal * lastPlayedGame; 
@property (nonatomic,retain) NSString * guestIdentifier; 
@property (nonatomic,retain) NSString * messagesID;                                                        //@synthesize messagesID=_messagesID - In the implementation block
@property (assign,nonatomic) unsigned short numberOfFriends;                                               //@synthesize numberOfFriends=_numberOfFriends - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGames;                                                 //@synthesize numberOfGames=_numberOfGames - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievements;                                                //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievementPoints;                                           //@synthesize numberOfAchievementPoints=_numberOfAchievementPoints - In the implementation block
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSArray * emailAddresses; 
@property (nonatomic,retain) NSArray * friends; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (assign,getter=isUnderage,nonatomic) BOOL underage; 
@property (assign,getter=isFindable,nonatomic) BOOL findable; 
@property (assign,getter=isDefaultNickname,nonatomic) BOOL defaultNickname; 
@property (assign,getter=isDefaultPrivacyVisibility,nonatomic) BOOL defaultPrivacyVisibility; 
@property (assign,getter=isPhotoPending,nonatomic) BOOL photoPending; 
@property (assign,nonatomic) unsigned short numberOfRequests; 
@property (assign,nonatomic) unsigned short numberOfTurns; 
@property (assign,nonatomic) unsigned short numberOfChallenges; 
@property (nonatomic,retain) NSString * facebookUserID; 
@property (nonatomic,retain) NSNumber * iCloudUserID; 
@property (nonatomic,retain) NSString * lastPersonalizationVersionDisplayed;                               //@synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;                         //@synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed - In the implementation block
@property (nonatomic,retain) NSString * lastProfilePrivacyVersionDisplayed;                                //@synthesize lastProfilePrivacyVersionDisplayed=_lastProfilePrivacyVersionDisplayed - In the implementation block
@property (assign,nonatomic) int achievementsVisibility;                                                   //@synthesize achievementsVisibility=_achievementsVisibility - In the implementation block
@property (assign,nonatomic) int friendsVisibility;                                                        //@synthesize friendsVisibility=_friendsVisibility - In the implementation block
@property (assign,nonatomic) int gamesPlayedVisibility;                                                    //@synthesize gamesPlayedVisibility=_gamesPlayedVisibility - In the implementation block
@property (assign,nonatomic) long long globalFriendListAccess;                                             //@synthesize globalFriendListAccess=_globalFriendListAccess - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
+(id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3 ;
+(id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2 ;
+(Class)classForFamiliarity:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(unsigned)flags;
-(BOOL)isLoaded;
-(NSString *)status;
-(void)setFlags:(unsigned)arg1 ;
-(id)conciseDescription;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)accountName;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(unsigned short)numberOfRequests;
-(id)cacheKey;
-(NSDictionary *)photos;
-(void)setAlias:(NSString *)arg1 ;
-(void)setPhotos:(NSDictionary *)arg1 ;
-(NSString *)alias;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(BOOL)isUnderage;
-(NSString *)compositeName;
-(NSArray *)friends;
-(void)setFriends:(NSArray *)arg1 ;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSString *)playerID;
-(void)setPlayerID:(NSString *)arg1 ;
-(id)serverRepresentation;
-(unsigned)numberOfAchievements;
-(id)minimalInternal;
-(BOOL)isLocalPlayer;
-(NSNumber *)friendBiDirectional;
-(NSString *)teamPlayerID;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(NSString *)gamePlayerID;
-(void)setGamePlayerID:(NSString *)arg1 ;
-(void)setTeamPlayerID:(NSString *)arg1 ;
-(BOOL)isDefaultNickname;
-(void)setDefaultNickname:(BOOL)arg1 ;
-(BOOL)isDefaultPrivacyVisibility;
-(void)setDefaultPrivacyVisibility:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(unsigned)numberOfAchievementPoints;
-(void)setNumberOfAchievementPoints:(unsigned)arg1 ;
-(void)setNumberOfAchievements:(unsigned)arg1 ;
-(unsigned short)numberOfFriends;
-(void)setNumberOfFriends:(unsigned short)arg1 ;
-(unsigned short)numberOfGames;
-(void)setNumberOfGames:(unsigned short)arg1 ;
-(unsigned short)numberOfTurns;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setCompositeName:(NSString *)arg1 ;
-(BOOL)allowNearbyMultiplayer;
-(NSString *)facebookUserID;
-(NSNumber *)iCloudUserID;
-(long long)globalFriendListAccess;
-(void)setMessagesID:(NSString *)arg1 ;
-(GKGameInternal *)lastPlayedGame;
-(unsigned short)numberOfFriendsInCommon;
-(unsigned short)numberOfGamesInCommon;
-(unsigned short)numberOfChallenges;
-(NSNumber *)friendLevel;
-(NSNumber *)friendPlayedWith;
-(NSNumber *)friendPlayedNearby;
-(NSNumber *)acceptedGameInviteFromThisFriend;
-(NSNumber *)initiatedGameInviteToThisFriend;
-(NSNumber *)automatchedTogether;
-(NSNumber *)avatarType;
-(void)setFriendLevel:(NSNumber *)arg1 ;
-(void)setFriendBiDirectional:(NSNumber *)arg1 ;
-(void)setFriendPlayedWith:(NSNumber *)arg1 ;
-(void)setFriendPlayedNearby:(NSNumber *)arg1 ;
-(void)setAcceptedGameInviteFromThisFriend:(NSNumber *)arg1 ;
-(void)setInitiatedGameInviteToThisFriend:(NSNumber *)arg1 ;
-(void)setAutomatchedTogether:(NSNumber *)arg1 ;
-(int)defaultFamiliarity;
-(BOOL)isUnknownPlayer;
-(BOOL)isAnonymousPlayer;
-(BOOL)isAutomatchPlayer;
-(BOOL)isFriend;
-(NSArray *)monogramComponents;
-(BOOL)isGuestPlayer;
-(NSString *)guestIdentifier;
-(NSString *)lastPersonalizationVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
-(NSString *)lastProfilePrivacyVersionDisplayed;
-(void)setLastProfilePrivacyVersionDisplayed:(NSString *)arg1 ;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isFindable;
-(BOOL)isPhotoPending;
-(BOOL)_gkIsSameAsPlayer:(id)arg1 ;
-(int)achievementsVisibility;
-(void)setAchievementsVisibility:(int)arg1 ;
-(int)friendsVisibility;
-(void)setFriendsVisibility:(int)arg1 ;
-(int)gamesPlayedVisibility;
-(void)setGamesPlayedVisibility:(int)arg1 ;
-(void)setGlobalFriendListAccess:(long long)arg1 ;
-(void)setLastPlayedGame:(GKGameInternal *)arg1 ;
-(void)setFacebookUserID:(NSString *)arg1 ;
-(void)setICloudUserID:(NSNumber *)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(long long)globalFriendListSharingStatus;
-(void)setFindable:(BOOL)arg1 ;
-(void)setPhotoPending:(BOOL)arg1 ;
-(void)setAllowNearbyMultiplayer:(BOOL)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(void)setAvatarType:(NSNumber *)arg1 ;
-(void)setNumberOfFriendsInCommon:(unsigned short)arg1 ;
-(void)setNumberOfGamesInCommon:(unsigned short)arg1 ;
-(NSString *)messagesID;
-(void)setMonogramComponents:(NSArray *)arg1 ;
@end

