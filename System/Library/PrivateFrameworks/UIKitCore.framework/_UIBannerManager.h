/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIWindowScene, _UIBannerWindow, _UIBannerContainerView, UIScene, NSString;

@interface _UIBannerManager : NSObject <_UISceneComponentProviding> {

	UIWindowScene* _windowScene;
	_UIBannerWindow* _window;
	_UIBannerContainerView* _containerView;

}

@property (nonatomic,retain) UIWindowScene * windowScene;                                          //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,retain) _UIBannerWindow * window;                                             //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) _UIBannerContainerView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(_UIBannerWindow *)window;
-(void)setWindow:(_UIBannerWindow *)arg1 ;
-(_UIBannerContainerView *)containerView;
-(UIWindowScene *)windowScene;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(void)setContainerView:(_UIBannerContainerView *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)_setScene:(id)arg1 ;
-(id)bannerWithContent:(id)arg1 ;
-(void)_createWindowIfNeeded;
@end

