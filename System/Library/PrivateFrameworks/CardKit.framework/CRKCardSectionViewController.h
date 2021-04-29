/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRKCardSectionViewControllingDelegate.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/CRKFeedbackDelegate.h>
#import <libobjc.A.dylib/CRKEventResponding.h>

@protocol CRKCardSectionViewControllerDelegate, CRCardSection;
@class CRKOverlayButton, NSArray, INUIRemoteViewController, CRKCardSectionViewConfiguration, NSString;

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding> {

	CRKOverlayButton* _overlayButton;
	BOOL _childVCDesiresInteractivity;
	BOOL _loading;
	id<CRKCardSectionViewControllerDelegate> _delegate;
	id<CRCardSection> _cardSection;
	NSArray* _extraCommands;
	INUIRemoteViewController* __remoteViewController;
	CRKCardSectionViewConfiguration* _viewConfiguration;

}

@property (setter=_setExtraCommands:,getter=_extraCommands,nonatomic,retain) NSArray * extraCommands;              //@synthesize extraCommands=_extraCommands - In the implementation block
@property (nonatomic,readonly) INUIRemoteViewController * _remoteViewController;                                   //@synthesize _remoteViewController=__remoteViewController - In the implementation block
@property (assign,nonatomic,__weak) CRKCardSectionViewConfiguration * viewConfiguration;                           //@synthesize viewConfiguration=_viewConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<CRKCardSectionView> view; 
@property (nonatomic,retain) id<CRCardSection> cardSection;                                                        //@synthesize cardSection=_cardSection - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                        //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionViewControllerForCardSection:(id)arg1 ;
+(void)registerCardSectionViewController;
+(id)cardSectionClasses;
+(id)cardSectionViewControllerForViewConfiguration:(id)arg1 ;
+(void)_registerWithCardKit;
-(id<CRKCardSectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CRKCardSectionViewControllerDelegate>)arg1 ;
-(BOOL)isLoading;
-(id<CRCardSection>)cardSection;
-(void)didEngageCardSection:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)setLoading:(BOOL)arg1 ;
-(id)_commands;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(INUIRemoteViewController *)_remoteViewController;
-(void)presentViewController:(id)arg1 ;
-(id)_backingCardSection;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3 ;
-(void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3 ;
-(void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1 ;
-(BOOL)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2 ;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)willDismissViewController:(id)arg1 ;
-(void)setViewConfiguration:(CRKCardSectionViewConfiguration *)arg1 ;
-(BOOL)_shouldHideButtonOverlay;
-(id)_preferredPunchoutCommand;
-(id)_extraCommands;
-(id)_destinationPunchout;
-(void)_performAllCommands;
-(BOOL)_checkIfCardSectionIsNull:(id)arg1 ;
-(void)_loadCardSectionView;
-(void)_setupCardSectionButtons;
-(BOOL)_shouldRenderButtonOverlay;
-(void)_buttonOverlayWasTouchedUpInside:(id)arg1 ;
-(void)_buttonOverlayWasTouchedUpOutside:(id)arg1 ;
-(void)_buttonOverlayWasTouchedDown:(id)arg1 ;
-(void)_buttonOverlayTouchWasCanceled:(id)arg1 ;
-(id)_generateCardSectionViewAppearanceFeedback;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)performCommand:(id)arg1 forViewController:(id)arg2 ;
-(id)_initWithCardSection:(id)arg1 ;
-(void)_setExtraCommands:(id)arg1 ;
-(void)_performCommand:(id)arg1 ;
-(BOOL)_hasCorrespondingSearchUIView;
-(BOOL)_expectsSearchUIView;
-(BOOL)_isLoadedWithIntentsUIView;
-(void)_finishLoadingViewIfNecessary;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(void)_cardSectionTapped;
-(BOOL)_isIndicatingActivity;
-(void)_setViewExternally:(id)arg1 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(CRKCardSectionViewConfiguration *)viewConfiguration;
@end

