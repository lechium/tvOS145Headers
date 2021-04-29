/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@protocol UITextCursorAssertion;
@class UITextRange, CADisplayLink, NSOperation, NSString;

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {

	UITextRange* _range;
	id _placeholder;
	BOOL _didHaveText;
	BOOL _willInsertResult;
	double _angle;
	double _diameter;
	CADisplayLink* _displayLink;
	double _startTime;
	double _shrinkStartTime;
	BOOL _shrinking;
	NSOperation* _afterShrinkCompletionInvocation;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (assign,nonatomic) BOOL willInsertResult;                                 //@synthesize willInsertResult=_willInsertResult - In the implementation block
@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;              //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(long long)fallbackPlaceholderLength;
+(double)diameterForLineHeight:(double)arg1 ;
+(double)widthForLineHeight:(double)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)fadeOutDuration;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)rotateBy:(double)arg1 ;
-(id<UITextCursorAssertion>)blinkAssertion;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(void)updatePosition;
-(void)startLandingIfNecessary;
-(void)stopLandingForError;
-(void)stopLanding;
-(void)setWillInsertResult:(BOOL)arg1 ;
-(void)clearRotation;
-(void)advanceLanding:(id)arg1 ;
-(void)startDisplayLinkIfNecessary;
-(void)hideCursor;
-(void)showCursor;
-(void)shrinkWithCompletion:(id)arg1 ;
-(void)errorShakeDidFinish;
-(BOOL)delegateWasEmpty;
-(BOOL)hasActivePlaceholder;
-(BOOL)willInsertResult;
@end

