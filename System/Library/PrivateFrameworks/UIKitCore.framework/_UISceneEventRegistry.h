/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIMoveEvent, UITouchesEvent, UIPressesEvent, UIWheelEvent, _UIGameControllerEvent, UIPhysicalKeyboardEvent;

@interface _UISceneEventRegistry : NSObject {

	UIMoveEvent* _moveEvent;
	UITouchesEvent* _touchesEvent;
	UIPressesEvent* _pressesEvent;
	UIWheelEvent* _wheelEvent;
	_UIGameControllerEvent* _gameControllerEvent;
	UIPhysicalKeyboardEvent* _physicalKeyboardEvent;

}

@property (nonatomic,readonly) UIMoveEvent * moveEvent;                                      //@synthesize moveEvent=_moveEvent - In the implementation block
@property (nonatomic,readonly) UITouchesEvent * touchesEvent;                                //@synthesize touchesEvent=_touchesEvent - In the implementation block
@property (nonatomic,readonly) UIPressesEvent * pressesEvent;                                //@synthesize pressesEvent=_pressesEvent - In the implementation block
@property (nonatomic,readonly) UIWheelEvent * wheelEvent;                                    //@synthesize wheelEvent=_wheelEvent - In the implementation block
@property (nonatomic,readonly) _UIGameControllerEvent * gameControllerEvent;                 //@synthesize gameControllerEvent=_gameControllerEvent - In the implementation block
@property (nonatomic,readonly) UIPhysicalKeyboardEvent * physicalKeyboardEvent;              //@synthesize physicalKeyboardEvent=_physicalKeyboardEvent - In the implementation block
-(void)invalidate;
-(UIMoveEvent *)moveEvent;
-(void)addMoveEvent:(id)arg1 ;
-(UITouchesEvent *)touchesEvent;
-(void)addTouchesEvent:(id)arg1 ;
-(UIPressesEvent *)pressesEvent;
-(void)addPressesEvent:(id)arg1 ;
-(UIWheelEvent *)wheelEvent;
-(void)addWheelEvent:(id)arg1 ;
-(_UIGameControllerEvent *)gameControllerEvent;
-(void)addGameControllerEvent:(id)arg1 ;
-(UIPhysicalKeyboardEvent *)physicalKeyboardEvent;
-(void)addPhysicalKeyboardEvent:(id)arg1 ;
@end

