/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UIColor;

@interface PKNumericBorderButton : UIButton {

	UIView* _bottomBorder;
	UIView* _topBorder;
	UIView* _trailingBorder;
	UIView* _leadingBorder;
	UIColor* _normalBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,copy) UIColor * normalBackgroundColor;                   //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBorder:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIColor *)highlightedBackgroundColor;
-(UIColor *)normalBackgroundColor;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
@end

