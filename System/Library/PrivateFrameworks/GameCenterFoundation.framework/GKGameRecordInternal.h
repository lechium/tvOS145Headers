/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKGameInternal.h>

@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal : GKGameInternal {

	GKScoreInternal* _score;
	NSDate* _lastPlayedDate;
	NSDate* _purchaseDate;
	unsigned short _achievements;
	short _achievementPoints;
	unsigned short _friendRank;
	unsigned short _maxFriendRank;
	unsigned _rank;
	unsigned _maxRank;

}

@property (nonatomic,retain) GKScoreInternal * score;                   //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSDate * lastPlayedDate;                   //@synthesize lastPlayedDate=_lastPlayedDate - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                     //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (assign,nonatomic) unsigned short achievements;               //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) short achievementPoints;                   //@synthesize achievementPoints=_achievementPoints - In the implementation block
@property (assign,nonatomic) unsigned short friendRank;                 //@synthesize friendRank=_friendRank - In the implementation block
@property (assign,nonatomic) unsigned short maxFriendRank;              //@synthesize maxFriendRank=_maxFriendRank - In the implementation block
@property (assign,nonatomic) unsigned rank;                             //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned maxRank;                          //@synthesize maxRank=_maxRank - In the implementation block
+(id)gameRecordForGame:(id)arg1 ;
+(id)secureCodedPropertyKeys;
-(GKScoreInternal *)score;
-(void)setRank:(unsigned)arg1 ;
-(unsigned)rank;
-(void)setScore:(GKScoreInternal *)arg1 ;
-(NSDate *)purchaseDate;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(unsigned short)friendRank;
-(unsigned short)achievements;
-(short)achievementPoints;
-(unsigned)maxRank;
-(unsigned short)maxFriendRank;
-(void)setFriendRank:(unsigned short)arg1 ;
-(void)updateWithGame:(id)arg1 ;
-(void)setAchievements:(unsigned short)arg1 ;
-(void)setAchievementPoints:(short)arg1 ;
-(void)setMaxFriendRank:(unsigned short)arg1 ;
-(void)setMaxRank:(unsigned)arg1 ;
@end

