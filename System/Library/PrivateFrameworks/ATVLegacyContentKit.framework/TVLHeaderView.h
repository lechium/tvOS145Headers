/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLHeaderElement, TVImageView, UILabel;

@interface TVLHeaderView : UIView <ATVUpdatable> {

	TVLHeaderElement* _headerElement;
	long long _horizontalAlignment;
	TVImageView* _imageView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) TVLHeaderElement * headerElement;              //@synthesize headerElement=_headerElement - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                            //@synthesize padding=_padding - In the implementation block
-(void)_setSubtitle:(id)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(id)headerImage;
-(TVLHeaderElement *)headerElement;
-(id)initWithHeaderElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)_setHorizontalAlignment:(long long)arg1 ;
-(void)_setHeaderImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

