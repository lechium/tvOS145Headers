/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIScene;


@protocol _UISceneComponentProviding <NSObject>
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@optional
-(id)_settingsDiffActionsForScene:(id)arg1;
-(id)_actionHandlersForScene:(id)arg1;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
-(void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
-(void)_sceneWillInvalidate:(id)arg1;

@required
-(UIScene *)_scene;
-(id)initWithScene:(id)arg1;
-(void)_setScene:(id)arg1;

@end

