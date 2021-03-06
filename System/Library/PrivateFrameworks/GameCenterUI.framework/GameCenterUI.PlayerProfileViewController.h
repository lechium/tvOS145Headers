/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI.BaseCollectionViewController.h>

@class _TtC12GameCenterUI18BootstrapPresenter, _TtC12GameCenterUI22PlayerProfilePresenter, PSRootController, PSSpecifier;

@interface GameCenterUI.PlayerProfileViewController : GameCenterUI.BaseCollectionViewController {

	 bootstrapPresenter;
	 statePresenter;
	 collectionContent;
	 components;
	 clippingLayer;
	 startTime;
	 _rootController;
	 _specifier;

}

@property (retain,nonatomic) _TtC12GameCenterUI18BootstrapPresenter * bootstrapPresenter; 
@property (readonly,nonatomic) _TtC12GameCenterUI22PlayerProfilePresenter * dataPresenter; 
@property (retain,nonatomic) PSRootController * _rootController;                                        //@synthesize rootController=_rootController - In the implementation block
@property (retain,nonatomic) PSSpecifier * _specifier;                                                  //@synthesize specifier=_specifier - In the implementation block
+(void)showProfileFor:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(PSSpecifier *)_specifier;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PSRootController *)_rootController;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(_TtC12GameCenterUI18BootstrapPresenter *)bootstrapPresenter;
-(void)setBootstrapPresenter:(_TtC12GameCenterUI18BootstrapPresenter *)arg1 ;
-(_TtC12GameCenterUI22PlayerProfilePresenter *)dataPresenter;
-(void)set_rootController:(PSRootController *)arg1 ;
-(void)set_specifier:(PSSpecifier *)arg1 ;
@end

