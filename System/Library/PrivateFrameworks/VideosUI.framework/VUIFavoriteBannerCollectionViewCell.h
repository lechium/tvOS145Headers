/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUIFavoriteBannerView, VUIFavoriteBannerLayout;

@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell {

	VUIFavoriteBannerView* _bannerView;
	VUIFavoriteBannerLayout* _bannerLayout;
	double _width;

}

@property (assign,nonatomic) double width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerLayout * bannerLayout;              //@synthesize bannerLayout=_bannerLayout - In the implementation block
+(id)configureCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(VUIFavoriteBannerView *)bannerView;
-(void)setBannerView:(VUIFavoriteBannerView *)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
-(void)setBannerLayout:(VUIFavoriteBannerLayout *)arg1 ;
-(VUIFavoriteBannerLayout *)bannerLayout;
@end
