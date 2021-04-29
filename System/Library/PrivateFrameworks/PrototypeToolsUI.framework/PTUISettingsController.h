/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController {

	UIBarButtonItem* _dismissButton;

}

@property (nonatomic,retain) UIBarButtonItem * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)_pxswizzled_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)px_shouldPreventAnimations;
-(void)px_setShouldPreventAnimations:(BOOL)arg1 ;
-(void)px_performWithoutAnimations:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismiss;
-(BOOL)_canShowWhileLocked;
-(void)setDismissButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)dismissButton;
-(id)initWithRootSettings:(id)arg1 ;
-(id)initWithRootModuleController:(id)arg1 ;
-(id)_defaultDismissButton;
-(id)_initWithRootModule:(id)arg1 ;
-(void)_reloadWithRootModule:(id)arg1 ;
@end

