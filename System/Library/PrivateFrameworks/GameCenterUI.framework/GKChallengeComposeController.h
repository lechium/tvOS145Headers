/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKSimpleComposeController.h>

@class GKComposeHeaderField, GKChallenge, NSArray;

@interface GKChallengeComposeController : GKSimpleComposeController {

	GKComposeHeaderField* _challengeField;
	GKChallenge* _challenge;
	NSArray* _playersToLoad;

}

@property (nonatomic,retain) GKComposeHeaderField * challengeField;              //@synthesize challengeField=_challengeField - In the implementation block
@property (nonatomic,retain) GKChallenge * challenge;                            //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * playersToLoad;                            //@synthesize playersToLoad=_playersToLoad - In the implementation block
+(id)friendPickerFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)composeFlowForChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)composeAndSendFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(BOOL)arg4 readyHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)init;
-(void)cancel;
-(GKChallenge *)challenge;
-(void)viewDidLoad;
-(void)loadView;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)donePressed;
-(id)initWithChallenge:(id)arg1 defaultMessage:(id)arg2 players:(id)arg3 ;
-(void)setPlayersToLoad:(NSArray *)arg1 ;
-(void)setChallengeField:(GKComposeHeaderField *)arg1 ;
-(void)updateChallengeText;
-(GKComposeHeaderField *)challengeField;
-(NSArray *)playersToLoad;
@end

