/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, CAShapeLayer, UIColor;

@interface PKRingGradientView : UIView {

	CAGradientLayer* _gradientLayer;
	CAShapeLayer* _gradientMaskLayer;
	CAShapeLayer* _strokeLayer;
	CAShapeLayer* _backgroundLayer;
	CAShapeLayer* _backgroundCap;
	CAShapeLayer* _gradientCap;
	CGColorRef _effectiveFillColor;
	CGColorRef _effectiveStrokeColor;
	BOOL _gradientCapIsFillColor;
	BOOL _enabled;
	UIColor* _fillColor;
	UIColor* _strokeColor;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	double _minimumAngle;
	double _currentAngle;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                          //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) UIColor * strokeColor;                        //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,copy) UIColor * gradientStartColor;                 //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,copy) UIColor * gradientEndColor;                   //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (assign,nonatomic) double minimumAngle;                        //@synthesize minimumAngle=_minimumAngle - In the implementation block
@property (nonatomic,readonly) double totalWidth; 
@property (assign,nonatomic) double currentAngle;                        //@synthesize currentAngle=_currentAngle - In the implementation block
@property (nonatomic,readonly) double radius; 
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CGPoint)_center;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(double)radius;
-(double)_radius;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(double)strokeWidth;
-(double)totalWidth;
-(double)ringWidth;
-(void)_updateEffectiveColors;
-(double)_maskRadius;
-(double)_offsetStartAngle;
-(double)_offsetEndAngle;
-(CGPoint)_centerPointForMaskViewWithAngle:(double)arg1 adjustToCover:(BOOL)arg2 ;
-(void)_updateGradient;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(void)setMinimumAngle:(double)arg1 ;
-(void)setCurrentAngle:(double)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)gradientEndColor;
-(double)minimumAngle;
-(double)currentAngle;
@end

