/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKNavigatorViewController.h>

@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController {

	OKPageViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(BOOL)prepareForDisplay;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(OKPageViewController *)pageViewController;
-(void)resolutionDidChange;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(void)updatePageViewController;
@end
