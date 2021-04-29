/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, UIImageView, UIView;

@interface TVBulletinView : UIView {

	UIVisualEffectView* _backgroundView;
	long long _bulletinPosition;
	long long _style;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	UIView* _accessoryView;
	UIView* _containerView;

}

@property (nonatomic,readonly) UIView * containerView;               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) long long style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                 //@synthesize accessoryView=_accessoryView - In the implementation block
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UIView *)containerView;
-(id)initWithFrame:(CGRect)arg1 position:(long long)arg2 ;
-(void)_updateColorsForUserInterfaceStyle:(long long)arg1 ;
-(double)_maxTextWidth;
@end

