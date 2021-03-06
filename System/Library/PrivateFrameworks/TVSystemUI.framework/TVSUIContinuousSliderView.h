/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <TVSystemUI/TVSUIBaseSliderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSString;

@interface TVSUIContinuousSliderView : TVSUIBaseSliderView <UIGestureRecognizerDelegate> {

	UIView* _valueIndicatorClippingView;
	UIView* _backgroundView;
	double _startingLength;
	float _startingValue;
	double _continuousSliderCornerRadius;
	unsigned long long _axis;

}

@property (assign,nonatomic) double continuousSliderCornerRadius;                //@synthesize continuousSliderCornerRadius=_continuousSliderCornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long axis;                            //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) UIView * valueIndicatorClippingView;              //@synthesize valueIndicatorClippingView=_valueIndicatorClippingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(double)sliderLengthForValue:(float)arg1 ;
-(void)setContinuousSliderCornerRadius:(double)arg1 ;
-(float)filteredValueForValue:(float)arg1 ;
-(CGPoint)glyphCenter;
-(double)continuousSliderCornerRadius;
-(UIView *)valueIndicatorClippingView;
@end

