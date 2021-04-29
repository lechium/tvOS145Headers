/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPassDeleteAnimationControllerDelegate;
@class UIAlertController, PKPassView, PKPassGroupView;

@interface PKPassDeleteAnimationController : NSObject {

	UIAlertController* _alertController;
	id<PKPassDeleteAnimationControllerDelegate> _delegate;
	PKPassView* _passView;
	PKPassGroupView* _groupView;

}

@property (assign,nonatomic,__weak) id<PKPassDeleteAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) PKPassView * passView;                                           //@synthesize passView=_passView - In the implementation block
@property (nonatomic,retain,readonly) PKPassGroupView * groupView;                                     //@synthesize groupView=_groupView - In the implementation block
+(void)performPassbookDeleteWithView:(id)arg1 inSuperview:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id<PKPassDeleteAnimationControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPassDeleteAnimationControllerDelegate>)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(PKPassGroupView *)groupView;
-(void)showInViewController:(id)arg1 ;
-(PKPassView *)passView;
-(void)_unregisterForEnterBackgroundNotification;
-(void)finished:(BOOL)arg1 ;
-(void)_startAnimation;
-(void)_registerForEnterBackgroundNotification;
-(id)initWithPassView:(id)arg1 groupView:(id)arg2 ;
-(void)forceDeleteAnimation;
@end

