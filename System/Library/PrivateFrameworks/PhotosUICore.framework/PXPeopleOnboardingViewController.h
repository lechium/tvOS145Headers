/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleStatusViewDelegate.h>

@class PXPeopleProgressManager, PXPeopleStatusViewController, PXPeopleSectionedDataSource, NSString;

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate> {

	unsigned long long _onboardStatus;
	PXPeopleProgressManager* _progressManager;
	PXPeopleStatusViewController* _statusViewController;
	PXPeopleSectionedDataSource* _peopleDataSource;

}

@property (assign,nonatomic) unsigned long long onboardStatus;                                 //@synthesize onboardStatus=_onboardStatus - In the implementation block
@property (nonatomic,retain) PXPeopleProgressManager * progressManager;                        //@synthesize progressManager=_progressManager - In the implementation block
@property (nonatomic,retain) PXPeopleStatusViewController * statusViewController;              //@synthesize statusViewController=_statusViewController - In the implementation block
@property (nonatomic,retain) PXPeopleSectionedDataSource * peopleDataSource;                   //@synthesize peopleDataSource=_peopleDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)px_navigationDestination;
-(void)statusViewControllerEnterButtonTapped:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 progressManager:(id)arg2 ;
-(void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2 ;
-(void)_updateStatusViewForStatus:(unsigned long long)arg1 progress:(double)arg2 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)peopleHomeController;
-(void)_pushToPeopleHome:(id)arg1 ;
-(void)_progressChanged:(id)arg1 ;
-(unsigned long long)onboardStatus;
-(void)setOnboardStatus:(unsigned long long)arg1 ;
-(PXPeopleProgressManager *)progressManager;
-(void)setProgressManager:(PXPeopleProgressManager *)arg1 ;
-(PXPeopleStatusViewController *)statusViewController;
-(void)setStatusViewController:(PXPeopleStatusViewController *)arg1 ;
-(PXPeopleSectionedDataSource *)peopleDataSource;
-(void)setPeopleDataSource:(PXPeopleSectionedDataSource *)arg1 ;
@end

