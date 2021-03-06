/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetSectionHeaderUIView.h>

@class UILabel, UIButton, UIImageView;

@interface PXGadgetCustomSectionHeaderUIView : PXGadgetSectionHeaderUIView {

	UILabel* _appleInternalLabel;
	UIButton* _infoButton;
	UIImageView* _iconImageView;
	UILabel* _iconTitleLabel;

}

@property (nonatomic,retain) UILabel * appleInternalLabel;              //@synthesize appleInternalLabel=_appleInternalLabel - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                     //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * iconTitleLabel;                  //@synthesize iconTitleLabel=_iconTitleLabel - In the implementation block
+(id)_appleInternalLabelText;
+(double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(BOOL)arg5 ;
+(double)_preferredHeightOfAppleInternalTextWithWidth:(double)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconImageView;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)iconTitleLabel;
-(UILabel *)appleInternalLabel;
-(void)_infoButtonSelected;
-(void)configureTitleLabel:(id)arg1 ;
-(void)setAppleInternalLabel:(UILabel *)arg1 ;
-(void)setIconTitleLabel:(UILabel *)arg1 ;
@end

