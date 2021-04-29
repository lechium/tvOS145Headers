/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKRenderLoopDelegate.h>

@protocol PKBillPaymentRingViewDelegate, PKBillPaymentRingViewDataSource;
@class PKBillPaymentSuggestedAmountList, NSArray, NSDictionary, NSDecimalNumber, PKBillPaymentSuggestedAmount, PKRenderLoop, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, PKBillPaymentRingGradientState, PKRingGradientView, PKBillPaymentCircularView, PKEnterCurrencyAmountView, UILabel, PKCurvedTextLabel, UIColor, NSString;

@interface PKBillPaymentRingView : UIView <UIGestureRecognizerDelegate, PKRenderLoopDelegate> {

	PKBillPaymentSuggestedAmountList* _suggestedAmountList;
	NSArray* _suggestedAmountViews;
	double _amountRoundingUnit;
	double _minimumPaymentAmount;
	double _maximumPaymentAmount;
	NSDictionary* _suggestedAmoutImages;
	NSArray* _suggestedAmountAngles;
	NSDictionary* _suggestedAmountsForAngle;
	NSDictionary* _standardRingStates;
	NSDictionary* _colorStops;
	NSDecimalNumber* _displayAmount;
	NSDecimalNumber* _overrideDisplayAmount;
	NSDecimalNumber* _effectiveDisplayAmount;
	BOOL _selectedSuggestedAmountIsTarget;
	PKBillPaymentSuggestedAmount* _selectedSuggestedAmount;
	PKBillPaymentSuggestedAmount* _highlightedSuggestedAmount;
	NSDecimalNumber* _pinnedAmount;
	double _pinnedAmountAngle;
	unsigned long long _pinnedAmountAngleIndex;
	PKRenderLoop* _renderLoop;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _pressRecognizer;
	UIPanGestureRecognizer* _dragRecognizer;
	double _lastDrawTime;
	SCD_Struct_PK16 _spring;
	SCD_Struct_PK17 _angleState;
	SCD_Struct_PK16 _responseSpring;
	SCD_Struct_PK17 _responseState;
	double _responseSpringElapsedDuration;
	SCD_Struct_PK16 _scaleSpring;
	SCD_Struct_PK17 _scaleState;
	BOOL _dragging;
	BOOL _pressed;
	long long _dragCapture;
	BOOL _ignoreTouches;
	BOOL _dotsVisible;
	double _interestLabelAlpha;
	BOOL _needsInitialDisplay;
	NSDecimalNumber* _initialDisplayAmount;
	double _overrideGradientStartAngle;
	PKBillPaymentRingGradientState* _overrideGradientState;
	PKRingGradientView* _ringView;
	PKBillPaymentCircularView* _handleView;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;
	UILabel* _interestLabel;
	PKCurvedTextLabel* _topCurvedTextLabel;
	PKCurvedTextLabel* _bottomCurvedTextLabel;
	BOOL _userSelectedAngleChange;
	BOOL _enabled;
	BOOL _isSmall;
	id<PKBillPaymentRingViewDelegate> _delegate;
	id<PKBillPaymentRingViewDataSource> _dataSource;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount; 
@property (assign,nonatomic,__weak) id<PKBillPaymentRingViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKBillPaymentRingViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isSmall;                                                       //@synthesize isSmall=_isSmall - In the implementation block
@property (nonatomic,readonly) double ringWidth; 
@property (nonatomic,readonly) double targetAngle; 
@property (nonatomic,copy,readonly) UIColor * currentStartColor; 
@property (nonatomic,copy,readonly) UIColor * currentEndColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PKBillPaymentRingViewDelegate>)delegate;
-(void)setDelegate:(id<PKBillPaymentRingViewDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CGPoint)_center;
-(id<PKBillPaymentRingViewDataSource>)dataSource;
-(NSDecimalNumber *)amount;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<PKBillPaymentRingViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)renderLoop:(id)arg1 drawAtTime:(double)arg2 ;
-(void)_updatePausedState;
-(id)initWithSuggestedAmountList:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 ;
-(double)ringWidth;
-(void)prepareForInitialDisplayWithAmount:(id)arg1 ;
-(void)completeInitialDisplayAnimated:(BOOL)arg1 ;
-(UIColor *)currentStartColor;
-(void)setAmount:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSmall;
-(void)setIsSmall:(BOOL)arg1 ;
-(void)_createSuggestedAmountsImageDictionary;
-(void)_createSuggestedAmountAngles;
-(void)_createStandardColors;
-(void)_createSuggestedAmountRingColorStops;
-(id)_roundedAmountForAngle:(double)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)_pressRecognized:(id)arg1 ;
-(void)_dragRecognizerChanged:(id)arg1 ;
-(void)didUpdateAngleSpringTarget;
-(void)didUpdateAngleSpringPosition;
-(void)didUpdateScaleSpringPosition;
-(void)setAngle:(double)arg1 animated:(BOOL)arg2 forExplicitAmount:(id)arg3 userInitiated:(BOOL)arg4 ;
-(void)_updateForEnabledState;
-(double)_ringWidth;
-(double)_amountLabelMaximumFontSize;
-(double)_offsetCurrentAngle;
-(CGPoint)_centerPointAtAngle:(double)arg1 ;
-(double)_angleForAmount:(id)arg1 ;
-(double)_offsetAngle:(double)arg1 ;
-(BOOL)_preferredPausedState;
-(void)_pauseRenderLoop;
-(double)_angleForPosition:(CGPoint)arg1 ;
-(double)_angleForRecognizer:(id)arg1 ;
-(void)_updateScaleTarget;
-(void)_dragStarted:(id)arg1 ;
-(void)_dragMoved:(id)arg1 ;
-(void)_dragEnded:(id)arg1 ;
-(void)_dragMovedToAngle:(double)arg1 normalizedRadius:(double)arg2 ;
-(void)setHandleScale:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateCurvedText;
-(BOOL)_updateEffectiveDisplayAmount;
-(id)_targetGradientStateForAngle:(double)arg1 ;
-(void)_setDotsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_unnormalizedAngleIndexForAngle:(double)arg1 ;
-(id)_suggestedAmountForAngleIndex:(unsigned long long)arg1 ;
-(void)_setSelectedSuggestedAmount:(id)arg1 ;
-(void)_updateHandleImage;
-(BOOL)_isAmount:(id)arg1 withinRoundingUnitOfAmount:(id)arg2 ;
-(id)_blendFromGradientState:(id)arg1 toState:(id)arg2 withProgress:(double)arg3 ;
-(void)_setHighlightedSuggestedAmount:(id)arg1 ;
-(BOOL)_setDisplayAmount:(id)arg1 ;
-(void)_updateInterestText;
-(void)_setResponse:(double)arg1 ;
-(id)_blendFromLinearColor:(id)arg1 toLinearColor:(id)arg2 withProgress:(double)arg3 ;
-(id)_suggestedAmountImageForSuggestedAmount:(id)arg1 ;
-(double)_angleForAngleIndex:(unsigned long long)arg1 ;
-(unsigned long long)_segmentEndAngleIndexForAngle:(double)arg1 ;
-(id)_gradientStateForSuggestedAmount:(id)arg1 ;
-(double)targetAngle;
-(UIColor *)currentEndColor;
@end

