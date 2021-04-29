/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)clearHUDPopTimer;
+(void)dismissHUD;
-(void)dealloc;
-(void)_applicationWillResignActive;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
-(void)_scheduleHUDPresentation;
-(void)_dismissHUD;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
-(void)_clearHUDPopTimer;
-(void)_didTakeScreenshot;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(BOOL)_HUDAllowedForWindow:(id)arg1 ;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
@end

