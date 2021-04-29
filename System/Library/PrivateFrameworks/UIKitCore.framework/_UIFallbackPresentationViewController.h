/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIApplicationRotationFollowingController.h>

@class _UIFallbackPresentationWindow, UIWindow;

@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController {

	_UIFallbackPresentationWindow* _presentationWindow;
	BOOL _hasPreservedKeyboardInputViews;
	BOOL _hasDismissCompletionHandler;
	UIWindow* _rotationDecider;
	/*^block*/id _presentationPreparationBlock;

}

@property (assign,nonatomic) BOOL hasPreservedKeyboardInputViews;              //@synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews - In the implementation block
@property (assign,nonatomic) BOOL hasDismissCompletionHandler;                 //@synthesize hasDismissCompletionHandler=_hasDismissCompletionHandler - In the implementation block
@property (nonatomic,retain) UIWindow * rotationDecider;                       //@synthesize rotationDecider=_rotationDecider - In the implementation block
@property (nonatomic,copy) id presentationPreparationBlock;                    //@synthesize presentationPreparationBlock=_presentationPreparationBlock - In the implementation block
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setRotationDecider:(UIWindow *)arg1 ;
-(void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)setHasDismissCompletionHandler:(BOOL)arg1 ;
-(BOOL)hasDismissCompletionHandler;
-(void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHasPreservedKeyboardInputViews:(BOOL)arg1 ;
-(BOOL)hasPreservedKeyboardInputViews;
-(void)_preparePresentationControllerForPresenting:(id)arg1 ;
-(UIWindow *)rotationDecider;
-(id)presentationPreparationBlock;
-(void)setPresentationPreparationBlock:(id)arg1 ;
@end

