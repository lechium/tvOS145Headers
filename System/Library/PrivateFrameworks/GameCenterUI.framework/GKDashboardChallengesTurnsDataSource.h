/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKCollectionMultiDataSource.h>

@class GKDashboardTurnDataSource, GKDashboardChallengeDataSource;

@interface GKDashboardChallengesTurnsDataSource : GKCollectionMultiDataSource {

	GKDashboardTurnDataSource* _turnDataSource;
	GKDashboardChallengeDataSource* _challengeDataSource;
	long long _numberShownInFirstSection;

}

@property (nonatomic,retain) GKDashboardTurnDataSource * turnDataSource;                        //@synthesize turnDataSource=_turnDataSource - In the implementation block
@property (nonatomic,retain) GKDashboardChallengeDataSource * challengeDataSource;              //@synthesize challengeDataSource=_challengeDataSource - In the implementation block
@property (assign,nonatomic) long long numberShownInFirstSection;                               //@synthesize numberShownInFirstSection=_numberShownInFirstSection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlayForChallenge; 
@property (assign,nonatomic) BOOL shouldShowPlayForTurnBasedMatch; 
@property (assign,nonatomic) BOOL shouldShowQuitForTurnBasedMatch; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(void)setupCollectionView:(id)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(void)setShouldShowPlayForChallenge:(BOOL)arg1 ;
-(void)setShouldShowPlayForTurnBasedMatch:(BOOL)arg1 ;
-(void)setShouldShowQuitForTurnBasedMatch:(BOOL)arg1 ;
-(BOOL)shouldShowPlayForChallenge;
-(BOOL)isShowMoreIndexPath:(id)arg1 ;
-(GKDashboardTurnDataSource *)turnDataSource;
-(void)setTurnDataSource:(GKDashboardTurnDataSource *)arg1 ;
-(GKDashboardChallengeDataSource *)challengeDataSource;
-(void)setChallengeDataSource:(GKDashboardChallengeDataSource *)arg1 ;
-(long long)numberShownInFirstSection;
-(void)setNumberShownInFirstSection:(long long)arg1 ;
@end

