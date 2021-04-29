/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIContentView.h>

@protocol UIContentConfiguration;
@class UIImageView, UILabel, NSString;

@interface PKAccountInvitationAccessLevelContentView : UIView <UIContentView> {

	BOOL _isTemplateLayout;
	id<UIContentConfiguration> _configuration;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _secondarySubtitleLabel;

}

@property (nonatomic,readonly) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondarySubtitleLabel;                  //@synthesize secondarySubtitleLabel=_secondarySubtitleLabel - In the implementation block
@property (nonatomic,copy) id<UIContentConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIContentConfiguration>)configuration;
-(void)setConfiguration:(id<UIContentConfiguration>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)_applyConfiguration:(id)arg1 ;
-(UILabel *)secondarySubtitleLabel;
@end

