/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, TVImageProxy, UIImageView, _TVOrganizerView, NSArray;

@interface _TVDivTemplateController : _TVBgImageLoadingViewController {

	IKViewElement* _viewElement;
	TVImageProxy* _backgroundImageProxy;
	UIImageView* _backgroundImageView;
	_TVOrganizerView* _contentView;
	NSArray* _viewControllers;

}

@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) TVImageProxy * backgroundImageProxy;              //@synthesize backgroundImageProxy=_backgroundImageProxy - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) _TVOrganizerView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                          //@synthesize viewControllers=_viewControllers - In the implementation block
-(id)init;
-(_TVOrganizerView *)contentView;
-(void)setContentView:(_TVOrganizerView *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)_updateContentView;
-(void)updateWithViewElement:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setBackgroundImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)backgroundImageProxy;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
@end

