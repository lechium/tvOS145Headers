/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray;

@interface CNRepeatingGradientSeparatorView : UIView {

	UIColor* _startColor;
	UIColor* _endColor;
	long long _lineCount;

}

@property (nonatomic,readonly) NSArray * gradientColors; 
@property (nonatomic,retain) UIColor * startColor;                    //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,retain) UIColor * endColor;                      //@synthesize endColor=_endColor - In the implementation block
@property (assign,nonatomic) long long lineCount;                     //@synthesize lineCount=_lineCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(long long)lineCount;
-(void)setLineCount:(long long)arg1 ;
-(void)_updateGradients;
-(NSArray *)gradientColors;
-(UIColor *)startColor;
-(UIColor *)endColor;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
@end

