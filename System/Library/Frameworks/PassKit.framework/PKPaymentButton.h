/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class CAShapeLayer, CAFilter;

@interface PKPaymentButton : UIButton {

	CAShapeLayer* _layer;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	double _cornerRadius;
	long long _type;
	long long _style;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long style;                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(Class)layerClass;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
+(id)titleForType:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2 ;
-(void)applyAccessibilityValues;
-(long long)_effectiveButtonStyle;
@end

