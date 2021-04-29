/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UIViewController, NSString;

@interface TVSKNavigationController : UINavigationController <UIGestureRecognizerDelegate> {

	BOOL _toplevelAnimatingNavigationController;
	UITapGestureRecognizer* _menuRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                                                  //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (getter=isToplevelAnimatingNavigationController,nonatomic,readonly) BOOL toplevelAnimatingNavigationController;              //@synthesize toplevelAnimatingNavigationController=_toplevelAnimatingNavigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * rootContentViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedToplevelAnimatingNavigationController;
-(void)viewDidLoad;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(void)_didSelectMenu;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)_initToplevelAnimatingNavigationController;
-(void)replaceContentViewControllersWithViewControllers:(id)arg1 ;
-(UIViewController *)rootContentViewController;
-(void)replaceContentViewControllersWithViewController:(id)arg1 ;
-(BOOL)isToplevelAnimatingNavigationController;
@end

