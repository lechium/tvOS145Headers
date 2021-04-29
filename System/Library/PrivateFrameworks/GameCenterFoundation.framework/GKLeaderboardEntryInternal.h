/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString, NSDate;

@interface GKLeaderboardEntryInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	long long _rank;
	long long _score;
	NSString* _formattedScore;
	unsigned long long _context;
	NSDate* _date;
	long long _state;
	NSString* _baseLeaderboardID;

}

@property (nonatomic,retain) GKPlayerInternal * player;               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long rank;                          //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) long long score;                         //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * formattedScore;                 //@synthesize formattedScore=_formattedScore - In the implementation block
@property (assign,nonatomic) unsigned long long context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * baseLeaderboardID;              //@synthesize baseLeaderboardID=_baseLeaderboardID - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSDate *)date;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)score;
-(unsigned long long)context;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(void)setScore:(long long)arg1 ;
-(NSString *)baseLeaderboardID;
-(NSString *)formattedScore;
-(void)setBaseLeaderboardID:(NSString *)arg1 ;
-(void)setFormattedScore:(NSString *)arg1 ;
@end

