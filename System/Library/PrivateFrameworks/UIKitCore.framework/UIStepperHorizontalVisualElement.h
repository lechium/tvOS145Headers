/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIStepperVisualElement.h>

@protocol UIStepperControl;
@class UIImageView, UIButton, NSTimer, NSMutableDictionary, UIViewPropertyAnimator, NSString;

@interface UIStepperHorizontalVisualElement : UIView <UIStepperVisualElement> {

	BOOL _isRtoL;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	UIImageView* _leftHighlight;
	UIImageView* _rightHighlight;
	UIImageView* _middleView;
	UIButton* _plusButton;
	UIButton* _minusButton;
	NSTimer* _repeatTimer;
	long long _repeatCount;
	NSMutableDictionary* _dividerImages;
	UIViewPropertyAnimator* _leftAlphaAnimator;
	UIViewPropertyAnimator* _rightAlphaAnimator;
	UIViewPropertyAnimator* _leftFrameAnimator;
	UIViewPropertyAnimator* _rightFrameAnimator;
	BOOL _autorepeat;
	BOOL _continuous;
	BOOL _enabled;
	BOOL _wraps;
	double _value;
	double _maximumValue;
	double _minimumValue;
	id<UIStepperControl> _stepperControl;
	double _stepValue;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double value;                                            //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                                     //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                                     //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                        //@synthesize stepValue=_stepValue - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous;                     //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) BOOL wraps;                                              //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) BOOL autorepeat;                                         //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic,__weak) id<UIStepperControl> stepperControl;              //@synthesize stepperControl=_stepperControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)initialSize;
+(CGSize)initialIntrinsicSize;
+(UIEdgeInsets)initialAlignmentRectInsets;
+(id)_highlightOpacityAnimation;
+(id)_highlightSizeAnimation;
-(void)setEnabled:(BOOL)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isEnabled;
-(double)minimumValue;
-(void)setMinimumValue:(double)arg1 ;
-(double)maximumValue;
-(void)setMaximumValue:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)wraps;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)isContinuous;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(double)stepValue;
-(void)setStepValue:(double)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_commonStepperInit;
-(void)_updateCount:(id)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 forControl:(id)arg2 ;
-(CGSize)intrinsicSizeWithinSize:(CGSize)arg1 forControl:(id)arg2 ;
-(UIEdgeInsets)alignmentRectInsetsForControl:(id)arg1 ;
-(void)setAutorepeat:(BOOL)arg1 ;
-(void)setStepperControl:(id<UIStepperControl>)arg1 ;
-(BOOL)autorepeat;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(id)incrementImageForState:(unsigned long long)arg1 ;
-(id)decrementImageForState:(unsigned long long)arg1 ;
-(void)_updateButtonEnabled;
-(id<UIStepperControl>)stepperControl;
-(void)_updateBackgroundForButtonState;
-(void)_updateDividerImageForButtonState;
-(CGRect)_leftHighlightFrame;
-(CGRect)_rightHighlightFrame;
-(id)_alphaAnimator:(BOOL)arg1 ;
-(void)_updateHighlight:(id)arg1 button:(id)arg2 onRight:(BOOL)arg3 ;
-(void)_updateButton:(id)arg1 backgroundView:(id)arg2 highlightView:(id)arg3 backgroundImage:(id)arg4 highlightImage:(id)arg5 onRight:(BOOL)arg6 ;
-(void)_updateHighlightingAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)_leftHighlightInsetFrame;
-(CGRect)_rightHighlightInsetFrame;
@end

