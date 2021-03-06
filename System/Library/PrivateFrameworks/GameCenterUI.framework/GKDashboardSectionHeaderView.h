/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSLayoutConstraint, UIColor, NSString, UIFont;

@interface GKDashboardSectionHeaderView : UICollectionReusableView {

	BOOL _onDarkBackground;
	UILabel* _titleLabel;
	NSLayoutConstraint* _leftMarginConstraint;
	UIColor* _titleColor;
	NSLayoutConstraint* _rightMarginConstraint;

}

@property (nonatomic,retain) UIColor * titleColor;                                    //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * rightMarginConstraint;              //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * leftMarginConstraint;               //@synthesize leftMarginConstraint=_leftMarginConstraint - In the implementation block
@property (assign,nonatomic) BOOL onDarkBackground;                                   //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
+(double)defaultHeight;
+(double)widthForTitle:(id)arg1 withFont:(id)arg2 ;
+(CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(NSLayoutConstraint *)leftMarginConstraint;
-(void)setLeftMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)onDarkBackground;
-(NSLayoutConstraint *)rightMarginConstraint;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
@end

