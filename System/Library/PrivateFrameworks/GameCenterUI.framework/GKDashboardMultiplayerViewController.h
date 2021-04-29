/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKDashboardCollectionViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, GKMatchRequest, NSString, GKGame, UIActivityIndicatorView, UIButton, _TtC12GameCenterUI33GKMultiplayerStepperContainerView, GKDashboardMultiplayerPickerViewController, GKDashboardMultiplayerDataSource;

@interface GKDashboardMultiplayerViewController : GKDashboardCollectionViewController <UIGestureRecognizerDelegate> {

	BOOL _didAcceptGameInvite;
	BOOL _didStartForcedAutomatch;
	BOOL _statusViewHidden;
	BOOL _didLoadRecipients;
	BOOL _needsFloatIn;
	UILabel* _statusLabel;
	GKMatchRequest* _matchRequest;
	GKMatchRequest* _originalMatchRequest;
	NSString* _defaultInvitationMessage;
	GKGame* _game;
	long long _matchmakingMode;
	UILabel* _multiplayerTitleLabel;
	UILabel* _playerRangeLabel;
	UIActivityIndicatorView* _spinner;
	UIButton* _playButton;
	_TtC12GameCenterUI33GKMultiplayerStepperContainerView* _stepperView;
	UILabel* _descriptionLabel;
	GKDashboardMultiplayerPickerViewController* _picker;
	long long _invitationType;

}

@property (assign,nonatomic) UILabel * multiplayerTitleLabel;                                                  //@synthesize multiplayerTitleLabel=_multiplayerTitleLabel - In the implementation block
@property (assign,nonatomic) UILabel * playerRangeLabel;                                                       //@synthesize playerRangeLabel=_playerRangeLabel - In the implementation block
@property (assign,nonatomic) UILabel * statusLabel;                                                            //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) UIActivityIndicatorView * spinner;                                                //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) UIButton * playButton;                                                            //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) _TtC12GameCenterUI33GKMultiplayerStepperContainerView * stepperView;              //@synthesize stepperView=_stepperView - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) BOOL didLoadRecipients;                                                           //@synthesize didLoadRecipients=_didLoadRecipients - In the implementation block
@property (assign,nonatomic) BOOL needsFloatIn;                                                                //@synthesize needsFloatIn=_needsFloatIn - In the implementation block
@property (nonatomic,retain) GKDashboardMultiplayerPickerViewController * picker;                              //@synthesize picker=_picker - In the implementation block
@property (assign,nonatomic) long long invitationType;                                                         //@synthesize invitationType=_invitationType - In the implementation block
@property (nonatomic,copy,readonly) GKMatchRequest * matchRequest;                                             //@synthesize matchRequest=_matchRequest - In the implementation block
@property (nonatomic,copy,readonly) GKMatchRequest * originalMatchRequest;                                     //@synthesize originalMatchRequest=_originalMatchRequest - In the implementation block
@property (nonatomic,copy) NSString * defaultInvitationMessage;                                                //@synthesize defaultInvitationMessage=_defaultInvitationMessage - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                                    //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) BOOL didAcceptGameInvite;                                                         //@synthesize didAcceptGameInvite=_didAcceptGameInvite - In the implementation block
@property (assign,nonatomic) BOOL didStartForcedAutomatch;                                                     //@synthesize didStartForcedAutomatch=_didStartForcedAutomatch - In the implementation block
@property (assign,nonatomic) long long matchmakingMode;                                                        //@synthesize matchmakingMode=_matchmakingMode - In the implementation block
@property (nonatomic,readonly) GKDashboardMultiplayerDataSource * multiplayerDataSource; 
@property (assign,nonatomic) BOOL statusViewHidden;                                                            //@synthesize statusViewHidden=_statusViewHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)viewDidLoad;
-(void)removePlayer:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(id)preferredFocusEnvironments;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(GKMatchRequest *)matchRequest;
-(id)initWithMatchRequest:(id)arg1 ;
-(void)didEnterLoadedState;
-(void)setMatchmakingMode:(long long)arg1 ;
-(void)setDefaultInvitationMessage:(NSString *)arg1 ;
-(void)localPlayerAcceptedGameInvite:(id)arg1 ;
-(void)playersToInvite:(id)arg1 ;
-(NSString *)defaultInvitationMessage;
-(long long)matchmakingMode;
-(GKDashboardMultiplayerDataSource *)multiplayerDataSource;
-(GKMatchRequest *)originalMatchRequest;
-(BOOL)didStartForcedAutomatch;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(BOOL)canStartForcedAutomatch;
-(void)playNow;
-(void)invitePlayers:(id)arg1 ;
-(BOOL)isInSetupMode;
-(UIButton *)playButton;
-(void)setPlayButton:(UIButton *)arg1 ;
-(long long)maxAvailablePlayers;
-(void)setInvitationType:(long long)arg1 ;
-(void)configureDataSource;
-(void)setupDataSourcePlayerChangeHandler;
-(void)setDidLoadRecipients:(BOOL)arg1 ;
-(BOOL)didLoadRecipients;
-(void)setupStepperView;
-(_TtC12GameCenterUI33GKMultiplayerStepperContainerView *)stepperView;
-(void)setStepperView:(_TtC12GameCenterUI33GKMultiplayerStepperContainerView *)arg1 ;
-(BOOL)allowPlayerCountSelection;
-(void)handleNewParticipantCount:(long long)arg1 ;
-(UILabel *)multiplayerTitleLabel;
-(long long)invitationType;
-(void)setDidStartForcedAutomatch:(BOOL)arg1 ;
-(void)didPressPlayButton;
-(void)determineInvitationType;
-(void)removedPlayer:(id)arg1 ;
-(void)setPicker:(GKDashboardMultiplayerPickerViewController *)arg1 ;
-(void)didFinishPickingPlayers:(id)arg1 ;
-(void)willPresentPlayerPicker:(id)arg1 ;
-(void)setDidAcceptGameInvite:(BOOL)arg1 ;
-(void)removeAutomatchPlayer;
-(void)showInvitationPage;
-(void)addAutomatchPlayer;
-(BOOL)didAcceptGameInvite;
-(BOOL)statusViewHidden;
-(void)setMultiplayerTitleLabel:(UILabel *)arg1 ;
-(UILabel *)playerRangeLabel;
-(void)setPlayerRangeLabel:(UILabel *)arg1 ;
-(BOOL)needsFloatIn;
-(void)setNeedsFloatIn:(BOOL)arg1 ;
-(GKDashboardMultiplayerPickerViewController *)picker;
@end

