/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/GKLocalPlayerListener.h>
#import <libobjc.A.dylib/GKTurnBasedEventListener.h>
#import <libobjc.A.dylib/GKExtensionParentViewControllerProtocol.h>

@protocol GKTurnBasedMatchmakerViewControllerDelegate;
@class GKTurnBasedMatchmakerHostViewController, GKMatchRequest, UIAlertController, NSString;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol> {

	BOOL _showExistingMatches;
	id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
	GKTurnBasedMatchmakerHostViewController* _remoteViewController;
	GKMatchRequest* _matchRequest;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) GKTurnBasedMatchmakerHostViewController * remoteViewController;                                  //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) GKMatchRequest * matchRequest;                                                                   //@synthesize matchRequest=_matchRequest - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                                             //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; 
@property (assign,nonatomic) BOOL showExistingMatches;                                                                        //@synthesize showExistingMatches=_showExistingMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(unsigned long long)supportedInterfaceOrientations;
-(void)finishWithError:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(GKTurnBasedMatchmakerHostViewController *)remoteViewController;
-(void)setRemoteViewController:(GKTurnBasedMatchmakerHostViewController *)arg1 ;
-(void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(BOOL)arg3 ;
-(GKMatchRequest *)matchRequest;
-(void)setMatchRequest:(GKMatchRequest *)arg1 ;
-(void)_setupChildViewController;
-(void)authenticationChanged:(id)arg1 ;
-(void)_setupRemoteViewController;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(id<GKTurnBasedMatchmakerViewControllerDelegate>)turnBasedMatchmakerDelegate;
-(void)setShowExistingMatches:(BOOL)arg1 ;
-(id)initWithMatchRequest:(id)arg1 ;
-(void)finishWithMatch:(id)arg1 ;
-(void)playerQuitMatch:(id)arg1 ;
-(void)setTurnBasedMatchmakerDelegate:(id<GKTurnBasedMatchmakerViewControllerDelegate>)arg1 ;
-(BOOL)showExistingMatches;
@end

