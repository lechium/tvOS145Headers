/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIButton, NSString, UIColor;

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UIButton* _actionButton;
	BOOL _isTemplateLayout;
	BOOL _isCompactUI;
	BOOL _useCompactTopInset;
	NSString* _title;
	UIColor* _titleColor;
	unsigned long long _titleStyle;
	NSString* _actionTitle;
	/*^block*/id _action;

}

@property (assign,nonatomic) BOOL useCompactTopInset;                    //@synthesize useCompactTopInset=_useCompactTopInset - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                         //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned long long titleStyle;              //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                       //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) id action;                                    //@synthesize action=_action - In the implementation block
+(id)defaultBackgroundColor;
+(double)defaultHorizontalInset;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)action;
-(void)setAction:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(NSString *)actionTitle;
-(unsigned long long)titleStyle;
-(void)setTitleStyle:(unsigned long long)arg1 ;
-(void)createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(void)setUseCompactTopInset:(BOOL)arg1 ;
-(BOOL)useCompactTopInset;
@end

