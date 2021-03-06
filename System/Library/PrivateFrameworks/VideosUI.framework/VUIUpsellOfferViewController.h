/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, VUIUpsellOfferView, TVImageProxy, UIImageView;

@interface VUIUpsellOfferViewController : _TVBgImageLoadingViewController {

	IKViewElement* _viewElement;
	VUIUpsellOfferView* _upsellView;
	TVImageProxy* _bgImageProxy;
	UIImageView* _bgImageView;

}

@property (nonatomic,retain) IKViewElement * viewElement;                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferView * upsellView;              //@synthesize upsellView=_upsellView - In the implementation block
@property (nonatomic,retain) TVImageProxy * bgImageProxy;                  //@synthesize bgImageProxy=_bgImageProxy - In the implementation block
@property (nonatomic,retain) UIImageView * bgImageView;                    //@synthesize bgImageView=_bgImageView - In the implementation block
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(IKViewElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(UIImageView *)bgImageView;
-(void)setBgImageView:(UIImageView *)arg1 ;
-(VUIUpsellOfferView *)upsellView;
-(id)_bgImageProxyFromElement:(id)arg1 ;
-(void)setBgImageProxy:(TVImageProxy *)arg1 ;
-(void)setUpsellView:(VUIUpsellOfferView *)arg1 ;
-(void)_tvOS_updateViews;
-(TVImageProxy *)bgImageProxy;
@end

