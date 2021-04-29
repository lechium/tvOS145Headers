/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray, NSDictionary;

@interface GKDashboardPlayerDataSource : GKCollectionDataSource {

	unsigned long long _mode;
	GKGameRecord* _gameRecord;
	NSArray* _players;
	NSDictionary* _datesPerPlayer;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                  //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * players;                          //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSDictionary * datesPerPlayer;              //@synthesize datesPerPlayer=_datesPerPlayer - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                    //@synthesize mode=_mode - In the implementation block
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(long long)itemCount;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(NSArray *)players;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)itemForIndexPath:(id)arg1 ;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)loadedMatches:(id)arg1 withError:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDatesPerPlayer:(NSDictionary *)arg1 ;
-(NSDictionary *)datesPerPlayer;
@end
