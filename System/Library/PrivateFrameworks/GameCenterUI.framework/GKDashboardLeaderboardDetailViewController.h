/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, UILabel, UIButton, GKLeaderboard, GKScore;

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController {

	GKDashboardPlayerPhotoView* _playerView;
	UILabel* _nameLabel;
	UILabel* _descriptionLabel;
	UILabel* _earnedOnLabel;
	UILabel* _infoLabel;
	UIButton* _firstButton;
	UIButton* _secondButton;
	UIButton* _reportProblemButton;
	GKLeaderboard* _leaderboard;
	GKScore* _score;

}

@property (assign,nonatomic) GKDashboardPlayerPhotoView * playerView;              //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                           //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UILabel * earnedOnLabel;                              //@synthesize earnedOnLabel=_earnedOnLabel - In the implementation block
@property (assign,nonatomic) UILabel * infoLabel;                                  //@synthesize infoLabel=_infoLabel - In the implementation block
@property (assign,nonatomic) UIButton * firstButton;                               //@synthesize firstButton=_firstButton - In the implementation block
@property (assign,nonatomic) UIButton * secondButton;                              //@synthesize secondButton=_secondButton - In the implementation block
@property (assign,nonatomic) UIButton * reportProblemButton;                       //@synthesize reportProblemButton=_reportProblemButton - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                          //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKScore * score;                                      //@synthesize score=_score - In the implementation block
-(GKScore *)score;
-(void)setScore:(GKScore *)arg1 ;
-(void)viewDidLoad;
-(void)report:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(id)preferredFocusEnvironments;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setPlayerView:(GKDashboardPlayerPhotoView *)arg1 ;
-(GKDashboardPlayerPhotoView *)playerView;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)configureForScore;
-(void)share:(id)arg1 ;
-(void)challenge:(id)arg1 ;
-(id)initWithScore:(id)arg1 leaderboard:(id)arg2 ;
-(UILabel *)earnedOnLabel;
-(void)setEarnedOnLabel:(UILabel *)arg1 ;
-(UIButton *)firstButton;
-(void)setFirstButton:(UIButton *)arg1 ;
-(UIButton *)secondButton;
-(void)setSecondButton:(UIButton *)arg1 ;
-(UIButton *)reportProblemButton;
-(void)setReportProblemButton:(UIButton *)arg1 ;
@end

