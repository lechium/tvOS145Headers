/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboard.h>

@protocol UITextCursorAssertion;
@interface UIKeyboardAutomatic : UIKeyboard {

	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
	BOOL receivedCandidatesInCurrentInputMode;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;               //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (assign,nonatomic) BOOL showsCandidateBar; 
@property (assign,nonatomic) BOOL receivedCandidatesInCurrentInputMode; 
@property (assign,nonatomic) BOOL showsCandidateInline; 
+(id)sharedInstance;
+(id)activeInstance;
-(void)dealloc;
-(void)activate;
-(BOOL)isActive;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAutomatic;
-(BOOL)showsCandidateBar;
-(void)setShowsCandidateBar:(BOOL)arg1 ;
-(void)willResume:(id)arg1 ;
-(void)minimize;
-(void)maximize;
-(void)didSuspend:(id)arg1 ;
-(id<UITextCursorAssertion>)blinkAssertion;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(BOOL)showsCandidateInline;
-(void)setShowsCandidateInline:(BOOL)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(BOOL)_isAutomaticKeyboard;
-(BOOL)receivedCandidatesInCurrentInputMode;
-(void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1 ;
@end
