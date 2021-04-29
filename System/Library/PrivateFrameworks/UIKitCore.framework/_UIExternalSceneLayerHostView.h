/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISceneLayerHostView.h>
#import <UIKit/UIExternalScenePairingObserverDelegate.h>

@protocol UIScenePresenter;
@class FBScene, NSString, UIExternalScenePairingObserver, UIScenePresentationManager;

@interface _UIExternalSceneLayerHostView : _UISceneLayerHostView <UIExternalScenePairingObserverDelegate> {

	FBScene* _parentScene;
	FBScene* _targetScene;
	NSString* _targetSceneID;
	UIExternalScenePairingObserver* _pairingObserver;
	UIScenePresentationManager* _presentationManager;
	id<UIScenePresenter> _presenter;

}

@property (nonatomic,readonly) FBScene * targetScene;               //@synthesize targetScene=_targetScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setCurrentPresentationContext:(id)arg1 ;
-(void)_updateHostingState;
-(void)_updateTargetScene;
-(void)externalScenePairingObserver:(id)arg1 pairingsDidChange:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2 ;
-(FBScene *)targetScene;
@end

