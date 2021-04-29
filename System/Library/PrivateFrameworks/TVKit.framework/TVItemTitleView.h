/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, TVImageProxy, TVImageView;

@interface TVItemTitleView : UIView {

	BOOL _ratingSnapsToTitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _rightTitleLabel;
	TVImageProxy* _imageProxy;
	TVImageProxy* _ratingImageProxy;
	TVImageView* _ratingImageView;
	TVImageView* _rightImageView;

}

@property (nonatomic,retain) TVImageView * ratingImageView;                //@synthesize ratingImageView=_ratingImageView - In the implementation block
@property (nonatomic,retain) TVImageView * rightImageView;                 //@synthesize rightImageView=_rightImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightTitleLabel;                    //@synthesize rightTitleLabel=_rightTitleLabel - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                    //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) TVImageProxy * ratingImageProxy;              //@synthesize ratingImageProxy=_ratingImageProxy - In the implementation block
@property (assign,nonatomic) BOOL ratingSnapsToTitle;                      //@synthesize ratingSnapsToTitle=_ratingSnapsToTitle - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setRatingImageProxy:(TVImageProxy *)arg1 ;
-(UILabel *)rightTitleLabel;
-(void)setRightTitleLabel:(UILabel *)arg1 ;
-(TVImageProxy *)ratingImageProxy;
-(BOOL)ratingSnapsToTitle;
-(void)setRatingSnapsToTitle:(BOOL)arg1 ;
-(TVImageView *)ratingImageView;
-(void)setRatingImageView:(TVImageView *)arg1 ;
-(TVImageView *)rightImageView;
-(void)setRightImageView:(TVImageView *)arg1 ;
@end
