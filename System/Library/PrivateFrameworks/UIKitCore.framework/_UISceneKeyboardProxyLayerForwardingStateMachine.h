/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIScenePresentationViewObserver.h>
#import <UIKitCore/_UIWindowLevelObserver.h>

@class FBScene, FBSSceneIdentityToken, _UIScenePresenter, FBSScene, UIWindow, NSSet, NSString;

@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject <_UIScenePresentationViewObserver, _UIWindowLevelObserver> {

	FBScene* _scene;
	FBSSceneIdentityToken* _identityToken;
	unsigned long long _state;
	id _windowCanvasChangedNotificationToken;
	_UIScenePresenter* _prioritizedPresenter;
	FBSScene* _hostingScene;
	UIWindow* _hostingWindow;
	NSSet* _keyboardLayersTracked;
	NSSet* _keyboardLayersAddedToHostingScene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(void)dealloc;
-(unsigned long long)_state;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)_setState:(unsigned long long)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)notePriorizedPresenter:(id)arg1 ;
-(void)noteKeyboardLayersBeingTracked:(id)arg1 ;
-(void)_noteHostedInWindow:(id)arg1 ;
-(void)_removeLayers:(id)arg1 fromScene:(id)arg2 ;
-(id)_newProxyLayers;
-(void)_addLayers:(id)arg1 toScene:(id)arg2 ;
-(void)presentationView:(id)arg1 didMoveToWindow:(id)arg2 ;
-(void)window:(id)arg1 changedFromLevel:(double)arg2 toLevel:(double)arg3 ;
@end
