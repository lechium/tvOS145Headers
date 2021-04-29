/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, UIView, UIResponder, UIInputResponderController, NSString;

@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate> {

	long long _type;
	UIViewController* _modalViewController;
	UIView* _contextView;
	UIResponder* _pinnedResponder;
	UIInputResponderController* _inputResponderController;
	BOOL _dismissed;
	/*^block*/id _dismissedHandler;

}

@property (nonatomic,copy) id dismissedHandler;                     //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canShowTextServices;
+(long long)availableTextServices;
+(id)showServiceForType:(long long)arg1 withContext:(id)arg2 ;
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
+(BOOL)_canShowTextServiceForType:(long long)arg1 ;
+(id)textServiceSessionForType:(long long)arg1 ;
+(BOOL)shouldPresentServiceInSameWindowAsView:(id)arg1 ;
-(id)init;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)_endSession;
-(BOOL)isDisplaying;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
-(void)setDismissedHandler:(id)arg1 ;
-(void)sessionDidDismiss;
-(id)dismissedHandler;
@end

