/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface VideosUI.LandingPageViewController : UIViewController {

	 collectionImpressioner;
	 recentlySearchedCollectionViewModel;
	 delegate;
	 pageMetrics;
	 document;
	 activeServiceRequest;
	 stackViewController;
	 refreshTTL;
	 resetContentOffsetOnReAppear;
	 notificationCenter;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)handleAppWillEnterForeground:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
@end

