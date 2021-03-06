/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKBaseComposeController.h>

@class GKComposeHeaderWithStaticRecipients, NSString, NSArray;

@interface GKSimpleComposeController : GKBaseComposeController {

	GKComposeHeaderWithStaticRecipients* _toField;
	NSString* _defaultMessage;
	NSArray* _players;
	/*^block*/id _doneHandler;

}

@property (nonatomic,retain) GKComposeHeaderWithStaticRecipients * toField;              //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) NSString * defaultMessage;                                  //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) NSArray * players;                                          //@synthesize players=_players - In the implementation block
@property (nonatomic,copy) id doneHandler;                                               //@synthesize doneHandler=_doneHandler - In the implementation block
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)donePressed;
-(NSArray *)players;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)setDoneHandler:(id)arg1 ;
-(void)setToField:(GKComposeHeaderWithStaticRecipients *)arg1 ;
-(void)setDefaultMessage:(NSString *)arg1 ;
-(GKComposeHeaderWithStaticRecipients *)toField;
-(id)doneHandler;
-(NSString *)defaultMessage;
-(void)setupSendButton;
-(void)pushOntoNavigationController:(id)arg1 withDoneHandler:(/*^block*/id)arg2 ;
@end

